#include <iostream>
#include <string.h>
#include <string>
using namespace std;


class phone
{
    private:
    string id;
    int password;
    void set_profile();
    
    public:
    phone(const string& name, int height);
    phone();
    phone(const phone&);
    ~phone();
    string name_;
    int height_;
    string id_password_;
};


int main(void)
{
    printf("[생성자]\n");
    printf("* 클래스를 가지고 객체를 생성할 때, 매개 변수도 무조건 초기화해야 한다.\n");
    printf("* 매개 변수 초기화만을 수행하는 public 함수이며, 객체를 선언하면서 동시에 불러와진다.\n\n");

    printf("1. 규칙: (1) 초기화를 위한 데이터를 인수로 받는다. \n (2) 반환값 없지만 void 선언 X \n (3) 초기화 방법이 여러개일 경우, 오버로딩 규칙 -> 여러 생성자 가능.\n\n");
    printf("2. 생성자 선언 및 호출\n");

    // 1번째 선언 방법
    phone iphone("아이폰", 12);
    cout << "iphone's varibles : (name_, height_, id_password_)\n" << iphone.name_ << "\n" << iphone.height_ << "\n" <<  iphone.id_password_ << endl;

    // 2번째 선언 방법: 명시적 호출
    phone sansung=phone("삼성", 133);
    cout << "sansung's varibles : (name_, height_, id_password_)\n" << sansung.name_ << "\n" << sansung.height_ << "\n" <<  sansung.id_password_ << endl << endl;

    printf("[디폴트 생성자]\n");
    printf("* 객체 생성 시, 초깃값 명시하지 않으면 컴파일러에 의해 자동적으로 제공.\n");
    printf("* 클래스에서 생성자가 단 하나도 정의되지 않았을 때만 자동으로 제공한다.\n");
    printf("* 초깃값 명시하지 않고 생성하고 싶다면 디폴트 생성자 정의할 것.\n\n");
    
    printf("1. 디폴트 생성자 정의 : (1) 디폴트 인수를 이용 (2) 함수 오버로딩\n\n");
    printf("(1) 모든 인수에 디폴트 인수를 명시한다.\n");
    printf("phone::phone(const string& name='iphone', int height = 30);\n");

    printf("(2) 함수 오버로딩\n");
    printf("함수 오버로딩을 이용하여 매개변수를 가지지 않는 또 하나의 생성자를 정의한다.\n\n");
    
    printf("2. 디폴트 생성자를 가지는 객체의 선언\n");
    phone zhonggua;
    phone america = phone();
    phone *ptr_phone = new phone;
    // phone america(); 라고 하면 함수로 인식하기 때문에 XXX

    cout << "디폴트 생성자의 결과 : " << america.name_ << endl << endl;


    printf("[복사 생성자]\n");
    printf("1. 얕은 복사: 값을 복사하는 것이 아닌, 값을 가리키는 포인터를 복사하는 것\n");
    printf("* 객체의 대입을 얕은 복사로 진행하면 문제가 생길 수 있다.\n");
    printf("2. 깊은 복사: 값의 복사\n");
    printf("3. 복사 생성자: 자신과 같은 클래스 타입의 다른 객체에 대한 참조를 인수로 받아서 자신을 초기화하는 방법\n");
    phone russia(america);
    cout << "russia's variables(duplicating america) : " << russia.name_ << endl << endl;    


    printf("[소멸자]\n");
    printf("* 객체의 수명이 끝나면 정리해주는 멤버 함수.\n");
    printf("* 클래스 이름과 같지만, ~클래스() => 앞에 물결 표시 해줘서 구분한다.\n");
    printf("* 인수 X, 반환값 X, void X, 단 하나만.\n");
    printf("* 만약 new 키워드를 통해 동적으로 객체를 할당했다면, delete 키워드를 통해 반환해야 합니다(반드시).\n");
    printf("* 소멸자는 알아서 작동한다.\n");
    return 0;
};


// 복사 생성자
phone::phone(const phone& origin)
{
    name_ = origin.name_;
    height_ = origin.height_;
    set_profile();      
}

// 소멸자 정의
phone::~phone()
{
    cout << this->name_ << " 의 객체가 소멸되었습니다." << endl;
}

// 디폴트 생성자
phone::phone()
{
    name_ = "디폴트 값";
    height_ = 1234;
    set_profile();    
}

phone::phone(const string& name, int height)
{
    name_ = name;
    height_ = height;
    set_profile();
}

void phone::set_profile()
{
    id = name_;
    password = height_;
    id_password_ = "가나다라";
}