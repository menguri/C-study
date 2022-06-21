#include <iostream>
#include <string.h>
#include <string>
using namespace std;


class class1
{
    private:
        int private_varible;
        void set_private(int);
    
    public:
        int class1_num = 30;
        int set_public(int);
};

class class2
{
    private:
        bool like(int);

    public:
        int height;
        string name[30];
        void introduce(int height, string name){cout << name << "의 키는 " << height << " 이야.\n";};
        void likey(int);
};


class height_class
{
    private:
        string normal_weight_;
    public:
        height_class(const string& name, int height);
        string name_;
        int height_;
        const height_class& larger(const height_class&);
};


int main(void)
{
    printf("[클래스의 개념]\n");
    printf("클래스란? 구조체의 상위호환. 멤버변수(프로퍼티), 멤버함수(메소드)를 포함한다. \n");
    printf("OOP의 특징: (1) 추상화 (2) 캡슐화 (3) 정보 은닉 (4) 상속성 (5) 다형성\n");
    printf("인스턴스: 클래스를 사용하기 위해 선언하는 클래스 타입의 객체. 메모리에 대입된다. 클래스도 일종의 사용자 정의 타입.\n");
    printf("* 객체들은 자신만의 멤버변수를 가지지만 멤버함수는 모든 인스턴스가 공유한다.\n\n");

    printf("[클래스의 선언]\n");
    // class 클래스이름
    // {
    // 접근제어지시자1:
        // 멤버변수1의타입 멤버변수1의이름;
        // 멤버변수2의타입 멤버변수2의이름;
        // ...
        // 멤버함수1의 원형
        // 멤버함수2의 원형
    // };
    printf("private(생략 가능), public(생략 불가) 접근 제어 지시자 설정. private 설정을 할 경우, 외부자는 변경 불가. 캡슐화 구현.\n");
    printf("객체 선언 -> 클래스이름 객체참조변수이름;\n");
    class1 class101;
    printf("클래스 선언 밖에서 멤버함수 정의 -> 반환타입 클래스::멤버함수(변수){몸체;}\n");
    cout << "class101.set_public(30)'s result : " << class101.set_public(30) << endl << endl;

    printf("[접근 제어]\n");
    printf("1. 정보 은닉 & 접근 제어\n");
    printf("* 구조체는 외부에서 접근 가능. 하지만 객체 지향의 대표인 클래스는 정보 은닉 생각해야 해.\n");
    printf("* public, private, protected를 통해 접근을 제안한다.\n\n");

    printf("2. public 접근 제어 지시자\n");
    printf("* 외부로 공개되고, 어디서에나 접근 가능하다. private 멤버와 프로그램 사이의 인터페이스 역할.\n");
    printf("* public 멤버 함수를 통해서는 private 멤버에도 접근이 가능하다.\n\n");

    printf("3. private 접근 제어 지시자\n");
    printf("* 외부에 공개되지 않는다. public 멤버 함수를 통해서만 접근 가능.\n");
    printf("* 기본 접근 제어 권한은 private로 설정. 생략 가능. 세부적인 동작 구현하는데 사용.\n\n");
    
    class2 class202;
    class202.introduce(189, "강만고");
    class202.likey(189);


    printf("4. protected 접근 제어 지시자\n");
    printf("* 파생 클래스와 관련된 접근 제어 지시자\n");
    printf("* 파생 클래스에 대해서는 public 멤버처럼 취급, 외부에서는 private 멤버처럼 취급.\n\n");
    
    
    printf("[this 포인터]\n");
    printf("1. 멤버 함수의 공유\n");
    printf(": 같은 클래스끼리는 멤버 함수를 공유한다. 만약 자기 자신을 함수의 인수로 넣고 싶을 때는 어떻게 해야 할까?\n");
    printf("2. this 포인터\n");
    printf(": 자기 자신만의 this 포인터 가진다. 해당 멤버 함수를 호출한 객체를 가리키게 되며, 정확한 파악이 가능.\n");
    height_class kang("강만추", 182);
    height_class ming("밍주천", 190);

    cout << "둘 중 더 큰 사람은 " << kang.larger(ming).name_ << " 입니다.\n" << endl;

    printf("* 클래스, 구조체 또는 열거체 타입의 비정적 멤버 함수에만 사용 가능\n");
    printf("* this 포인터는 포인터 상수. 재할당 불가능.\n");
    return 0;
    
}



int class1::set_public(int p){return p;}

bool class2::like(int height)
{
    if (height >  180){
        return true;
    };
    return false;
}

void class2::likey(int height)
{
    bool result1 = like(height);
    if (result1 == false){
        printf("이 분은 제 이상형이 아닙니다.\n\n");
    }
    else{
        printf("이 분은 제 이상형입니다.\n\n");
    }
}


height_class::height_class(const string& name, int height)
{
    name_ = name;
    height_ = height;
    normal_weight_ = height / 2.5;
}

const height_class& height_class::larger(const height_class& anothor)
{
    if (anothor.height_ > this->height_){
        return anothor;
    }
    else {
        return *this;
    }
}