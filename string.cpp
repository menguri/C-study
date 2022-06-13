#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main(void)
{
    printf("C++은 두 가지 방법으로 문자열을 생성할 수 있다.\n");
    printf("1. C언어 스타일의 문자열\n");
    printf("2. string 클래스를 이용한 문자열\n\n");

    // C언어 스타일의 문자열 -> "" 를 사용해서 표현. 문자열 상수라고 한다. 
    // NULL 문자 -> 문자열 끝을 따로 알려줘야 한다. "\0"을 문자열 끝에 넣어줄 것.

    printf("[문자열 입력 받기]\n");
    const int SIZE = 20;
    // 문자를 하나의 배열처럼 다룬다.
    char address[SIZE];
    char name[SIZE];

    // cout << "자신의 이름을 적어주세요 : ";
    // cin >> name;
    // cout << "자신의 소중한 물건을 적어주세요 : ";
    // cin >> address;
    // cout << name << "에게서 " << address << " 을 빼앗아라!" << endl;
    // 띄어쓰기, 탭 문자, 캐리지 리턴 문자 등을 문자열의 끝으로 인식한다.
    // 이 전부를 하나의 문자열로 입력받기 위해선 cin 객체의 get() 메소드를 사용해야 한다.

    // cout << "자신의 이름을 적어주세요 : ";
    // cin.get(name, SIZE).get();
    // cout << "자신의 소중한 물건을 적어주세요 : ";
    // cin.get(address, SIZE).get();
    // cout << name << "에게서 " << address << " 을 빼앗아라!" << endl;
    // 하지만 여전히 길이가 20 넘으면 입력 자체가 안된다. ignore() 메소드를 이용하자.

    // cout << "자신의 이름을 적어주세요 : ";
    // cin.get(name, SIZE).ignore(SIZE, '\n');
    // cout << "자신의 소중한 물건을 적어주세요 : ";
    // cin.get(address, SIZE).ignore(SIZE, '\n');
    // cout << name << "에게서 " << address << " 을 빼앗아라!" << endl;
    // 문자열 길이를 미리 제한할 필요가 있을까? string 클래스를 이용하자

    string address1, name1;
    cout << "자신의 이름을 적어주세요 : ";
    getline(cin, name1);
    cout << "자신의 소중한 물건을 적어주세요 : ";
    getline(cin, address1);
    cout << name1 << "에게서 " << address1 << " 을 빼앗아라!\n" << endl;

    printf("[string 클래스]\n");
    string str1;                        // 문자열 선언
    str1 = "강민구는 천재다!";           // 문자열 초기화
    string str2 = "강민구는 잘생겼다!";  // 선언과 동시에 초기화

    string cat;
    cout << "현재 cat 변수의 길이는 " << cat.length() << " 입니다." << endl;
    cat = "nancy";
    cout << "현재 cat 변수의 길이는 " << cat.length() << " 입니다." << endl;
    cout << "현재 cat 의 첫 글자는 " << cat[0] << " 입니다.\n" << endl;               // 인덱스를 통해 문자열을 다룰 수 있다. 
    // 한글은 2바이트이기에, 2개로 끊어줘야 제대로된 글자를 볼 수 있다. 

    printf("[문자열 처리하기 in string 클래스]\n");
    string str3 = "C++은 ";
    string str4 = "생각보다 쉽네요!";
    string str5;
    str5 = str3 + str4;
    cout << str5 << '\n';
    str3 += str4;
    cout << str3 + "\n" << endl;

    printf("[문자열 입출력 in string 클래스]\n");
    string n;
    cout << "너의 이름은? ";
    getline(cin, n);
    cout << "당신의 이름은 " << n << " 입니다.\n" << endl;

    printf("[string 메소드]\n");
    // string 클래스에 정의된 문자열과 관련된 작업을 할 떄 쓰는 메소드들.
    // 대표적인 문자열 처리 함수를 보자.

    printf("1. length()/size()\n");
    // length는 길이를, size는 메모리 크기를 나타낸다. 하지만 결국엔 둘 다 똑같은 값 도출
    string str6 = "C++ is funny!\n";
    cout << "문자열 str6 의 길이는 " << str6.length() << " 입니다." << endl;
    cout << "문자열 str6 의 크기는 " << str6.size() << " 입니다.\n" << endl;

    printf("2. append()\n");
    //
    string str7, str8, str9, str10;
    str7.append("C++ is ");
    str8.append("very ");
    str9.append("funny");
    str10.append(10, 'X');
    cout << str7 << str8 << str9 << endl;
    cout << str10 << "\n\n";

    printf("3. find()\n");
    // 특정 문자열을 찾아, 그 시작 위치를 반환하는 메소드
    cout << str7.find("C++") << endl;                   // 문자열.find(찾을문자열); 
    cout << str8.find("y") << endl;                     //문자열.find(찾을문자); 
    str7 += str8 + str9;
    if (str7.find("very", 6) != string::npos){
        printf("해당 문자열은 %d 에 있습니다.\n\n", str7.find("very", 6));
    }
    else {
        printf("해당 문자열을 찾을 수 없습니다.\n\n");
    }

    printf("4. compare()\n");
    // 두 문자열 간의 내용을 비교하는 메소드
    printf("두 문자열이 같은 경우, 0을 반환합니다.");
    printf("str1이 str2보다 사전 편찬순으로 앞에 있을 경우, 0보다 작은 수를 반환합니다.");
    printf("str1이 str2보다 사전 편찬순으로 뒤에 있을 경우, 0보다 큰 수를 반환합니다.");
    string str11 = "BCED";
    string str12 = "ACED";
    if (str11.compare(str12) == 0){
        printf("둘의 문자열은 같습니다.\n\n");
    }
    else if (str11.compare(str12) < 0){
        printf("str11이 사전 편찬순으로 str12보다 앞에 있습니다.\n\n");
    }
    else {
        printf("str11이 사전 편찬순으로 str12보다 뒤에 있습니다.\n\n");
    }

    printf("5. replace()\n");
    printf("양식 : 문자열.replace(대체 문자열 시작위치, 대체 문자열의 길이, 새로운 문자열)\n");
    string str13 = "a is very beautiful word\n";
    string str14 = "beautiful";
    string str15 = "dirty";
    string::size_type index = str13.find(str14);
    // replace 해주기 전에, 존재 유무 확인부터 하자.
    if (index != string::npos){
        str13.replace(index, 9, str15);
    }
    cout << str13 << endl;

    printf("6. capacity()/max_size()\n");
    // capacity는 재대입 받지 않고 저장할 수 있는 최대 문자열의 길이
    // max_size는 최대한 대입받으면 가질 수 있는 최대 문자열의 길이
    string str16 = "Python, C++, NodeJs are my favorite language!";
    cout << str16.capacity() << " 가 str16의 현재 용량이다.\n";
    cout << str16.max_size() << " 가 str16의 최대 용량이다.\n";

}