#include <iostream>
#include <string.h>
#include <string>
#include <cmath>
using namespace std;


class player;

class bmi
{
    public:
        void bmi_caculating(const player& origin);
        void display(){printf("example");};
};

class player
{
    private:
        const double ratio_ = 5.5;
        double height_;
        double weight_;
        string name_;

    public:
        static int muscle_power;            // 정적 멤버 변수
        static int muscle_count();          // 정적 멤버 함수
        player(double, double, string);     // 생성자
        ~player(){muscle_power--;};         // 소멸자
        void introduce() const;
        friend player operator*(double mul, const player& origin);
        friend class bmi;
        friend void bmi::bmi_caculating(const player& origin);
};

player operator*(double mul, const player& origin);



int main(void)
{
    printf("[OOP 캡슐화]\n");
    printf("* 객체 안에서 단단해지고, 외부에 대한 의존도를 낮추기 위한 장치 \n");
    printf("* 애초에 private, public 접근제어 지시자를 통해 통제하고 있다.\n\n");

    printf("[프렌드]\n");
    printf("* 멤버 함수는 객체를 호출하기에 이항 연산자의 매개변수 순서, 타입에 민감\n");
    printf("* 전역 변수로 하면 private 접근 불가. 그래서 프렌드 키워드를 통해 접근할 수 있도록.\n");
    player nadal = player(185, 85, "나달");
    player federer = player(184.6, 73, "페더러");
    player nadal_2 = 5 * nadal;
    player federer_2 = 10 * federer;
    printf("\n");


    printf("[다양한 프렌드]\n");
    printf("1. 클래스 프렌드\n");
    printf("* A 클래스에 B를 friend로 둘 경우, B에서 A의 멤버변수, 함수를 이용할 수 있다.\n");
    bmi player_bmi;
    player_bmi.bmi_caculating(nadal);
    player_bmi.bmi_caculating(federer);
    printf("\n");


    printf("2. 클래스 프렌드 멤버함수\n");
    printf("* 클래스의 특정 함수에 대해서만 접근할 수 있도록 한다.\n");
    printf("friend void bmi::bmi_caculating(const player& origin);\n");
    printf("\n");
    
    printf("3. 전방 선언\n");
    printf("* 순환 참조(서로가 서로를 참조)를 피하기 위해 한 클래스를 다른 클래스의 앞에 미리 선언\n");
    printf("* class 클래스이름;\n");
    printf("* 선언 위치 신경써야 한다. 프렌드 선언 처리를 할 수 있는지 파악할 것.\n");
    printf("\n");
    printf("\n");
    
    
    printf("[정적 멤버(static member variable)와 상수 멤버]\n");
    printf("1. 정적 멤버 변수\n");
    printf("* 클래스에 속하지만, 객체 별로 할당되지 않고 모든 객체가 공유.\n");
    printf("* 클래스 영역에서 선언되지만, 정의는 파일 영역에서 수행.\n");
    printf("* 클래스의 멤버 함수나 프렌드만이 접근 가능\n");
    printf("* 접근하게 하고 싶으면 public에 선언.\n");
    printf("static int muscle_power;\n");
    printf("int player::muscle_power = 80;\n");
    nadal.introduce();
    federer.introduce();
    printf("\n");

    printf("2. 정적 멤버 함수\n");
    printf("* 객체를 생성하지 않고도, 클래스 이름만으로 호출 가능.\n");
    printf("* 객체를 생성하지 않기에 this 포인터를 가지지 않는다.\n");
    printf("* 정적 멤버 변수 밖에 사용할 수 없다.\n");
    printf("static int muscle_count(); \n");
    printf("int player::muscle_count()\n");
    nadal.introduce();
    federer.introduce();
    printf("\n");

    printf("3. 상수 멤버 변수 / 상수 멤버 함수\n");
    printf("* 상수 멤버 변수는 한 번 초기화하면, 그 값을 변경할 수 없는 멤버 변수.\n");
    printf("* const 타입 멤버변수이름;\n");
    printf("* 상수 멤버 함수는 호출한 객체의 데이터를 변경할 수 없는 멤버 함수.\n");
    printf("* 함수의 원형 const\n");
    printf("\n");
    return 0;
}


player::player(double height, double weight, string name)
{
    height_ = height;
    weight_ = weight;
    name_ = name;
    introduce();
}

int player::muscle_power = 80;

int player::muscle_count()
{
    return muscle_power - 80;
}

void player::introduce() const
{
    cout << "[선수 profile]" << endl;
    cout << muscle_count() << " 번째 선수" << endl;
    cout << "선수 이름 : " << this->name_ << endl;
    cout << "선수 키 : " << this->height_ << endl;
    cout << "선수 몸무게 : " << this->weight_ << endl;
    cout << "힘 : " << ++muscle_power << endl;
}

player operator*(double mul, const player& origin)
{
    double new_height = origin.height_ * mul;
    double new_weight = origin.weight_ * mul;
    return player(new_height, new_weight, origin.name_ + "_2");
}

void bmi::bmi_caculating(const player& origin)
{
    double bmi_cal = (origin.weight_ / pow(origin.height_, 2)) * 100;
    cout << origin.name_ << " 의 bmi : " << bmi_cal << endl;
}