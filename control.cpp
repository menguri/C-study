#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    // ���ǹ�
    // �־��� ���ǽ��� ����� ���� ������ ����� �����ϵ��� �����Ѵ�.
    cout << "if, else if, else ���Դϴ�.\n";
    int num1 = 8;
    if (num1 > 5)
    {
        cout << "num1�� 5���� Ů�ϴ�.\n"; 
    }
    else if (num1 == 5)
    {
        cout << "num1�� 5�� �����ϴ�.\n";
    }
    else
    {
        if (num1 == 4)
        {
            cout << "num1�� 4�� �����ϴ�.\n";
        }
        else
        {
            cout << "num1�� 4���� �۽��ϴ�.\n";
        }
    }


    cout << "���� ������(���ǹ� ? ��ȯ��1: ��ȯ��2)�Դϴ�.\n";
    int num2 = 5;
    int num3 = 7;
    int result1;
    result1 = (num2 > num3) ? num2 : num3;
    printf("�� �߿� �� ū ���� %d �Դϴ�.\n", result1);


    cout << "switch ���Դϴ�.\n";
    cout << "switch ���� ���� ���� if/else ������ �������� ���� �����Դϴ�.\n";
    cout << "������ int������ �°��� �� �ִ� integer promotion ������ ���� �� �ֽ��ϴ�. \n";

    int num4 = 5;
    switch (num4)
    {
        case 1:
            printf("�Էµ� ���� 1�Դϴ�. \n");
            break;

        case 2:
            printf("�Էµ� ���� 2�Դϴ�. \n");
            break;

        case 3:
            printf("�Էµ� ���� 3�Դϴ�. \n");
            break;

        case 4:
            printf("�Էµ� ���� 4�Դϴ�. \n");
            break;

        default:
            printf("�Էµ� ���� 4���� Ů�ϴ�.\n");
            break;
    }

    char char1 = 'A';
    switch (char1)
    {
        case 'A':
        case 'a':
            printf("�Էµ� ���� A�Դϴ�. \n");
            break;

        case 'B':
        case 'b':
            printf("�Էµ� ���� B�Դϴ�. \n");
            break;

        case 'C':
        case 'c':
            printf("�Էµ� ���� C�Դϴ�. \n");
            break;

        case 'D':
        case 'd':
            printf("�Էµ� ���� D�Դϴ�. \n");
            break;

        default:
            printf("�Էµ� ���� D���� Ů�ϴ�.\n");
            break;
    }


    // �ݺ���
    printf("while���Դϴ�.\n");
    int num5 = 5;
    while (num5 < 10)
    {
        cout << "���� num5�� " << num5 << " �Դϴ�." << endl;
        num5++;
    }

    printf("do / while ���Դϴ�.\n");
    int num6 = 10;
    do {
        cout << "���� num6�� ���� " << num6 << " �Դϴ�.\n";
        num6++;
    } while (num6 < 14);

    printf("for ���Դϴ�.\n");
    int num7 = 3;
    for (int i=0; i < num7; i++)
    {
        cout << "for ���� ���� " << i + 1 << " ��° �ݺ� �������Դϴ�." << endl;
    }
    printf("for �� �ȿ��� ����Ǿ��� ������ for ���� ����Ǹ� �Ҹ�˴ϴ�.\n");

    printf("���� ����� for�� �Դϴ�.\n");
    int arr[5] = {1, 3, 5, 7, 9};
    for (int element : arr)
    {
        cout << "���� element�� " << element << " �Դϴ�. \n";
        for (int i=0; i < element; i++)
        {
            cout << i+1 << " ��° �ݺ����� ���� �߿� �ֽ��ϴ�. \n";
        }
    }

    // continue, break, goto ��
    printf("continue ���Դϴ�.\n");
    int num8 = 3;
    for (int i = 0; i < 100; i++)
    {
        if (i % num8 == 0)
        {
            continue;
        }
        cout << i << " ";
    }
    printf("3�� �������� �ʴ� ���� ����մϴ�.\n");

    printf("break ���Դϴ�.\n");
    int num9 = 10;
    while (num9 < 20)
    {
        num9++;
        if (num9 % 15 == 0)
        {
            break;
        }
        cout << "���� num9�� " << num9 << " �Դϴ�.\n";
    }

    printf("goto ���Դϴ�.\n");
    printf("����� �̿ܿ��� ���� ������ �ʽ��ϴ�.");
}