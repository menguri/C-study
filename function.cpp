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


inline void PrintBook(Book* book, int a){cout << book->title << " 책의 가격은 " << a << " 로 조정되었습니다." << endl;}

int main(void)
{
    printf("[참조자]\n");
    // 특정 변수의 실제 이름 대신 사용할 수 있는 참조자 
    // -> 크기가 큰 구조체와 같은 데이터를 함수의 인수로 전달할 때 사용. 
    printf("1. 참조자의 선언\n");
    printf("* & 연산자는 주소 연산자가 X, 타입을 식별하기 위해 사용하는 식별자. int&는 int형 변수에 대한 참조를 뜻함.\n");
    printf("* 참조자의 타입 = 변수의 타입\n");
    printf("* 참조자는 선언과 동시에 초기화\n");
    printf("* 한 번 초기화되면, 참조 대상을 변경할 수 없다.\n");
    int num1 = 5;
    int& num1_refer = num1;
    cout << "num1 : " << num1 << ", num1의 참조자에 의한 값 : " << num1_refer << endl;
    printf("참조자를 이용해 값을 증가시키면 똑같이 증가한다.\n");
    num1_refer++;
    cout << "num1 : " << num1 << ", num1의 참조자에 의한 값 : " << num1_refer << endl << endl;    

    printf("2. 함수의 인수로서 전달\n");
    printf("* 참조자는 주로 함수 인수로 전달할 때 사용\n");
    printf("* 함수 인수로 전달되면, 실제 변수의 값을 함수 내에서 조작 가능\n");
    printf("* 포인터를 사용해도 똑같은 결과\n");
    printf("* 함수 내에서 참조 연산자(*)를 사용하지 않는다. 내부 코드가 깔끔\n");
    printf("* 함수의 호출이 값에 의한 전달 방법이라, 코드 읽기 쉽지 않다.\n");
    printf("* 간단한 함수는 그냥 값 전달. 참조 호출이 필요할 땐 포인터 사용.\n");
    printf("* C++에서 참조자는 크기가 큰 구조체나 클래스를 다룰 때에만 사용.\n");
    int num2 = 5, num3 = 10;
    cout << "변경 전 num2 : " << num2 << ", 변경 전 num3 : " << num3 << endl;
    Swap(num2, num3);
    cout << "변경 후 num2 : " << num2 << ", 변경 후 num3 : " << num3 << endl << endl;
    
    printf("3. 구조체의 참조\n");
    printf("* 참조자는 주로 구조체같은 사용자 정의 타입을 다룰 때 유용\n");
    printf("* 사용방법은 똑같다.\n");
    printf("* 함수 내부에서 구조체를 직접 변경할 필요가 없을 때는 const 키워드\n");
    Book fiction = {"왜 너는 못생겼는가?", "강민구", 200000};
    Display(fiction);


    printf("[디폴트 인수]\n");
    // 기본값이 미리 정의되어 있는 인수를 말한다.
    // 함수 호출 시, 인수를 전달하지 않으면 디폴트 인수로 함수가 실행된다.
    printf("1. 디폴트 인수의 설정\n");
    printf("* 함수 원형에서만 지정 가능\n");
    printf("* 디폴트 인수는 오른쪽에서 시작하여 순서대로만 지정 가능\n");
    printf("* 가운데 인수들만 별도로 디폴트 인수를 지정할 수 없다.\n");
    int num4 = 6, num5 = 7;
    int result1;
    result1 = SumFunction(num4, num5);
    cout << "결과값 : " << result1 << endl << endl;

    printf("[함수 오버로딩]\n");
    printf("1. 함수 오버로딩\n");
    printf("* 같은 이름의 함수를 중복하여 정의한다.\n");
    printf("* 여러 함수를 하나의 이름으로 연결한다.\n");
    printf("* 객체 지향 프로그래밍의 특징 중 다형성의 구현\n\n");

    printf("2. 함수 시그니처\n");
    printf("* 함수의 원형에 명시되는 매개변수 리스트\n");
    printf("* 즉, 함수의 오버로딩은 서로 다른 시그니처를 갖는 여러 함수를 같은 이름으로 정의하는 것이다.\n\n");

    printf("3. 함수 오버로딩의 예제\n");
    string s1 = "너는", s2 = "예쁘다", s3 = "최준영";
    int num6=5, num7=8, num8=10, num9=23, num10=31, num11=100;
    OverLoading(s1, s2);
    OverLoading(num6 , num7);
    OverLoading(num8, num9, num10);
    // 매개 변수의 개수를 달리 해도 오버로딩 작동한다.
    OverLoading(s3, num11);
    printf("\n");

    printf("[인라인 함수]\n");
    printf("1. C++에서의 함수 호출 과정\n");
    printf("* 함수 호출 -> 스택에 매개변수+반환 주소값 저장 -> 프로그램 제어가 함수 위치로 날아와 지역 변수도 저장\n");
    printf("* 코드 실행 -> 반환값 넘기고 -> 그쪽으로 이동 후 함수 호출 정보를 제거\n\n");
    
    printf("2. 인라인 함수\n");
    printf("* 위의 복잡한 과정 없이, 모든 코드를 호출된 자리에서 바로 삽입한다.\n");
    printf("* 오래걸리는 함수는 쓸 필요 없다. 간단한 함수일 때 활용하기\n");
    Book fiction4 = {"내 아이디는 강남미인", "토끼동", 12000};
    // 실제로 다음과 같이 코드로 삽입된다.
    // {
        // cout << book->title << " 책의 가격은 " << a << " 로 조정되었습니다." << endl;
    // }
    //
    PrintBook(&fiction4, 20000);
    printf("\n");

    printf("3. 매크로 함수와 인라인 함수\n");
    printf("* 매크로 함수는 #define 선행처리 지시문에 인수로 함수의 정의를 전달하여 동작\n");
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
    cout << "책의 제목은 " << book.title << " 입니다." << endl;
    cout << "책의 저자는 " << book.author << " 입니다." << endl;
    cout << "책의 가격은 " << book.price << " 입니다." << endl << endl;
}

int SumFunction(int a, int b, int c, bool n)
{
    int result;
    if (n == true){
        printf("제 1 계산을 진행합니다.\n");
        result = a*5 + b*5 + c*5;
        return result;
    }
    else{
        printf("제 2 계산을 진행합니다.\n");
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
    cout << "둘의 합은 " << a + b << " 입니다." << endl;
}

void OverLoading(int a, int b, int c)
{
    cout << "셋의 곱은 " << a * b * c << " 입니다." << endl;
}

void OverLoading(string a , int b)
{
    cout << a << "이라는 사람은 " << b << "살 입니다." << endl;
}