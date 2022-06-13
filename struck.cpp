#include <iostream>
#include <string.h>
#include <string>
using namespace std;


struct Book
{
    char title[30];
    char author[30];
    int price;
};

struct Prop
{
    int savings;
    int loan;
};

//1
int CalcProperty(int, int);

//2
int CalcProperty2(Prop*);

//3
Prop InitProperty(void);
int CalcProperty3(const Prop*);


//중첩된 구조체
struct player_name
{
    string first;
    string last;
};

struct winner
{
    player_name name;
    string age;
    string gender;
};


struct TypeSise
{
    int a;
    char b;
    double c;
    string u;
};


union ShareData
{
    unsigned char a;
    unsigned short b;
    unsigned int c;
};


enum Weather {SUNNY = 0, CLOUD = 10, RAIN = 20, SNOW = 30};


int main(void)
{
    printf("구조체란 사용자 정의 타입이다.\n");
    printf("구조체는 다양한 타입의 변수 집합을 하나의 타입으로 나타낸다.\n\n");
    // 이것은 book 타입이야~ 라고; 선언하고 쓸 수 있다. 
    printf("[구조체 선언하기]\n");
    // struct Book
    // {
    //     char title[20];
    //     char author[30];
    //     int price;
    // };
    printf("[구조체 변수 선언하기]\n");
    // struct Book web_book;
    printf("struct Book web_book;\n");
    printf("[구조체 변수 초기화]\n");
    Book web_book = {"개발이란 무엇인가?", "피터 존슨", 21000};
    Book amazon_book = {"나는 개발자다.", "존조바"};
    printf("*비어있는 값은 0으로 초기화 된다.\n");

    cout << "웹북의 제목은 " << web_book.title << " 이고, 저자는 " << web_book.author << " 이며, 가격은 " << web_book.price << " 이다." << endl;
    cout << "아마존북의 제목은 " << amazon_book.title << " 이고, 저자는 " << amazon_book.author << " 이며, 가격은 " << amazon_book.price << " 이다.\n" << endl;


    printf("[구조체 활용]\n");
    printf("1. 함수와 구조체\n");
    int ming_prop;
    Prop ming = {10000, 3000};
    ming_prop = CalcProperty(ming.savings, ming.loan);
    cout << "민구의 재산은 적금 " << ming.savings << " 에 대출 " << ming.loan << " 을 뺀 " << ming_prop << " 이다.\n" << endl;
    
    printf("2. 함수의 인수로 구조체의 주소를 직접 전달한다.\n");
    int ming_prop2;
    ming_prop2 = CalcProperty2(&ming);
    cout << "민구의 재산은 적금 " << ming.savings << " 에 대출 " << ming.loan << " 을 뺀 " << ming_prop2 << " 이다.\n" << endl;

    printf("3. 함수 내에서는 인수를 직접 수정할 수 없도록 하는 것이 안전하다.\n");
    ming = InitProperty();
    int ming_prop3;
    ming_prop3 = CalcProperty3(&ming);
    cout << "민구의 재산은 적금 " << ming.savings << " 에 대출 " << ming.loan << " 을 뺀 " << ming_prop3 << " 이다.\n\n" << endl; 


    printf("[중첩된 구조체]\n");
    printf("멤버 변수로 또 다른 구조체를 포함할 수 있다.\n");
    winner rafa = {
        {"라파엘", "나달"},
        "32살",
        "남자"
    };
    cout << "올해의 프랑스 오픈, 남자 우승자는 " << rafa.name.first << rafa.name.last << "( " << rafa.gender << "/" << rafa.age << " ) 입니다!" << endl << endl;

    printf("[구조체의 크기]\n");
    printf("멤버 변수에 따라 구조체의 크기도 어느정도 정해집니다. \n 하지만 언제나 멤버변수 총합=구조체의 크기 는 아닙니다.\n");
    cout << "구조체 TypeSize의 각 멤버변수 크기는 다음과 같습니다.\n" << endl;
    cout << "int = " << sizeof(int) << ", " << "char = " << sizeof(char) << ", " << "double = " << sizeof(double) << ", " << "string = " << sizeof(string) << endl;
    cout << sizeof(TypeSise);
    printf("구조체를 메모리에 할당할 때, 속도를 위해 바이트 패딩 규칙을 이용한다.\n");
    printf("가장 큰 멤버 변수를 기준으로 메모리 크기를 맞춘다. 가장 크기가 큰 double 형 - 8 바이트. char형에 8바이트 할당하고 남는 공간에 int형 할당. \n 그러다가 8바이트 이상되는 데이터 나오면 새롭게 다시 8바이트 할당하는 방식\n\n");
    
    
    printf("[공용체와 열거체]\n");
    printf("1. 공용체\n");
    printf("모든 멤버 변수가 하나의 메모리 공간을 공유한다. 다양한 타입의 데이터를 저장할 수 있다.\n");
    printf("한 멤버 변수만을 초기화하면, 나머지 멤버 변수들도 같은 데이터를 공유한다.\n");
    ShareData var;
    var.c = 0x12345657;
    cout << hex;
    cout << var.a << endl;
    cout << var.b << endl;
    cout << var.c << endl << endl;


    printf("1. 열거체\n");
    printf("새로운 타입을 선언하면서 동시에 그 타입이 가질 수 있는 정수형 상숫값도 같이 명시한다. 가독성 up, 변수에 의미부여\n");
    int input;
    Weather today_weather;

    cout << "오늘의 날씨를 입력해주세요 : " << endl;
    cout << "(SUNNY = 0, CLOUD = 10, RAIN = 20, SNOW = 30)\n" << endl;
    cin >> input;
    today_weather = (Weather)input;

    switch (today_weather)
    {
    case SUNNY :
        cout << "오늘의 날씨는 끝내줘요!";
        break;

    case CLOUD :
        cout << "오늘의 날씨는 선선해요!";
        break;

    case RAIN :
        cout << "오늘의 날씨는 운치있어요!";
        break;

    case SNOW :
        cout << "오늘의 날씨는 신나요!";
        break;

    default:
        cout << "정확한 상숫값을 입력해주세요.";
        break;
    }

    cout << endl << "열거체 Weather의 각 상숫값은 " << SUNNY << ", " << CLOUD << ", "
        << RAIN << ", " << SNOW << "입니다.";

    return 0;
}

int CalcProperty(int s, int l)
{
    return (s - l);
};

int CalcProperty2(Prop* money)
{
    money -> savings = 100;
    return (money->savings - money->loan);
};

Prop InitProperty(void)
{
    Prop ming_prop = {10000, 4000};
    return ming_prop;
};

int CalcProperty3(const Prop* money)
{
    return (money-> savings - money-> loan);
}