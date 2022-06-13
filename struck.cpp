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


//��ø�� ����ü
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


    printf("[����ü Ȱ��]\n");
    printf("1. �Լ��� ����ü\n");
    int ming_prop;
    Prop ming = {10000, 3000};
    ming_prop = CalcProperty(ming.savings, ming.loan);
    cout << "�α��� ����� ���� " << ming.savings << " �� ���� " << ming.loan << " �� �� " << ming_prop << " �̴�.\n" << endl;
    
    printf("2. �Լ��� �μ��� ����ü�� �ּҸ� ���� �����Ѵ�.\n");
    int ming_prop2;
    ming_prop2 = CalcProperty2(&ming);
    cout << "�α��� ����� ���� " << ming.savings << " �� ���� " << ming.loan << " �� �� " << ming_prop2 << " �̴�.\n" << endl;

    printf("3. �Լ� �������� �μ��� ���� ������ �� ������ �ϴ� ���� �����ϴ�.\n");
    ming = InitProperty();
    int ming_prop3;
    ming_prop3 = CalcProperty3(&ming);
    cout << "�α��� ����� ���� " << ming.savings << " �� ���� " << ming.loan << " �� �� " << ming_prop3 << " �̴�.\n\n" << endl; 


    printf("[��ø�� ����ü]\n");
    printf("��� ������ �� �ٸ� ����ü�� ������ �� �ִ�.\n");
    winner rafa = {
        {"���Ŀ�", "����"},
        "32��",
        "����"
    };
    cout << "������ ������ ����, ���� ����ڴ� " << rafa.name.first << rafa.name.last << "( " << rafa.gender << "/" << rafa.age << " ) �Դϴ�!" << endl << endl;

    printf("[����ü�� ũ��]\n");
    printf("��� ������ ���� ����ü�� ũ�⵵ ������� �������ϴ�. \n ������ ������ ������� ����=����ü�� ũ�� �� �ƴմϴ�.\n");
    cout << "����ü TypeSize�� �� ������� ũ��� ������ �����ϴ�.\n" << endl;
    cout << "int = " << sizeof(int) << ", " << "char = " << sizeof(char) << ", " << "double = " << sizeof(double) << ", " << "string = " << sizeof(string) << endl;
    cout << sizeof(TypeSise);
    printf("����ü�� �޸𸮿� �Ҵ��� ��, �ӵ��� ���� ����Ʈ �е� ��Ģ�� �̿��Ѵ�.\n");
    printf("���� ū ��� ������ �������� �޸� ũ�⸦ �����. ���� ũ�Ⱑ ū double �� - 8 ����Ʈ. char���� 8����Ʈ �Ҵ��ϰ� ���� ������ int�� �Ҵ�. \n �׷��ٰ� 8����Ʈ �̻�Ǵ� ������ ������ ���Ӱ� �ٽ� 8����Ʈ �Ҵ��ϴ� ���\n\n");
    
    
    printf("[����ü�� ����ü]\n");
    printf("1. ����ü\n");
    printf("��� ��� ������ �ϳ��� �޸� ������ �����Ѵ�. �پ��� Ÿ���� �����͸� ������ �� �ִ�.\n");
    printf("�� ��� �������� �ʱ�ȭ�ϸ�, ������ ��� �����鵵 ���� �����͸� �����Ѵ�.\n");
    ShareData var;
    var.c = 0x12345657;
    cout << hex;
    cout << var.a << endl;
    cout << var.b << endl;
    cout << var.c << endl << endl;


    printf("1. ����ü\n");
    printf("���ο� Ÿ���� �����ϸ鼭 ���ÿ� �� Ÿ���� ���� �� �ִ� ������ ������� ���� ����Ѵ�. ������ up, ������ �ǹ̺ο�\n");
    int input;
    Weather today_weather;

    cout << "������ ������ �Է����ּ��� : " << endl;
    cout << "(SUNNY = 0, CLOUD = 10, RAIN = 20, SNOW = 30)\n" << endl;
    cin >> input;
    today_weather = (Weather)input;

    switch (today_weather)
    {
    case SUNNY :
        cout << "������ ������ �������!";
        break;

    case CLOUD :
        cout << "������ ������ �����ؿ�!";
        break;

    case RAIN :
        cout << "������ ������ ��ġ�־��!";
        break;

    case SNOW :
        cout << "������ ������ �ų���!";
        break;

    default:
        cout << "��Ȯ�� ������� �Է����ּ���.";
        break;
    }

    cout << endl << "����ü Weather�� �� ������� " << SUNNY << ", " << CLOUD << ", "
        << RAIN << ", " << SNOW << "�Դϴ�.";

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