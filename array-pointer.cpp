#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    printf("1���� �迭\n");
    // ����Ʈ�� �̿��Ͽ� �迭 �ʱ�ȭ
    int FirstArray[3] = {1, 2, 3};
    for (int i=0; i < 3; i++){
        cout << i << " ��° �迭 ��� : " << FirstArray[i] << endl;
    }

    // ���� ���ε��� ������ �迭 �ʱ�ȭ
    printf("1���� �迭 : ���ε��� �ʱ�ȭ\n");
    int sum = 0;
    for (int i=0; i < 3; i++){
        FirstArray[i] = FirstArray[i] * 5;
        cout << i << " ��° �迭 ��� : " << FirstArray[i] << endl;
        sum += FirstArray[i];
    }
    cout << "sum�� ������� " << sum << " �Դϴ�." << endl;

    // �������� Ư¡
    printf("1. �迭�� ���̴� �ݵ�� ����� ����Ѵ�.\n");
    printf("2. C++ �����Ϸ��� �迭�� ���̸� ���� �Ű� ���� �ʴ´�.\n");
    printf("** ���� �����ڰ� ������ �Ű�Ἥ �ڵ������ �Ѵ�.\n");
    int SecondArray[2] = {1, 2};
    SecondArray[2] = 3;
    for (int i=0; i < 3; i++){
        cout << i << " ��° �迭 ��� : " << SecondArray[i] << endl;
    }
    printf("3. �迭�� �����ϴ� �޸��� ũ�� : �迭�� ���� * sizeof(Ÿ��)\n");
    printf("** �迭�� ���� = sizeof(�迭�� �̸�) / sizeof(�迭�� �̸�[0])\n");
    cout << "�迭�� �����ϴ� �޸��� ũ��� " << 3 * sizeof(int) << endl;
    cout << "�迭�� ���̴� " << sizeof(FirstArray) / sizeof(FirstArray[0]) << endl;

    printf("�ʱ�ȭ ����Ʈ�� ����Ͽ� �ʱ�ȭ�� ���, narrowing cast�� ������� �ʴ´�.\n");
    printf("narrowing cast : �ʱ�ȭ�� ���� �߻��ϴ� �Ͻ����� ������ �ս�. int���ε� �Ҽ��� ������ ������ �ս� �߻� = narrowing cast\n\n\n");


    printf("������ �迭\n");
    printf("������ 2���� �迭�� ���� ����Ѵ�.\n");
    printf("������ �迭�ӿ��� �޸� �Ҵ��� ���������� �̷�����.\n");
    int TwoDimenArray1[2][3] = {1, 2, 3, 4, 5, 6};
    int TwoDimenArray2[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
        };
    cout << "�迭 ��ҵ��� ��" << endl;
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
    printf("2���� �迭 ���� ���̸� ���� ��\n");
    int TwoCrossLength = sizeof(TwoDimenArray2[0]) / sizeof(TwoDimenArray2[0][0]);
    cout << TwoCrossLength << endl;
    printf("2���� �迭 ���� ���̸� ���� ��\n");
    cout << (sizeof(TwoDimenArray2)/TwoCrossLength) / sizeof(TwoDimenArray2[0][0]) << endl;
    printf("2���� �迭�� �迭�� ���̸� ������� �ʰ� �ڵ����� ���̸� ������ �� �ִ�. ������ ���� ���̴� �ݵ�� ����ؾ� �Ѵ�.\n\n\n"); 

    printf("������ : �޸��� �ּҰ��� �����ϴ� ����\n");
    printf("char�� ������ ���ڸ� ����, int�� ������ ������ �����ϵ��� pointer�� �ּҰ��� ����\n");
    int n = 100;
    int *ptr_n = &n;
    cout << n << " �� �޸� �ּҴ� " << ptr_n << " �Դϴ�." << endl;
    printf("�����ʹ� ����� ���ÿ� �ʱ�ȭ�� �Բ��ϴ� ���� ����.\n");
    int n1 = 10, n2 = 20;
    int *ptr_n1 = &n1, *ptr_n2 = &n2;
    cout << "�������� ũ��� " << sizeof(ptr_n1) << " �Դϴ�." << endl;
    cout << "������ ptr_n1�� ����Ű�� �ּҰ��� " << ptr_n1 << " �Դϴ�." << endl;
    cout << "������ ptr_n1�� �ּҰ��� ����� ���� " << *ptr_n1 << " �Դϴ�." << endl;
    cout << "������ ptr_n2�� ����Ű�� �ּҰ��� " << ptr_n2 << " �Դϴ�." << endl;
    cout << "������ ptr_n2�� �ּҰ��� ����� ���� " << *ptr_n2 << " �Դϴ�." << endl;
    printf("[����] �� �����͸� ����ϴ� ���ΰ�? : ���� �����ϰ� ���⿡ ���� ���� �� �� �־�� �Ѵ�.\n");
    printf("[�亯] ��� �������� �޸𸮸� �Ҵ� �޾Ƽ� ����Ѵ�. �����͸� ����ϸ� �����ϰ� ȿ������ ǥ���� ó���� �����ϴ�. ���� �� ���� ���� �ڵ带 ������ �� �ִ�.\n");
    printf("[�亯] �Ͻ������� ���ڱ� ���� �޸𸮸� ��ƾ� �� �� �����ͷ� ��Ҵٰ�, ������� ���� �� ���������ش�.\n");
    printf("[�亯] ����, �Լ��� ���, stack ������ �Ҵ�ȴ�. �ֳ״� ������ ����� �ı� -> �� ������ �Ҵ��ϰ� �ΰ�ΰ� ���� ����\n");

    printf("������ ���� : ���� ������Ű�ų� ���ҽ�Ű�� ���� ���ѵ� ���길 ����\n");
    printf("[����] �� �ּҰ��� �����ϴ°�?");
    printf("[�亯] �������� �޸��Ҵ� ����� ��������� �����ϱ� ����\n");
    printf("1. �����ͳ����� ����, ����, �������� �ƹ��� �ǹ̰� ����.\n");
    printf("2. �����ͳ����� ������ �� ������ ������ ����� �Ÿ��� ��Ÿ����.\n");
    printf("3. �����Ϳ� ������ ���ϰų� �� ���� ������, �Ǽ����� ������ ������� �ʴ´�.\n");
    printf("4. �����ͳ��� �����ϰų� ���� �� �ִ�.\n");
    printf("** �������� ����, ���� ���� ���� Ÿ���� ũ���.\n\n");
    
    printf("* �����Ϳ� �迭�� ����� ����. �����͸� �迭�� �̸�ó�� ��밡���ϴ�.\n");
    int array[] = {1,2,3,4,5};
    int *ptr_array = array;
    cout << "�迭�� �̸��� �̿��Ͽ� �迭 ��ҿ� ���� : " << array[0] << endl; 
    cout << "�����͸� �̿��Ͽ� �迭 ��ҿ� ���� : " << ptr_array[0] << endl;
    cout << "�迭�� �̸��� �̿��Ͽ� �迭 ũ�� ��� : " << sizeof(array) << endl; 
    cout << "�����͸� �̿��Ͽ� �迭 ũ�� ���(�迭�� ũ�Ⱑ �ƴ� ������ ��ü�� ũ�� ���) : " << sizeof(ptr_array) << "\n" << endl;

    printf("�迭�� ������ ���� : �迭�� �̸����� ������ ������ �����Ͽ� ��ҿ� ����\n");
    int array2[] = {1,2,3,4,5};
    cout << "�迭 �̸����� �迭 ��ҿ� ���� -> " << array2[0] << "," << array2[1] << "," << array2[2] << "," << array2[3] << endl;
    cout << "�����ͷ� �迭 ��ҿ� ���� -> " << *(array2 + 0) << "," << *(array2 + 1) << "," << *(array2 + 2) << "," << *(array2 + 3) << endl;
    printf("array[n] = *(array + n)\n\n\n");

    printf("�޸��� ���� �Ҵ�(dynamic allocation)\n");
    printf("������, ���� ������ �Ҵ�Ǵ� �޸��� ũ��� �����Ͽ� ����. ������ �� ������ ũ��� �� Ÿ�ӿ� ����ڰ� ���� ����\n");
    printf("�� Ÿ�ӿ� �޸𸮸� �Ҵ�޴� ���� �޸��� ���� �Ҵ��̶�� �Ѵ�.\n");
    printf("[����] �� ������ �����̰�, �� �� Ÿ�ӿ� �޸𸮸� �Ҵ�޾ƾ� �ϴ°�?\n");
    printf("[�亯] �޸� ���� -> ������ + stack + �� �������� ����. stack�� ������ �ÿ� �޸� �Ҵ�ǰ�, ���� ���α׷� ������ �ð�(�� Ÿ��)�� �Ҵ�ȴ�.\n");

    // new������, delete������
    int *ptr_int = new int;
    *ptr_int = 100;

    double *ptr_double = new double;
    *ptr_double = 100.123;

    cout << "int�� ������ ���� " << *ptr_int << " �Դϴ�." << endl;
    cout << "double�� ������ ���� " << *ptr_double << " �Դϴ�." << endl;
    cout << "double�� ������ �ּҰ��� " << ptr_double << " �Դϴ�." << endl;

    printf("�޸� ���� �Ҵ� ����\n");
    delete ptr_int;
    delete ptr_double;

}