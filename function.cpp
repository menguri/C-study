#include <iostream>
#include <string.h>
#include <string>
using namespace std;


void Swap(int&, int&);

struct Book
{
    string title;
    string author;
    int price;
};

void Display(const Book&);

int SumFunction(int, int, int c=8, bool n=false);

void OverLoading(string, string);
void OverLoading(int, int);
void OverLoading(int, int, int);
void OverLoading(string, int);


inline void PrintBook(Book* book, int a){cout << book->title << " å�� ������ " << a << " �� �����Ǿ����ϴ�." << endl;}

int main(void)
{
    printf("[������]\n");
    // Ư�� ������ ���� �̸� ��� ����� �� �ִ� ������ 
    // -> ũ�Ⱑ ū ����ü�� ���� �����͸� �Լ��� �μ��� ������ �� ���. 
    printf("1. �������� ����\n");
    printf("* & �����ڴ� �ּ� �����ڰ� X, Ÿ���� �ĺ��ϱ� ���� ����ϴ� �ĺ���. int&�� int�� ������ ���� ������ ����.\n");
    printf("* �������� Ÿ�� = ������ Ÿ��\n");
    printf("* �����ڴ� ����� ���ÿ� �ʱ�ȭ\n");
    printf("* �� �� �ʱ�ȭ�Ǹ�, ���� ����� ������ �� ����.\n");
    int num1 = 5;
    int& num1_refer = num1;
    cout << "num1 : " << num1 << ", num1�� �����ڿ� ���� �� : " << num1_refer << endl;
    printf("�����ڸ� �̿��� ���� ������Ű�� �Ȱ��� �����Ѵ�.\n");
    num1_refer++;
    cout << "num1 : " << num1 << ", num1�� �����ڿ� ���� �� : " << num1_refer << endl << endl;    

    printf("2. �Լ��� �μ��μ� ����\n");
    printf("* �����ڴ� �ַ� �Լ� �μ��� ������ �� ���\n");
    printf("* �Լ� �μ��� ���޵Ǹ�, ���� ������ ���� �Լ� ������ ���� ����\n");
    printf("* �����͸� ����ص� �Ȱ��� ���\n");
    printf("* �Լ� ������ ���� ������(*)�� ������� �ʴ´�. ���� �ڵ尡 ���\n");
    printf("* �Լ��� ȣ���� ���� ���� ���� ����̶�, �ڵ� �б� ���� �ʴ�.\n");
    printf("* ������ �Լ��� �׳� �� ����. ���� ȣ���� �ʿ��� �� ������ ���.\n");
    printf("* C++���� �����ڴ� ũ�Ⱑ ū ����ü�� Ŭ������ �ٷ� ������ ���.\n");
    int num2 = 5, num3 = 10;
    cout << "���� �� num2 : " << num2 << ", ���� �� num3 : " << num3 << endl;
    Swap(num2, num3);
    cout << "���� �� num2 : " << num2 << ", ���� �� num3 : " << num3 << endl << endl;
    
    printf("3. ����ü�� ����\n");
    printf("* �����ڴ� �ַ� ����ü���� ����� ���� Ÿ���� �ٷ� �� ����\n");
    printf("* ������� �Ȱ���.\n");
    printf("* �Լ� ���ο��� ����ü�� ���� ������ �ʿ䰡 ���� ���� const Ű����\n");
    Book fiction = {"�� �ʴ� ������°�?", "���α�", 200000};
    Display(fiction);


    printf("[����Ʈ �μ�]\n");
    // �⺻���� �̸� ���ǵǾ� �ִ� �μ��� ���Ѵ�.
    // �Լ� ȣ�� ��, �μ��� �������� ������ ����Ʈ �μ��� �Լ��� ����ȴ�.
    printf("1. ����Ʈ �μ��� ����\n");
    printf("* �Լ� ���������� ���� ����\n");
    printf("* ����Ʈ �μ��� �����ʿ��� �����Ͽ� ������θ� ���� ����\n");
    printf("* ��� �μ��鸸 ������ ����Ʈ �μ��� ������ �� ����.\n");
    int num4 = 6, num5 = 7;
    int result1;
    result1 = SumFunction(num4, num5);
    cout << "����� : " << result1 << endl << endl;

    printf("[�Լ� �����ε�]\n");
    printf("1. �Լ� �����ε�\n");
    printf("* ���� �̸��� �Լ��� �ߺ��Ͽ� �����Ѵ�.\n");
    printf("* ���� �Լ��� �ϳ��� �̸����� �����Ѵ�.\n");
    printf("* ��ü ���� ���α׷����� Ư¡ �� �������� ����\n\n");

    printf("2. �Լ� �ñ״�ó\n");
    printf("* �Լ��� ������ ��õǴ� �Ű����� ����Ʈ\n");
    printf("* ��, �Լ��� �����ε��� ���� �ٸ� �ñ״�ó�� ���� ���� �Լ��� ���� �̸����� �����ϴ� ���̴�.\n\n");

    printf("3. �Լ� �����ε��� ����\n");
    string s1 = "�ʴ�", s2 = "���ڴ�", s3 = "���ؿ�";
    int num6=5, num7=8, num8=10, num9=23, num10=31, num11=100;
    OverLoading(s1, s2);
    OverLoading(num6 , num7);
    OverLoading(num8, num9, num10);
    // �Ű� ������ ������ �޸� �ص� �����ε� �۵��Ѵ�.
    OverLoading(s3, num11);
    printf("\n");

    printf("[�ζ��� �Լ�]\n");
    printf("1. C++������ �Լ� ȣ�� ����\n");
    printf("* �Լ� ȣ�� -> ���ÿ� �Ű�����+��ȯ �ּҰ� ���� -> ���α׷� ��� �Լ� ��ġ�� ���ƿ� ���� ������ ����\n");
    printf("* �ڵ� ���� -> ��ȯ�� �ѱ�� -> �������� �̵� �� �Լ� ȣ�� ������ ����\n\n");
    
    printf("2. �ζ��� �Լ�\n");
    printf("* ���� ������ ���� ����, ��� �ڵ带 ȣ��� �ڸ����� �ٷ� �����Ѵ�.\n");
    printf("* �����ɸ��� �Լ��� �� �ʿ� ����. ������ �Լ��� �� Ȱ���ϱ�\n");
    Book fiction4 = {"�� ���̵�� ��������", "�䳢��", 12000};
    // ������ ������ ���� �ڵ�� ���Եȴ�.
    // {
        // cout << book->title << " å�� ������ " << a << " �� �����Ǿ����ϴ�." << endl;
    // }
    //
    PrintBook(&fiction4, 20000);
    printf("\n");

    printf("3. ��ũ�� �Լ��� �ζ��� �Լ�\n");
    printf("* ��ũ�� �Լ��� #define ����ó�� ���ù��� �μ��� �Լ��� ���Ǹ� �����Ͽ� ����\n");
    printf("#define Mul(X) ((X)*(X))\n");
    printf("inline int Mul(int X){return X*X}\n");
    return 0;
}


void Swap(int& x, int& y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}


void Display(const Book& book)
{
    cout << "å�� ������ " << book.title << " �Դϴ�." << endl;
    cout << "å�� ���ڴ� " << book.author << " �Դϴ�." << endl;
    cout << "å�� ������ " << book.price << " �Դϴ�." << endl << endl;
}

int SumFunction(int a, int b, int c, bool n)
{
    int result;
    if (n == true){
        printf("�� 1 ����� �����մϴ�.\n");
        result = a*5 + b*5 + c*5;
        return result;
    }
    else{
        printf("�� 2 ����� �����մϴ�.\n");
        result = a*2 + b*2 + c*2;
        return result;
    }

}



void OverLoading(string a, string b)
{
    cout << a + b << endl;
}

void OverLoading(int a, int b)
{
    cout << "���� ���� " << a + b << " �Դϴ�." << endl;
}

void OverLoading(int a, int b, int c)
{
    cout << "���� ���� " << a * b * c << " �Դϴ�." << endl;
}

void OverLoading(string a , int b)
{
    cout << a << "�̶�� ����� " << b << "�� �Դϴ�." << endl;
}