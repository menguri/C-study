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
    printf("[������]\n");
    printf("* Ŭ������ ������ ��ü�� ������ ��, �Ű� ������ ������ �ʱ�ȭ�ؾ� �Ѵ�.\n");
    printf("* �Ű� ���� �ʱ�ȭ���� �����ϴ� public �Լ��̸�, ��ü�� �����ϸ鼭 ���ÿ� �ҷ�������.\n\n");

    printf("1. ��Ģ: (1) �ʱ�ȭ�� ���� �����͸� �μ��� �޴´�. \n (2) ��ȯ�� ������ void ���� X \n (3) �ʱ�ȭ ����� �������� ���, �����ε� ��Ģ -> ���� ������ ����.\n\n");
    printf("2. ������ ���� �� ȣ��\n");

    // 1��° ���� ���
    phone iphone("������", 12);
    cout << "iphone's varibles : (name_, height_, id_password_)\n" << iphone.name_ << "\n" << iphone.height_ << "\n" <<  iphone.id_password_ << endl;

    // 2��° ���� ���: ����� ȣ��
    phone sansung=phone("�Ｚ", 133);
    cout << "sansung's varibles : (name_, height_, id_password_)\n" << sansung.name_ << "\n" << sansung.height_ << "\n" <<  sansung.id_password_ << endl << endl;

    printf("[����Ʈ ������]\n");
    printf("* ��ü ���� ��, �ʱ갪 ������� ������ �����Ϸ��� ���� �ڵ������� ����.\n");
    printf("* Ŭ�������� �����ڰ� �� �ϳ��� ���ǵ��� �ʾ��� ���� �ڵ����� �����Ѵ�.\n");
    printf("* �ʱ갪 ������� �ʰ� �����ϰ� �ʹٸ� ����Ʈ ������ ������ ��.\n\n");
    
    printf("1. ����Ʈ ������ ���� : (1) ����Ʈ �μ��� �̿� (2) �Լ� �����ε�\n\n");
    printf("(1) ��� �μ��� ����Ʈ �μ��� ����Ѵ�.\n");
    printf("phone::phone(const string& name='iphone', int height = 30);\n");

    printf("(2) �Լ� �����ε�\n");
    printf("�Լ� �����ε��� �̿��Ͽ� �Ű������� ������ �ʴ� �� �ϳ��� �����ڸ� �����Ѵ�.\n\n");
    
    printf("2. ����Ʈ �����ڸ� ������ ��ü�� ����\n");
    phone zhonggua;
    phone america = phone();
    phone *ptr_phone = new phone;
    // phone america(); ��� �ϸ� �Լ��� �ν��ϱ� ������ XXX

    cout << "����Ʈ �������� ��� : " << america.name_ << endl << endl;


    printf("[���� ������]\n");
    printf("1. ���� ����: ���� �����ϴ� ���� �ƴ�, ���� ����Ű�� �����͸� �����ϴ� ��\n");
    printf("* ��ü�� ������ ���� ����� �����ϸ� ������ ���� �� �ִ�.\n");
    printf("2. ���� ����: ���� ����\n");
    printf("3. ���� ������: �ڽŰ� ���� Ŭ���� Ÿ���� �ٸ� ��ü�� ���� ������ �μ��� �޾Ƽ� �ڽ��� �ʱ�ȭ�ϴ� ���\n");
    phone russia(america);
    cout << "russia's variables(duplicating america) : " << russia.name_ << endl << endl;    


    printf("[�Ҹ���]\n");
    printf("* ��ü�� ������ ������ �������ִ� ��� �Լ�.\n");
    printf("* Ŭ���� �̸��� ������, ~Ŭ����() => �տ� ���� ǥ�� ���༭ �����Ѵ�.\n");
    printf("* �μ� X, ��ȯ�� X, void X, �� �ϳ���.\n");
    printf("* ���� new Ű���带 ���� �������� ��ü�� �Ҵ��ߴٸ�, delete Ű���带 ���� ��ȯ�ؾ� �մϴ�(�ݵ��).\n");
    printf("* �Ҹ��ڴ� �˾Ƽ� �۵��Ѵ�.\n");
    return 0;
};


// ���� ������
phone::phone(const phone& origin)
{
    name_ = origin.name_;
    height_ = origin.height_;
    set_profile();      
}

// �Ҹ��� ����
phone::~phone()
{
    cout << this->name_ << " �� ��ü�� �Ҹ�Ǿ����ϴ�." << endl;
}

// ����Ʈ ������
phone::phone()
{
    name_ = "����Ʈ ��";
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
    id_password_ = "�����ٶ�";
}