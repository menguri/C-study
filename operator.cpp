#include <iostream>
#include <string.h>
using namespace std;

int main()

{
    
    // 산술 연산자
    cout << "산술 연산자 예시 \n";
    int num1 = 10;
    int num2 = 4;
    cout << "+ 연산자에 의한 결과값은 " << num1 + num2 << " 입니다." << endl;
    cout << "- 연산자에 의한 결과값은 " << num1 - num2 << " 입니다." << endl;
    cout << "* 연산자에 의한 결과값은 " << num1 * num2 << " 입니다." << endl;
    cout << "/ 연산자에 의한 결과값은 " << num1 / num2 << " 입니다." << endl;
    cout << "% 연산자에 의한 결과값은 " << num1 % num2 << " 입니다. \n" << endl;


    // 대입 연산자
    cout << "대입 연산자 예시 \n";
    int num3 = 8;
    int num4 = 10;
    int num5 = 16;
    num3 = num3 + 5;
    num4 += 5;
    num5 =+ 5;
    cout << "= 연산자에 의한 결과값은 " << num3 << " 입니다." << endl;
    cout << "+= 연산자에 의한 결과값은 " << num4 << " 입니다." << endl;
    cout << "=+ 연산자에 의한 결과값은 " << num5 << " 입니다." << endl;

    num3 *= 5;
    num4 -= 6;
    num5 /= 2;
    cout << "*= 연산자에 의한 결과값은 " << num3 << " 입니다." << endl;
    cout << "-= 연산자에 의한 결과값은 " << num4 << " 입니다." << endl;
    cout << "/= 연산자에 의한 결과값은 " << num5 << " 입니다. \n" << endl;


    // 증감 연산자
    cout << "증감 연산자 예시 \n";
    cout << "피연산자를 1씩 증가 혹은 감소시킬 때 사용하는 연산자입니다. \n";
    int num6 = 3;
    int num7 = 3;
    int result1, result2, result3, result4;
    result1 = --num6 + 5;
    cout << "--X 연산자에 의한 결과값은 " << result1 << " 이고, 변수의 값은 " << num6 << "로 변했습니다." << endl;
    result2 = num6-- + 5;
    cout << "X-- 연산자에 의한 결과값은 " << result2 << " 이고, 변수의 값은 " << num6 << "로 변했습니다." << endl;
    result3 = ++num7 + 5;
    cout << "++X 연산자에 의한 결과값은 " << result3 << " 이고, 변수의 값은 " << num7 << "로 변했습니다." << endl;
    result4 = num7++ + 5;
    cout << "X++ 연산자에 의한 결과값은 " << result4 << " 이고, 변수의 값은 " << num7 << "로 변했습니다." << endl;
    int x = 10;
    int y = x-- + 5 + --x;
    cout << "연산 순서 바르게 인지해주세요. \n";
    cout << "변수 x의 값은 " << x << " 이고, 변수 y의 값은 " << y << " 로 변했습니다. \n" << endl;


    // 비교 연산자
    cout << "비교 연산자 예시 \n";
    cout << "피연산자 사이의 상대적인 크기를 판단하는 연산자이다. True라면 1을 반환하고, False라면 0을 반환합니다.\n";
    int num8 = 5;
    int num9 = 10;
    cout << "!= 연산자에 의한 결과값은 " << (num8 != num9) << " 입니다." << endl;
    cout << "== 연산자에 의한 결과값은 " << (num8 == num9) << " 입니다." << endl;
    cout << "> 연산자에 의한 결과값은 " << (num8 > num9) << " 입니다." << endl;
    cout << ">= 연산자에 의한 결과값은 " << (num8+5 >= num9) << " 입니다." << endl;
    cout << "< 연산자에 의한 결과값은 " << (num8 < num9) << " 입니다.\n" << endl;


    // 논리 연산자
    cout << "논리 연산자 예시 \n";
    cout << "주어진 논리식을 판단하여, 참과 거짓을 결정하는 연산자이다. AND, OR, NOT이 존재한다. \n";
    int num10 = 10;
    int num11 = 20;
    bool result5, result6, result7;

    result5 = (num10 > num11) && (num10 != num11);
    cout << "&& 연산자에 의한 결과값은 " << result5 << " 입니다." << endl;
    result6 = (num10 > num11) || (num10 != num11);
    cout << "|| 연산자에 의한 결과값은 " << result6 << " 입니다." << endl;
    cout << "! 연산자에 의한 결과값은 " << !result6 << " 입니다.\n" << endl;


    // 비트 연산자
    cout << "비트 연산자 예시 \n";
    cout << "논리 연산자와 비슷하지만, Bit 단위로 논리 연산을 할 때 사용한다. \n";
    int num12 = 15;
    int num13 = 8;
    cout << "~ (비트 0 -> 1, 1 -> 0) 연산자에 의한 결과값은 " << (~num12) << " 입니다." << endl;
    cout << ">> 오른쪽, 혹은 << 왼쪽으로 한 칸 옮겨질 때마다 2배씩 작아지고 커집니다. \n";
    cout << "<< (지정한 수만큼 비트를 왼쪽으로 옮김) 연산자에 의한 결과값은 " << (num12 << 2) << " 입니다." << endl;
    cout << ">> (지정한 수만큼 비트를 오른쪽으로 옮김) 연산자에 의한 결과값은 " << (num12 >> 2) << " 입니다." << endl;  
    cout << "& (대응되는 비트가 모두 1이면 1 반환) 연산자에 의한 결과값은 " << (num12 & num13) << " 입니다." << endl;
    cout << "| (대응되는 비트가 하나라도 1이면 1 반환) 연산자에 의한 결과값은 " << (num12 | num13) << " 입니다." << endl;
    cout << "^ (대응되는 비트가 서로 다르면 1 반환) 연산자에 의한 결과값은 " << (num12 ^ num13) << " 입니다. \n" << endl;  


    // 기타 연산자
    cout << "기타 연산자 예시 \n";

    cout << "1. 삼항 연산자 : C++에서 유일하게 피연산자를 세 개나 가지는 조건 연산자. \n";
    cout << " 조건식 ? 반환값 1: 반환값 2 \n";
    int num14 = 10;
    int num15 = 12;
    int result8, result9, result10;
    result8 = (num14 < num15) ? num14: num15;
    cout << "둘 중에 더 작은 수는 " << result8 << " 입니다. \n";
    result9 = (num14 != num15) ? 1 : 0;
    cout << "두 수가 다르다면 " << result9 << " 을 반환합니다. \n";
    result10 = (num14+2 == num15) ? 1 : 0;
    cout << "둘 수가 같다면 " << result10 << " 을 반환합니다. \n\n";

    cout << "2. 쉼표 연산자 : 다양한 용도로 사용됨. 두 연산식을 하나의 연산식으로 나타낼 때, 둘 이상의 인수를 함수로 전달할 때. \n";
    int num16 = 30, num17 = 12;
    cout << "첫 번째 수는 " << num16 << " 이고, 두 번째 수는 " << num17 << " 입니다. \n\n";

    cout << "3. sizeof 연산자 : 단항 연산자. 피연산자의 크기를 바이트 단위로 반환한다.\n";
    string ages = "C++ 최고";
    cout << " char형 데이터에 할당되는 메모리의 크기는 " << sizeof(char) << " 바이트입니다." << endl;
    cout << " 'C++ 최고'의 메모리의 크기는 " << sizeof(ages) << " 바이트입니다." << endl;
    cout << " short형 데이터에 할당되는 메모리의 크기는 " << sizeof(short) << " 바이트입니다." << endl;
    cout << " 123456 데이터에 할당되는 메모리의 크기는 " << sizeof(12356) << " 바이트입니다." << endl;
    cout << " long형 데이터에 할당되는 메모리의 크기는 " << sizeof(long) << " 바이트입니다." << endl;
    cout << " long long형 데이터에 할당되는 메모리의 크기는 " << sizeof(long long) << " 바이트입니다." << endl;
    cout << " 3.14 데이터에 할당되는 메모리의 크기는 " << sizeof(3.14) << " 바이트입니다." << endl;
    cout << " double형 데이터에 할당되는 메모리의 크기는 " << sizeof(double) << " 바이트입니다." << endl;
    cout << "long double형 데이터에 할당되는 메모리의 크기는 " << sizeof(long double) << " 바이트입니다. \n" << endl;


    // C++ 연산자
    cout << "C++ 연산자 예시 \n";
    cout << "C 언어의 모든 연산자를 포함하고 있으며, 몇몇 새로운 연산자도 추가하고 있다. \n";
    cout << "1. 범위 지정 연산자(::) : 여러 범위에서 사용된 식별자를 식별하고 구분하는데 사용\n";
    cout << "2. 멤버 포인터 연산자(.*, ->*) : 클래스의 멤버를 가리키는 포인터를 정의할 수 있다.\n";
    cout << "3. typeid 연산자( typeid(표현식) )  : 객체의 타입에 관한 정보를 확인할 수 있다.\n";

}