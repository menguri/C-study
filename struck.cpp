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
}