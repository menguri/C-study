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
    printf("����ü�� ����� ���� Ÿ���̴�.\n");
    printf("����ü�� �پ��� Ÿ���� ���� ������ �ϳ��� Ÿ������ ��Ÿ����.\n\n");
    // �̰��� book Ÿ���̾�~ ���; �����ϰ� �� �� �ִ�. 
    printf("[����ü �����ϱ�]\n");
    // struct Book
    // {
    //     char title[20];
    //     char author[30];
    //     int price;
    // };
    printf("[����ü ���� �����ϱ�]\n");
    // struct Book web_book;
    printf("struct Book web_book;\n");
    printf("[����ü ���� �ʱ�ȭ]\n");
    Book web_book = {"�����̶� �����ΰ�?", "���� ����", 21000};
    Book amazon_book = {"���� �����ڴ�.", "������"};
    printf("*����ִ� ���� 0���� �ʱ�ȭ �ȴ�.\n");

    cout << "������ ������ " << web_book.title << " �̰�, ���ڴ� " << web_book.author << " �̸�, ������ " << web_book.price << " �̴�." << endl;
    cout << "�Ƹ������� ������ " << amazon_book.title << " �̰�, ���ڴ� " << amazon_book.author << " �̸�, ������ " << amazon_book.price << " �̴�.\n" << endl;
}