#include <iostream>
#include <string.h>
#include <string>
#include <cmath>
using namespace std;


class player;

class bmi
{
    public:
        void bmi_caculating(const player& origin);
        void display(){printf("example");};
};

class player
{
    private:
        const double ratio_ = 5.5;
        double height_;
        double weight_;
        string name_;

    public:
        static int muscle_power;            // ���� ��� ����
        static int muscle_count();          // ���� ��� �Լ�
        player(double, double, string);     // ������
        ~player(){muscle_power--;};         // �Ҹ���
        void introduce() const;
        friend player operator*(double mul, const player& origin);
        friend class bmi;
        friend void bmi::bmi_caculating(const player& origin);
};

player operator*(double mul, const player& origin);



int main(void)
{
    printf("[OOP ĸ��ȭ]\n");
    printf("* ��ü �ȿ��� �ܴ�������, �ܺο� ���� �������� ���߱� ���� ��ġ \n");
    printf("* ���ʿ� private, public �������� �����ڸ� ���� �����ϰ� �ִ�.\n\n");

    printf("[������]\n");
    printf("* ��� �Լ��� ��ü�� ȣ���ϱ⿡ ���� �������� �Ű����� ����, Ÿ�Կ� �ΰ�\n");
    printf("* ���� ������ �ϸ� private ���� �Ұ�. �׷��� ������ Ű���带 ���� ������ �� �ֵ���.\n");
    player nadal = player(185, 85, "����");
    player federer = player(184.6, 73, "�����");
    player nadal_2 = 5 * nadal;
    player federer_2 = 10 * federer;
    printf("\n");


    printf("[�پ��� ������]\n");
    printf("1. Ŭ���� ������\n");
    printf("* A Ŭ������ B�� friend�� �� ���, B���� A�� �������, �Լ��� �̿��� �� �ִ�.\n");
    bmi player_bmi;
    player_bmi.bmi_caculating(nadal);
    player_bmi.bmi_caculating(federer);
    printf("\n");


    printf("2. Ŭ���� ������ ����Լ�\n");
    printf("* Ŭ������ Ư�� �Լ��� ���ؼ��� ������ �� �ֵ��� �Ѵ�.\n");
    printf("friend void bmi::bmi_caculating(const player& origin);\n");
    printf("\n");
    
    printf("3. ���� ����\n");
    printf("* ��ȯ ����(���ΰ� ���θ� ����)�� ���ϱ� ���� �� Ŭ������ �ٸ� Ŭ������ �տ� �̸� ����\n");
    printf("* class Ŭ�����̸�;\n");
    printf("* ���� ��ġ �Ű��� �Ѵ�. ������ ���� ó���� �� �� �ִ��� �ľ��� ��.\n");
    printf("\n");
    printf("\n");
    
    
    printf("[���� ���(static member variable)�� ��� ���]\n");
    printf("1. ���� ��� ����\n");
    printf("* Ŭ������ ��������, ��ü ���� �Ҵ���� �ʰ� ��� ��ü�� ����.\n");
    printf("* Ŭ���� �������� ���������, ���Ǵ� ���� �������� ����.\n");
    printf("* Ŭ������ ��� �Լ��� �����常�� ���� ����\n");
    printf("* �����ϰ� �ϰ� ������ public�� ����.\n");
    printf("static int muscle_power;\n");
    printf("int player::muscle_power = 80;\n");
    nadal.introduce();
    federer.introduce();
    printf("\n");

    printf("2. ���� ��� �Լ�\n");
    printf("* ��ü�� �������� �ʰ�, Ŭ���� �̸������� ȣ�� ����.\n");
    printf("* ��ü�� �������� �ʱ⿡ this �����͸� ������ �ʴ´�.\n");
    printf("* ���� ��� ���� �ۿ� ����� �� ����.\n");
    printf("static int muscle_count(); \n");
    printf("int player::muscle_count()\n");
    nadal.introduce();
    federer.introduce();
    printf("\n");

    printf("3. ��� ��� ���� / ��� ��� �Լ�\n");
    printf("* ��� ��� ������ �� �� �ʱ�ȭ�ϸ�, �� ���� ������ �� ���� ��� ����.\n");
    printf("* const Ÿ�� ��������̸�;\n");
    printf("* ��� ��� �Լ��� ȣ���� ��ü�� �����͸� ������ �� ���� ��� �Լ�.\n");
    printf("* �Լ��� ���� const\n");
    printf("\n");
    return 0;
}


player::player(double height, double weight, string name)
{
    height_ = height;
    weight_ = weight;
    name_ = name;
    introduce();
}

int player::muscle_power = 80;

int player::muscle_count()
{
    return muscle_power - 80;
}

void player::introduce() const
{
    cout << "[���� profile]" << endl;
    cout << muscle_count() << " ��° ����" << endl;
    cout << "���� �̸� : " << this->name_ << endl;
    cout << "���� Ű : " << this->height_ << endl;
    cout << "���� ������ : " << this->weight_ << endl;
    cout << "�� : " << ++muscle_power << endl;
}

player operator*(double mul, const player& origin)
{
    double new_height = origin.height_ * mul;
    double new_weight = origin.weight_ * mul;
    return player(new_height, new_weight, origin.name_ + "_2");
}

void bmi::bmi_caculating(const player& origin)
{
    double bmi_cal = (origin.weight_ / pow(origin.height_, 2)) * 100;
    cout << origin.name_ << " �� bmi : " << bmi_cal << endl;
}