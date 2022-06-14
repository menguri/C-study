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
    printf("[함수의 정의]\n");
    printf("1. 함수의 원형은 main 함수가 실행되기 전 정의해줘야 합니다.\n");
    printf("2. 함수는 하나의 목적을 수행하고, 하나의 결과값을 내놓습니다.\n");
    printf("3. 반환 타입은 배열제외한 모든 타입이 가능합니다. 단, 구조체의 배열은 반환 가능합니다.\n");
    int result = BigNum(5,7);
    cout << "5와 7 중에서 더 큰 수는 " << result << " 입니다." << endl;
    int result1 = BigNum(17,13);
    cout << "17와 13 중에서 더 큰 수는 " << result1 << " 입니다." << endl;
    int result2 = BigNum(10,11);
    cout << "10와 11 중에서 더 큰 수는 " << result2 << " 입니다." << endl << endl;


    printf("[인수 전달 방법]\n");
    printf("1. 값에 의한 전달 : 변수의 값을 함수 내의 매개변수에 복사한다.\n");
    printf("* 이렇게 복사된 값으로 초기화된 매개변수는 전달된 변수와 별개의 변수.\n");
    printf("* 따라서 아무런 영향을 끼치지 않는다.\n");
    int check = 10;
    cout << "초기 check의 값 : " << check << endl;
    CheckNum(check);
    cout << "함수 적용 후의 check의 값 : " << check << endl << endl;

    printf("2. 참조에 의한 전달\n");
    printf("* 원본을 그대로 전달하기에, 함수에서 값이 변하면 원본도 바뀐다.\n");
    printf("* void : 타입 없음을 뜻한다. 함수가 값을 반환하지 않을 때, 함수가 매개변수 사용하지 않을 때\n");
    int check2 = 10;
    cout << "초기 check2의 값 : " << check2 << endl;
    CheckNum2(check2);
    cout << "함수 적용 후의 check2의 값 : " << check2 << endl << endl;
    
    printf("3. main 함수의 인수 전달\n");
    printf("main 함수의 원형 : void(또는 int) main(int argc, char *argv[]);\n\n");

    printf("[재귀 호출]\n");
    printf("1. 재귀 호출의 개념\n");
    printf("자기 자신을 계속해서 호출한다. 조건 만족하면 종료. 직관적이다.\n");
    int recursive_variable = 10;
    int sum_result = Sum(recursive_variable);
    cout << "재귀를 쓰지 않은 함수의 결과 : " << sum_result << endl;
    int recursive_result = RecursiveSun(recursive_variable);
    cout << "재귀 함수의 결과 : " << recursive_result << endl << endl;

    printf("[함수 포인터]\n");
    printf("함수 또한 프로그램이 실행될 때 모두 메인 메모리에 올라간다.\n");
    printf("함수의 이름=함수의 시작 주소를 가리키는 포인터 상수\n");
    printf("포인터 상수=함수 포인터\n 포인터 상수는 가리키는 주소 값을 변경할 수 없는 포인터를 의미 \n");
    double (*calc)(double, double) = NULL; // 함수 포인터 선언
    double num1 = 3, num2 = 4, pointer_result = 0;
    char oper;
    cout << "다음 연산자 중 선택하세요 (*, +, -, /) : ";
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
            printf("사칙연산만을 지원합니다.\n");
            break;
    }
    pointer_result = Calculator(num1, num2, calc);
    cout << "사칙 연산의 결과는 " << pointer_result << " 입니다." << endl <<endl;

    printf("[함수 포인터의 표기법 단순화]\n");
    printf("1. typedef 키워드\n");
    CalcFunc ptr_func = calc; // calc의 포인터는 ptr_func이 된다.
    pointer_result = Calculator2(num1, num2, ptr_func);
    cout << "사칙 연산의 결과는 " << pointer_result << " 입니다." << endl <<endl;

    printf("2. auto 키워드 (C++ 11부터 제공)\n");
    auto ptr_func1 = calc; // calc의 포인터는 자동으로 ptr_fun1이 된다.
    pointer_result = Calculator(num1, num2, ptr_func1);
    cout << "사칙 연산의 결과는 " << pointer_result << " 입니다." << endl <<endl;
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