#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    // 조건문
    // 주어진 조건식의 결과에 따라 별도의 명령을 수행하도록 제어한다.
    cout << "if, else if, else 문입니다.\n";
    int num1 = 8;
    if (num1 > 5)
    {
        cout << "num1은 5보다 큽니다.\n"; 
    }
    else if (num1 == 5)
    {
        cout << "num1은 5와 같습니다.\n";
    }
    else
    {
        if (num1 == 4)
        {
            cout << "num1은 4와 같습니다.\n";
        }
        else
        {
            cout << "num1은 4보다 작습니다.\n";
        }
    }


    cout << "삼항 연산자(조건문 ? 반환값1: 반환값2)입니다.\n";
    int num2 = 5;
    int num3 = 7;
    int result1;
    result1 = (num2 > num3) ? num2 : num3;
    printf("둘 중에 더 큰 수는 %d 입니다.\n", result1);


    cout << "switch 문입니다.\n";
    cout << "switch 문을 쓰는 것은 if/else 문보다 가독성이 좋기 때문입니다.\n";
    cout << "하지만 int형으로 승격할 수 있는 integer promotion 값만이 사용될 수 있습니다. \n";

    int num4 = 5;
    switch (num4)
    {
        case 1:
            printf("입력된 수는 1입니다. \n");
            break;

        case 2:
            printf("입력된 수는 2입니다. \n");
            break;

        case 3:
            printf("입력된 수는 3입니다. \n");
            break;

        case 4:
            printf("입력된 수는 4입니다. \n");
            break;

        default:
            printf("입력된 수는 4보다 큽니다.\n");
            break;
    }

    char char1 = 'A';
    switch (char1)
    {
        case 'A':
        case 'a':
            printf("입력된 수는 A입니다. \n");
            break;

        case 'B':
        case 'b':
            printf("입력된 수는 B입니다. \n");
            break;

        case 'C':
        case 'c':
            printf("입력된 수는 C입니다. \n");
            break;

        case 'D':
        case 'd':
            printf("입력된 수는 D입니다. \n");
            break;

        default:
            printf("입력된 수는 D보다 큽니다.\n");
            break;
    }


    // 반복문
    printf("while문입니다.\n");
    int num5 = 5;
    while (num5 < 10)
    {
        cout << "현재 num5는 " << num5 << " 입니다." << endl;
        num5++;
    }

    printf("do / while 문입니다.\n");
    int num6 = 10;
    do {
        cout << "현재 num6의 값은 " << num6 << " 입니다.\n";
        num6++;
    } while (num6 < 14);

    printf("for 문입니다.\n");
    int num7 = 3;
    for (int i=0; i < num7; i++)
    {
        cout << "for 문이 현재 " << i + 1 << " 번째 반복 수행중입니다." << endl;
    }
    printf("for 문 안에서 선언되었던 변수는 for 문이 종료되면 소멸됩니다.\n");

    printf("범위 기반의 for문 입니다.\n");
    int arr[5] = {1, 3, 5, 7, 9};
    for (int element : arr)
    {
        cout << "현재 element는 " << element << " 입니다. \n";
        for (int i=0; i < element; i++)
        {
            cout << i+1 << " 번째 반복문을 수행 중에 있습니다. \n";
        }
    }

    // continue, break, goto 문
    printf("continue 문입니다.\n");
    int num8 = 3;
    for (int i = 0; i < 100; i++)
    {
        if (i % num8 == 0)
        {
            continue;
        }
        cout << i << " ";
    }
    printf("3과 나눠지지 않는 수만 출력합니다.\n");

    printf("break 문입니다.\n");
    int num9 = 10;
    while (num9 < 20)
    {
        num9++;
        if (num9 % 15 == 0)
        {
            break;
        }
        cout << "현재 num9은 " << num9 << " 입니다.\n";
    }

    printf("goto 문입니다.\n");
    printf("디버깅 이외에는 거의 사용되지 않습니다.");
}