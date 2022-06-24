#include <iostream>
#include <string.h>
#include <string>
using namespace std;


class Position
{
    private:
        double x_;
        double y_;
    public:
        Position(double x, double y);
        Position operator-(const Position& other); 
        void Display();

        friend Position operator+(const Position& pos4, const Position& pos5);
};


int main(void)
{
    printf("[연산자 오버로딩]\n");
    printf("=> -,*,/,+ 등의 연산자에 대해서도 내 맘대로 커스텀하고, 오버로딩 시킬 수 있다.\n");
    printf("=> 사용자 정의 타입까지 확장할 수 있고, 클래스도 하나의 타입임을 보여준다.\n\n");
    
    printf("1. 연산자 함수(operator function)\n");
    printf("문법 => operator오버로딩할연산자(매개변수목록)\n");
    printf("정의 => 연산자를 내 마음대로 costom해서 함수처럼 쓰는 것\n");
    Position pos1 = Position(3.3,4.4);
    Position pos2 = Position(8.8,9.9);
    Position pos3 = pos1 - pos2;
    pos3.Display();
    printf("\n");

    printf("2. 연산자 함수의 정의 방법\n");
    printf("(1) 클래스 멤버 함수로 정의(위의 예제)\n");
    printf("(2) 전역 함수로 정의 => 원래 private에 접근 못한다. friend 함수를 사용해서 접근.\n");
    Position pos4 = Position(3.3,4.4);
    Position pos5 = Position(8.8,9.9);
    Position pos6 = pos4 + pos5;
    pos6.Display();
    printf("\n");

    printf("[오버로딩의 제약 사항]\n");
    printf("1. 전혀 새로운 연산자를 정의할 순 없다.\n");
    printf("2. 기본 타입을 다루는 연산자의 의미는 재정의 불가. 사용자 정의 타입. class, 구조체 같은.\n");
    printf("3. 오버로딩된 연산자는 기본 타입에 적용되는 피연산자의 수, 우선순위 및 그룹화를 준수한다.\n");
    printf("4. 디폴트 인수를 사용할 수 없다.\n");
    printf("* 오버로딩할 수 없는 연산자/멤버 함수로만 오버로딩할 수 있는 연산자 \n");

}


Position::Position(double x, double y)
{
    x_ = x;
    y_ = y;
}

Position Position::operator-(const Position& other)
{
    return Position((x_+other.x_)/2, (y_+other.y_)/2);
}


// 클래스 한정 연산자가 아니다. 이곳저곳에서 쓸 수 있다. 하지만 결과물이 Postition이고, private에 접근하고 싶다면 별다른 조처를 취해야 함.
Position operator+(const Position& pos4, const Position& pos5)
{
    return Position((pos4.x_ + pos5.x_)*2, (pos4.y_ + pos5.y_)*2);
}

void Position::Display()
{
    cout << "pos3의 x, y 값 : " << this->x_ << " , " << this->y_ << endl;
}