#include <iostream>
#include <string.h>
#include <string>
using namespace std;


enum Weather {SUNNY = 0, CLOUD = 10, RAIN = 20, SNOW = 30};

int main()
{   
    int input;
    Weather today_weather;

    cout << "오늘의 날씨를 입력해주세요 : " << endl;
    cout << "(SUNNY = 0, CLOUD = 10, RAIN = 20, SNOW = 30)0" << endl;
    cin >> input;
    today_weather = (Weather)input;

    switch (today_weather)
    {
    case SUNNY :
        cout << "오늘의 날씨는 끝내줘요!";
        break;

    case CLOUD :
        cout << "오늘의 날씨는 선선해요!";
        break;

    case RAIN :
        cout << "오늘의 날씨는 운치있어요!";
        break;

    case SNOW :
        cout << "오늘의 날씨는 신나요!";
        break;

    default:
        cout << "정확한 상숫값을 입력해주세요.";
        break;
    }

    cout << endl << "열거체 Weather의 각 상숫값은 " << SUNNY << ", " << CLOUD << ", "
        << RAIN << ", " << SNOW << "입니다.";

    return 0;
} 