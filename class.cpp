#include <iostream>
#include <string.h>
#include <string>
using namespace std;


class class1
{
    private:
        int private_varible;
        void set_private(int);
    
    public:
        int class1_num = 30;
        int set_public(int);
};

class class2
{
    private:
        bool like(int);

    public:
        int height;
        string name[30];
        void introduce(int height, string name){cout << name << "�� Ű�� " << height << " �̾�.\n";};
        void likey(int);
};


class height_class
{
    private:
        string normal_weight_;
    public:
        height_class(const string& name, int height);
        string name_;
        int height_;
        const height_class& larger(const height_class&);
};


int main(void)
{
    printf("[Ŭ������ ����]\n");
    printf("Ŭ������? ����ü�� ����ȣȯ. �������(������Ƽ), ����Լ�(�޼ҵ�)�� �����Ѵ�. \n");
    printf("OOP�� Ư¡: (1) �߻�ȭ (2) ĸ��ȭ (3) ���� ���� (4) ��Ӽ� (5) ������\n");
    printf("�ν��Ͻ�: Ŭ������ ����ϱ� ���� �����ϴ� Ŭ���� Ÿ���� ��ü. �޸𸮿� ���Եȴ�. Ŭ������ ������ ����� ���� Ÿ��.\n");
    printf("* ��ü���� �ڽŸ��� ��������� �������� ����Լ��� ��� �ν��Ͻ��� �����Ѵ�.\n\n");

    printf("[Ŭ������ ����]\n");
    // class Ŭ�����̸�
    // {
    // ��������������1:
        // �������1��Ÿ�� �������1���̸�;
        // �������2��Ÿ�� �������2���̸�;
        // ...
        // ����Լ�1�� ����
        // ����Լ�2�� ����
    // };
    printf("private(���� ����), public(���� �Ұ�) ���� ���� ������ ����. private ������ �� ���, �ܺ��ڴ� ���� �Ұ�. ĸ��ȭ ����.\n");
    printf("��ü ���� -> Ŭ�����̸� ��ü���������̸�;\n");
    class1 class101;
    printf("Ŭ���� ���� �ۿ��� ����Լ� ���� -> ��ȯŸ�� Ŭ����::����Լ�(����){��ü;}\n");
    cout << "class101.set_public(30)'s result : " << class101.set_public(30) << endl << endl;

    printf("[���� ����]\n");
    printf("1. ���� ���� & ���� ����\n");
    printf("* ����ü�� �ܺο��� ���� ����. ������ ��ü ������ ��ǥ�� Ŭ������ ���� ���� �����ؾ� ��.\n");
    printf("* public, private, protected�� ���� ������ �����Ѵ�.\n\n");

    printf("2. public ���� ���� ������\n");
    printf("* �ܺη� �����ǰ�, ��𼭿��� ���� �����ϴ�. private ����� ���α׷� ������ �������̽� ����.\n");
    printf("* public ��� �Լ��� ���ؼ��� private ������� ������ �����ϴ�.\n\n");

    printf("3. private ���� ���� ������\n");
    printf("* �ܺο� �������� �ʴ´�. public ��� �Լ��� ���ؼ��� ���� ����.\n");
    printf("* �⺻ ���� ���� ������ private�� ����. ���� ����. �������� ���� �����ϴµ� ���.\n\n");
    
    class2 class202;
    class202.introduce(189, "������");
    class202.likey(189);


    printf("4. protected ���� ���� ������\n");
    printf("* �Ļ� Ŭ������ ���õ� ���� ���� ������\n");
    printf("* �Ļ� Ŭ������ ���ؼ��� public ���ó�� ���, �ܺο����� private ���ó�� ���.\n\n");
    
    
    printf("[this ������]\n");
    printf("1. ��� �Լ��� ����\n");
    printf(": ���� Ŭ���������� ��� �Լ��� �����Ѵ�. ���� �ڱ� �ڽ��� �Լ��� �μ��� �ְ� ���� ���� ��� �ؾ� �ұ�?\n");
    printf("2. this ������\n");
    printf(": �ڱ� �ڽŸ��� this ������ ������. �ش� ��� �Լ��� ȣ���� ��ü�� ����Ű�� �Ǹ�, ��Ȯ�� �ľ��� ����.\n");
    height_class kang("������", 182);
    height_class ming("����õ", 190);

    cout << "�� �� �� ū ����� " << kang.larger(ming).name_ << " �Դϴ�.\n" << endl;

    printf("* Ŭ����, ����ü �Ǵ� ����ü Ÿ���� ������ ��� �Լ����� ��� ����\n");
    printf("* this �����ʹ� ������ ���. ���Ҵ� �Ұ���.\n");
    return 0;
    
}



int class1::set_public(int p){return p;}

bool class2::like(int height)
{
    if (height >  180){
        return true;
    };
    return false;
}

void class2::likey(int height)
{
    bool result1 = like(height);
    if (result1 == false){
        printf("�� ���� �� �̻����� �ƴմϴ�.\n\n");
    }
    else{
        printf("�� ���� �� �̻����Դϴ�.\n\n");
    }
}


height_class::height_class(const string& name, int height)
{
    name_ = name;
    height_ = height;
    normal_weight_ = height / 2.5;
}

const height_class& height_class::larger(const height_class& anothor)
{
    if (anothor.height_ > this->height_){
        return anothor;
    }
    else {
        return *this;
    }
}