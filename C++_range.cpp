#include <iostream>
#include <string.h>
#include <string>
using namespace std;

static int InnerStatic = 1;

#include "C++_range_2.cpp"
extern int OuterStatic;

void Scope(void);

void Static_func(void);
void Static_func2(void);

void InnerStatic_func(void);


namespace kang
{
    string first;
    string last;
}

namespace nameus
{
    string second;
    string third;
}
using namespace nameus;

namespace nameus2
{
    string forth;
    string fifth;
}
using nameus2::forth;

int main(void)
{
    printf("[유효 범위(scope)]: 하나의 변환 단위 내에서 해당 변수가 사용될 수 있는 범위\n");
    printf("* C++ 표준에서는 파일(file)이라는 용어보단 변환 단위라는 용어를 사용.\n");
    printf("[연결(linkage)]: 해당 변수를 사용할 수 있는 파일의 접근 가능 여부.\n");
    printf("* 외부 연결 -> 여러 파일 사용 가능. 내부 연결 -> 하나의 파일에서만. 함수 내에서 선언된 변수 -> 함수 밖에서 사용 불가\n\n");
    
    printf("[C++ 변수의 종류]\n");
    printf("* 자동 변수\n");
    printf("* 레지스터 변수\n");
    printf("* 정적 변수\n\n");
    
    printf("1. 자동 변수(automatic variable\n");
    printf("* 블록 내에서 선언된 변수. 함수의 매개변수 포함. 블록 내에서만 유효하고 블록 종료되면 메모리에서 사라진다. 스택에 저장. C언어의 지역 변수와 같은 의미\n");
    printf("* 현실에서는 변수의 이름을 같게 해서는 안된다.\n");
    int var = 10;
    cout << "main 함수 안에서 선언된 var 변수는 " << var << " 입니다." << endl;
    Scope();
    if (var < 11){
        int var = 100;
        cout << "if 안에서 선언된 var 변수는 " << var << " 입니다." << endl;
    }
    cout << "현재 자동 변수 var는 " << var << " 입니다." << endl << endl;


    printf("2. 레지스터 변수\n");
    printf("* C언어에선 CPU 레지스터 메모리에 저장하는 변수. 하지만 C++ 넘어오면서 그냥 자동 변수 의미하는 역할\n\n");
    
    
    printf("3. 정적 변수(static variable)\n");
    printf("* 프로그램이 실행되는 내내 유지되는 변수\n");
    printf("* 데이터 영역에 저장되고, 초기화되지 않으면 0으로 자동 초기화\n\n");
    
    printf("3-1. 연결을 가지지 않는 정적 변수\n");
    printf("* static 키워드 사용하여 정의. 지역 변수 + 전역 변수\n");
    printf("* 한 번만 초기화되고, 프로그램이 종료되어야 메모리 상에서 사라진다. 해당 블록 내에서만 접근 가능\n");
    for (int i=0; i < 5; i++){
        Static_func();
        Static_func2();
    }
    printf("* 자유변수는 함수 종료되면 변수 초기화. 정적변수는 메모리에 남아있기 때문에 값이 변한다.\n\n");

    printf("3-2. 내부 연결을 가지는 정적 변수\n");
    printf("* 유효 범위를 변환 단위(현재 파일)로 가진다. \n");
    printf("* 하나의 파일 내의 모든 블록에서 접근 가능.\n");
    cout << "InnerStatic의 값은 " << InnerStatic << " 입니다." << endl;
    if (InnerStatic < 50){
        cout << "if 문에서도 InnerStatic은 유효합니다 : " << InnerStatic << endl;
    }
    InnerStatic_func();
    int InnerStatic = 50;
    cout << "정적 변수가 선언된 후, 다시 자유 변수가 똑같은 이름으로 선언되면 덧씌워지면서 정적 변수는 접근 불가입니다." << endl;
    cout << "바뀐 InnerStatic : " << InnerStatic << endl << endl;
    
    printf("3-3. 외부 연결을 가지는 정적 변수\n");
    printf("* 유효 범위를 변환 단위로 가진다. 외부 연결을 가지기에, 전역 변수/외부 변수라고도 함.\n");
    printf("* 외부 파일에서도 사용할 수 있으며, 모든 파일에서 각각 extern 키워드 사용. 변수 정의는 한 파일에서만.\n");
    cout << "C++_range_2.cpp에서 가져온 OuterStatic 변수 : " << OuterStatic << endl << endl;


    printf("[네임스페이스(namespace)]\n");
    printf("* 내부 식별자에 사용될 수 있는 유효 범위를 제공하는 선언적 영역\n");
    printf("* 변수, 함수, 구조체, 클래스 등을 all 구분 가능. 특정 네임스페이스 안에 있는 이것저것 구분.\n\n");
    
    
    printf("[네임스페이스 정의/접근]\n");
    printf("* namespace 키워드를 이용하여 정의 가능. 다른 네임스페이스 내에서도 정의될 수 있다. 블록 내에서는 정의 X\n");
    printf("* C++에는 전역 namespace 존재. 식별자의 namespace 없으면 전역으로 포함.\n");
    kang::first = "강";
    kang::last = "만고";
    cout << "나의 이름은 " << kang::first+kang::last << " 입니다." << endl << endl;

    printf("[간소화 -> using 지시자(directive)/선언(declaration)]\n");
    printf("using 지시자: using namespace kang\n");
    printf("*해당 블록에서만 해당 네임스페이스의 모든 이름 사용 가능.\n");
    second = "이거는 using 지시자를 이용한 출력이랑께";
    cout << "using 지시자 이용해서 second 변수를 출력합니다 : " << second << endl << endl;
    printf("using 선언: using namespace kang::first\n");
    printf("* 단 하나의 이름만을 사용할 수 있게 한다.\n");
    forth = "이거는 using선언을 이용한 출력이랑께";
    cout << "using 선언 이용해서 forth 변수를 출력합니다 : " << forth << endl;
}


void Scope(void)
{
    int var = 99;
    cout << "Scope 함수 안에서 선언된 var 변수는 " << var << " 입니다." << endl;
}


void Static_func(void)
{
    static int var = 10;
    cout << "현재 정적변수 var의 값은 " << var << " 입니다." << endl;
    var++;
}

void Static_func2(void)
{
    int var = 10;
    cout << "현재 자유변수 var의 값은 " << var << " 입니다." << endl;
    var++;
}

void InnerStatic_func(void)
{
    cout << "함수 내에서도 InnerStatic은 유효합니다 : " << InnerStatic << endl;
}