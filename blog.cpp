#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main()
{    
    int array[] = {1,2,3,4,5};
    // 배열의 이름으로 포인터 연산을 통해 배열 요소에 접근
    for (int i=0; i<5; i++){
        cout << i+1 << " 번째 배열 요소의 주소값은 " << *(array + i) << " 입니다." << endl;
    }
} 