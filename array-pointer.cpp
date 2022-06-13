#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    printf("1차원 배열\n");
    // 리스트를 이용하여 배열 초기화
    int FirstArray[3] = {1, 2, 3};
    for (int i=0; i < 3; i++){
        cout << i << " 번째 배열 요소 : " << FirstArray[i] << endl;
    }

    // 값을 따로따로 설정한 배열 초기화
    printf("1차원 배열 : 따로따로 초기화\n");
    int sum = 0;
    for (int i=0; i < 3; i++){
        FirstArray[i] = FirstArray[i] * 5;
        cout << i << " 번째 배열 요소 : " << FirstArray[i] << endl;
        sum += FirstArray[i];
    }
    cout << "sum의 결과값은 " << sum << " 입니다." << endl;

    // 여러가지 특징
    printf("1. 배열의 길이는 반드시 상수를 사용한다.\n");
    printf("2. C++ 컴파일러는 배열의 길이를 전혀 신경 쓰지 않는다.\n");
    printf("** 따라서 개발자가 일일이 신경써서 코딩해줘야 한다.\n");
    int SecondArray[2] = {1, 2};
    SecondArray[2] = 3;
    for (int i=0; i < 3; i++){
        cout << i << " 번째 배열 요소 : " << SecondArray[i] << endl;
    }
    printf("3. 배열이 차지하는 메모리의 크기 : 배열의 길이 * sizeof(타입)\n");
    printf("** 배열의 길이 = sizeof(배열의 이름) / sizeof(배열의 이름[0])\n");
    cout << "배열이 차지하는 메모리의 크기는 " << 3 * sizeof(int) << endl;
    cout << "배열의 길이는 " << sizeof(FirstArray) / sizeof(FirstArray[0]) << endl;

    printf("초기화 리스트를 사용하여 초기화할 경우, narrowing cast를 허용하지 않는다.\n");
    printf("narrowing cast : 초기화를 통해 발생하는 암시적인 데이터 손실. int형인데 소수가 나오면 데이터 손실 발생 = narrowing cast\n\n\n");


    printf("다차원 배열\n");
    printf("보통은 2차원 배열을 많이 사용한다.\n");
    printf("다차원 배열임에도 메모리 할당은 선형적으로 이뤄진다.\n");
    int TwoDimenArray1[2][3] = {1, 2, 3, 4, 5, 6};
    int TwoDimenArray2[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
        };
    cout << "배열 요소들의 값" << endl;
    for (int i = 0; i < 2; i++){
        for (int j=0; j < 3; j++){
            if(j == 2){
                cout << TwoDimenArray2[i][j] << endl;
            }
            else {
                cout << TwoDimenArray2[i][j];
            }
        }
    }
    printf("2차원 배열 열의 길이를 구할 때\n");
    int TwoCrossLength = sizeof(TwoDimenArray2[0]) / sizeof(TwoDimenArray2[0][0]);
    cout << TwoCrossLength << endl;
    printf("2차원 배열 행의 길이를 구할 때\n");
    cout << (sizeof(TwoDimenArray2)/TwoCrossLength) / sizeof(TwoDimenArray2[0][0]) << endl;
    printf("2차원 배열도 배열의 길이를 명시하지 않고 자동으로 길이를 설정할 수 있다. 하지만 열의 길이는 반드시 명시해야 한다.\n\n\n"); 

    printf("포인터 : 메모리의 주소값을 저장하는 변수\n");
    printf("char형 변수가 문자를 저장, int형 변수가 정수를 저장하듯이 pointer는 주소값을 저장\n");
    int n = 100;
    int *ptr_n = &n;
    cout << n << " 의 메모리 주소는 " << ptr_n << " 입니다." << endl;
    printf("포인터는 선언과 동시에 초기화를 함께하는 것이 좋다.\n");
    int n1 = 10, n2 = 20;
    int *ptr_n1 = &n1, *ptr_n2 = &n2;
    cout << "포인터의 크기는 " << sizeof(ptr_n1) << " 입니다." << endl;
    cout << "포인터 ptr_n1이 가리키는 주소값은 " << ptr_n1 << " 입니다." << endl;
    cout << "포인터 ptr_n1의 주소값에 저장된 값은 " << *ptr_n1 << " 입니다." << endl;
    cout << "포인터 ptr_n2이 가리키는 주소값은 " << ptr_n2 << " 입니다." << endl;
    cout << "포인터 ptr_n2의 주소값에 저장된 값은 " << *ptr_n2 << " 입니다." << endl;
    printf("[물음] 왜 포인터를 사용하는 것인가? : 오늘 공부하고 여기에 대한 답을 할 수 있어야 한다.\n");
    printf("[답변] 어떠한 변수든지 메모리를 할당 받아서 사용한다. 포인터를 사용하면 간결하과 효율적인 표현과 처리가 가능하다. 또한 더 빠른 기계어 코드를 생성할 수 있다.\n");
    printf("[답변] 일시적으로 갑자기 많은 메모리를 잡아야 할 때 포인터로 잡았다가, 사용하지 않을 때 해제시켜준다.\n");
    printf("[답변] 변수, 함수의 경우, stack 공간에 할당된다. 애네는 범위를 벗어나면 파괴 -> 힙 영역에 할당하고 두고두고 쓰기 가능\n");

    printf("포인터 연산 : 값을 증가시키거나 감소시키는 등의 제한된 연산만 가능\n");
    printf("[물음] 왜 주소값을 연산하는가?");
    printf("[답변] 포인터의 메모리할당 기능을 자유자재로 진행하기 위해\n");
    printf("1. 포인터끼리의 덧셈, 곱셈, 나눗셈은 아무런 의미가 없다.\n");
    printf("2. 포인터끼리의 뺄셈은 두 포인터 사이의 상대적 거리를 나타낸다.\n");
    printf("3. 포인터에 정수를 더하거나 뺄 수는 있지만, 실수와의 연산은 허용하지 않는다.\n");
    printf("4. 포인터끼리 대입하거나 비교할 수 있다.\n");
    printf("** 포인터의 증가, 감소 폭은 변수 타입의 크기다.\n\n");
    
    printf("* 포인터와 배열은 긴밀한 관계. 포인터를 배열의 이름처럼 사용가능하다.\n");
    int array[] = {1,2,3,4,5};
    int *ptr_array = array;
    cout << "배열의 이름을 이용하여 배열 요소에 접근 : " << array[0] << endl; 
    cout << "포인터를 이용하여 배열 요소에 접근 : " << ptr_array[0] << endl;
    cout << "배열의 이름을 이용하여 배열 크기 계산 : " << sizeof(array) << endl; 
    cout << "포인터를 이용하여 배열 크기 계산(배열의 크기가 아닌 포인터 자체의 크기 출력) : " << sizeof(ptr_array) << "\n" << endl;

    printf("배열의 포인터 연산 : 배열의 이름으로 포인터 연산을 진행하여 요소에 접근\n");
    int array2[] = {1,2,3,4,5};
    cout << "배열 이름으로 배열 요소에 접근 -> " << array2[0] << "," << array2[1] << "," << array2[2] << "," << array2[3] << endl;
    cout << "포인터로 배열 요소에 접근 -> " << *(array2 + 0) << "," << *(array2 + 1) << "," << *(array2 + 2) << "," << *(array2 + 3) << endl;
    printf("array[n] = *(array + n)\n\n\n");

    printf("메모리의 동적 할당(dynamic allocation)\n");
    printf("데이터, 스택 영역에 할당되는 메모리의 크기는 컴파일에 결정. 하지만 힙 영역의 크기는 런 타임에 사용자가 직접 결정\n");
    printf("런 타임에 메모리를 할당받는 것을 메모리의 동적 할당이라고 한다.\n");
    printf("[물음] 힙 영역은 무엇이고, 왜 런 타임에 메모리를 할당받아야 하는가?\n");
    printf("[답변] 메모리 구조 -> 데이터 + stack + 힙 영역으로 구성. stack은 컴파일 시에 메모리 할당되고, 힙은 프로그램 돌리는 시간(런 타임)에 할당된다.\n");

    // new연산자, delete연산자
    int *ptr_int = new int;
    *ptr_int = 100;

    double *ptr_double = new double;
    *ptr_double = 100.123;

    cout << "int형 숫자의 값은 " << *ptr_int << " 입니다." << endl;
    cout << "double형 숫자의 값은 " << *ptr_double << " 입니다." << endl;
    cout << "double형 숫자의 주소값은 " << ptr_double << " 입니다." << endl;

    printf("메모리 동적 할당 해제\n");
    delete ptr_int;
    delete ptr_double;

}