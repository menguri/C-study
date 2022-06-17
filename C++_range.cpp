#include <iostream>
#include <string.h>
#include <string>
using namespace std;

static int InnerStatic = 1;

#include "C++_range_2.cpp"
extern int OuterStatic;

void Scope(void);

void Static_func(void);
void Static_func2(void);

void InnerStatic_func(void);


namespace kang
{
    string first;
    string last;
}

namespace nameus
{
    string second;
    string third;
}
using namespace nameus;

namespace nameus2
{
    string forth;
    string fifth;
}
using nameus2::forth;

int main(void)
{
    printf("[��ȿ ����(scope)]: �ϳ��� ��ȯ ���� ������ �ش� ������ ���� �� �ִ� ����\n");
    printf("* C++ ǥ�ؿ����� ����(file)�̶�� ���� ��ȯ ������� �� ���.\n");
    printf("[����(linkage)]: �ش� ������ ����� �� �ִ� ������ ���� ���� ����.\n");
    printf("* �ܺ� ���� -> ���� ���� ��� ����. ���� ���� -> �ϳ��� ���Ͽ�����. �Լ� ������ ����� ���� -> �Լ� �ۿ��� ��� �Ұ�\n\n");
    
    printf("[C++ ������ ����]\n");
    printf("* �ڵ� ����\n");
    printf("* �������� ����\n");
    printf("* ���� ����\n\n");
    
    printf("1. �ڵ� ����(automatic variable\n");
    printf("* ��� ������ ����� ����. �Լ��� �Ű����� ����. ��� �������� ��ȿ�ϰ� ��� ����Ǹ� �޸𸮿��� �������. ���ÿ� ����. C����� ���� ������ ���� �ǹ�\n");
    printf("* ���ǿ����� ������ �̸��� ���� �ؼ��� �ȵȴ�.\n");
    int var = 10;
    cout << "main �Լ� �ȿ��� ����� var ������ " << var << " �Դϴ�." << endl;
    Scope();
    if (var < 11){
        int var = 100;
        cout << "if �ȿ��� ����� var ������ " << var << " �Դϴ�." << endl;
    }
    cout << "���� �ڵ� ���� var�� " << var << " �Դϴ�." << endl << endl;


    printf("2. �������� ����\n");
    printf("* C���� CPU �������� �޸𸮿� �����ϴ� ����. ������ C++ �Ѿ���鼭 �׳� �ڵ� ���� �ǹ��ϴ� ����\n\n");
    
    
    printf("3. ���� ����(static variable)\n");
    printf("* ���α׷��� ����Ǵ� ���� �����Ǵ� ����\n");
    printf("* ������ ������ ����ǰ�, �ʱ�ȭ���� ������ 0���� �ڵ� �ʱ�ȭ\n\n");
    
    printf("3-1. ������ ������ �ʴ� ���� ����\n");
    printf("* static Ű���� ����Ͽ� ����. ���� ���� + ���� ����\n");
    printf("* �� ���� �ʱ�ȭ�ǰ�, ���α׷��� ����Ǿ�� �޸� �󿡼� �������. �ش� ��� �������� ���� ����\n");
    for (int i=0; i < 5; i++){
        Static_func();
        Static_func2();
    }
    printf("* ���������� �Լ� ����Ǹ� ���� �ʱ�ȭ. ���������� �޸𸮿� �����ֱ� ������ ���� ���Ѵ�.\n\n");

    printf("3-2. ���� ������ ������ ���� ����\n");
    printf("* ��ȿ ������ ��ȯ ����(���� ����)�� ������. \n");
    printf("* �ϳ��� ���� ���� ��� ��Ͽ��� ���� ����.\n");
    cout << "InnerStatic�� ���� " << InnerStatic << " �Դϴ�." << endl;
    if (InnerStatic < 50){
        cout << "if �������� InnerStatic�� ��ȿ�մϴ� : " << InnerStatic << endl;
    }
    InnerStatic_func();
    int InnerStatic = 50;
    cout << "���� ������ ����� ��, �ٽ� ���� ������ �Ȱ��� �̸����� ����Ǹ� ���������鼭 ���� ������ ���� �Ұ��Դϴ�." << endl;
    cout << "�ٲ� InnerStatic : " << InnerStatic << endl << endl;
    
    printf("3-3. �ܺ� ������ ������ ���� ����\n");
    printf("* ��ȿ ������ ��ȯ ������ ������. �ܺ� ������ �����⿡, ���� ����/�ܺ� ������� ��.\n");
    printf("* �ܺ� ���Ͽ����� ����� �� ������, ��� ���Ͽ��� ���� extern Ű���� ���. ���� ���Ǵ� �� ���Ͽ�����.\n");
    cout << "C++_range_2.cpp���� ������ OuterStatic ���� : " << OuterStatic << endl << endl;


    printf("[���ӽ����̽�(namespace)]\n");
    printf("* ���� �ĺ��ڿ� ���� �� �ִ� ��ȿ ������ �����ϴ� ������ ����\n");
    printf("* ����, �Լ�, ����ü, Ŭ���� ���� all ���� ����. Ư�� ���ӽ����̽� �ȿ� �ִ� �̰����� ����.\n\n");
    
    
    printf("[���ӽ����̽� ����/����]\n");
    printf("* namespace Ű���带 �̿��Ͽ� ���� ����. �ٸ� ���ӽ����̽� �������� ���ǵ� �� �ִ�. ��� �������� ���� X\n");
    printf("* C++���� ���� namespace ����. �ĺ����� namespace ������ �������� ����.\n");
    kang::first = "��";
    kang::last = "����";
    cout << "���� �̸��� " << kang::first+kang::last << " �Դϴ�." << endl << endl;

    printf("[����ȭ -> using ������(directive)/����(declaration)]\n");
    printf("using ������: using namespace kang\n");
    printf("*�ش� ��Ͽ����� �ش� ���ӽ����̽��� ��� �̸� ��� ����.\n");
    second = "�̰Ŵ� using �����ڸ� �̿��� ����̶���";
    cout << "using ������ �̿��ؼ� second ������ ����մϴ� : " << second << endl << endl;
    printf("using ����: using namespace kang::first\n");
    printf("* �� �ϳ��� �̸����� ����� �� �ְ� �Ѵ�.\n");
    forth = "�̰Ŵ� using������ �̿��� ����̶���";
    cout << "using ���� �̿��ؼ� forth ������ ����մϴ� : " << forth << endl;
}


void Scope(void)
{
    int var = 99;
    cout << "Scope �Լ� �ȿ��� ����� var ������ " << var << " �Դϴ�." << endl;
}


void Static_func(void)
{
    static int var = 10;
    cout << "���� �������� var�� ���� " << var << " �Դϴ�." << endl;
    var++;
}

void Static_func2(void)
{
    int var = 10;
    cout << "���� �������� var�� ���� " << var << " �Դϴ�." << endl;
    var++;
}

void InnerStatic_func(void)
{
    cout << "�Լ� �������� InnerStatic�� ��ȿ�մϴ� : " << InnerStatic << endl;
}