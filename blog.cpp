#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main()
{    
    int array[] = {1,2,3,4,5};
    // �迭�� �̸����� ������ ������ ���� �迭 ��ҿ� ����
    for (int i=0; i<5; i++){
        cout << i+1 << " ��° �迭 ����� �ּҰ��� " << *(array + i) << " �Դϴ�." << endl;
    }
} 