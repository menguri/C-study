#include <iostream>
#include <string.h>
#include <string>
using namespace std;


enum Weather {SUNNY = 0, CLOUD = 10, RAIN = 20, SNOW = 30};

int main()
{   
    int input;
    Weather today_weather;

    cout << "������ ������ �Է����ּ��� : " << endl;
    cout << "(SUNNY = 0, CLOUD = 10, RAIN = 20, SNOW = 30)0" << endl;
    cin >> input;
    today_weather = (Weather)input;

    switch (today_weather)
    {
    case SUNNY :
        cout << "������ ������ �������!";
        break;

    case CLOUD :
        cout << "������ ������ �����ؿ�!";
        break;

    case RAIN :
        cout << "������ ������ ��ġ�־��!";
        break;

    case SNOW :
        cout << "������ ������ �ų���!";
        break;

    default:
        cout << "��Ȯ�� ������� �Է����ּ���.";
        break;
    }

    cout << endl << "����ü Weather�� �� ������� " << SUNNY << ", " << CLOUD << ", "
        << RAIN << ", " << SNOW << "�Դϴ�.";

    return 0;
} 