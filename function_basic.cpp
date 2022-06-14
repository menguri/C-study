#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int BigNum(int, int);

int CheckNum(int);

void CheckNum2(int&);

int Sum(int);

int RecursiveSun(int);


double Add(double, double);
double Sub(double, double);
double Mul(double, double);
double Div(double, double);
double Calculator(double, double, double(*func)(double, double));


typedef double (*CalcFunc)(double, double); 
double Calculator2(double, double, CalcFunc);


int main(void)
{
    printf("[�Լ��� ����]\n");
    printf("1. �Լ��� ������ main �Լ��� ����Ǳ� �� ��������� �մϴ�.\n");
    printf("2. �Լ��� �ϳ��� ������ �����ϰ�, �ϳ��� ������� �������ϴ�.\n");
    printf("3. ��ȯ Ÿ���� �迭������ ��� Ÿ���� �����մϴ�. ��, ����ü�� �迭�� ��ȯ �����մϴ�.\n");
    int result = BigNum(5,7);
    cout << "5�� 7 �߿��� �� ū ���� " << result << " �Դϴ�." << endl;
    int result1 = BigNum(17,13);
    cout << "17�� 13 �߿��� �� ū ���� " << result1 << " �Դϴ�." << endl;
    int result2 = BigNum(10,11);
    cout << "10�� 11 �߿��� �� ū ���� " << result2 << " �Դϴ�." << endl << endl;


    printf("[�μ� ���� ���]\n");
    printf("1. ���� ���� ���� : ������ ���� �Լ� ���� �Ű������� �����Ѵ�.\n");
    printf("* �̷��� ����� ������ �ʱ�ȭ�� �Ű������� ���޵� ������ ������ ����.\n");
    printf("* ���� �ƹ��� ������ ��ġ�� �ʴ´�.\n");
    int check = 10;
    cout << "�ʱ� check�� �� : " << check << endl;
    CheckNum(check);
    cout << "�Լ� ���� ���� check�� �� : " << check << endl << endl;

    printf("2. ������ ���� ����\n");
    printf("* ������ �״�� �����ϱ⿡, �Լ����� ���� ���ϸ� ������ �ٲ��.\n");
    printf("* void : Ÿ�� ������ ���Ѵ�. �Լ��� ���� ��ȯ���� ���� ��, �Լ��� �Ű����� ������� ���� ��\n");
    int check2 = 10;
    cout << "�ʱ� check2�� �� : " << check2 << endl;
    CheckNum2(check2);
    cout << "�Լ� ���� ���� check2�� �� : " << check2 << endl << endl;
    
    printf("3. main �Լ��� �μ� ����\n");
    printf("main �Լ��� ���� : void(�Ǵ� int) main(int argc, char *argv[]);\n\n");

    printf("[��� ȣ��]\n");
    printf("1. ��� ȣ���� ����\n");
    printf("�ڱ� �ڽ��� ����ؼ� ȣ���Ѵ�. ���� �����ϸ� ����. �������̴�.\n");
    int recursive_variable = 10;
    int sum_result = Sum(recursive_variable);
    cout << "��͸� ���� ���� �Լ��� ��� : " << sum_result << endl;
    int recursive_result = RecursiveSun(recursive_variable);
    cout << "��� �Լ��� ��� : " << recursive_result << endl << endl;

    printf("[�Լ� ������]\n");
    printf("�Լ� ���� ���α׷��� ����� �� ��� ���� �޸𸮿� �ö󰣴�.\n");
    printf("�Լ��� �̸�=�Լ��� ���� �ּҸ� ����Ű�� ������ ���\n");
    printf("������ ���=�Լ� ������\n ������ ����� ����Ű�� �ּ� ���� ������ �� ���� �����͸� �ǹ� \n");
    double (*calc)(double, double) = NULL; // �Լ� ������ ����
    double num1 = 3, num2 = 4, pointer_result = 0;
    char oper;
    cout << "���� ������ �� �����ϼ��� (*, +, -, /) : ";
    cin >> oper;
    switch (oper)
    {

        case '+':
            calc = Add;
            break;
        case '*':
            calc = Mul;
            break;
        case '-':
            calc = Sub;
            break;
        case '/':
            calc = Div;
            break;
        default:
            printf("��Ģ���길�� �����մϴ�.\n");
            break;
    }
    pointer_result = Calculator(num1, num2, calc);
    cout << "��Ģ ������ ����� " << pointer_result << " �Դϴ�." << endl <<endl;

    printf("[�Լ� �������� ǥ��� �ܼ�ȭ]\n");
    printf("1. typedef Ű����\n");
    CalcFunc ptr_func = calc; // calc�� �����ʹ� ptr_func�� �ȴ�.
    pointer_result = Calculator2(num1, num2, ptr_func);
    cout << "��Ģ ������ ����� " << pointer_result << " �Դϴ�." << endl <<endl;

    printf("2. auto Ű���� (C++ 11���� ����)\n");
    auto ptr_func1 = calc; // calc�� �����ʹ� �ڵ����� ptr_fun1�� �ȴ�.
    pointer_result = Calculator(num1, num2, ptr_func1);
    cout << "��Ģ ������ ����� " << pointer_result << " �Դϴ�." << endl <<endl;
    return 0;
}


int BigNum(int a, int b)
{
    if (a > b){
        return a;
    }
    else {
        return b;
    }
}

int CheckNum(int a)
{
    a += 10;
}

void CheckNum2(int &a)
{
    a += 10;
}

int Sum(int n)
{
    int result = 0;
    for (int i=1; i<=n; i++){
        result += i;
    };
    return result;
}

int RecursiveSun(int n)
{
    if (n == 1){
        return n;
    };
    return n + RecursiveSun(n-1);
}


double Add(double a, double b){return a + b;}
double Sub(double a, double b){return a - b;}
double Mul(double a, double b){return a * b;}
double Div(double a, double b){return a / b;}
double Calculator(double a, double b, double(*func)(double, double)){return func(a, b);}


double Calculator2(double a, double b, CalcFunc func){return func(a, b);};