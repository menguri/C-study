#include <iostream>
#include <string.h>
#include <string>
using namespace std;


class Position
{
    private:
        double x_;
        double y_;
    public:
        Position(double x, double y);
        Position operator-(const Position& other); 
        void Display();

        friend Position operator+(const Position& pos4, const Position& pos5);
};


int main(void)
{
    printf("[������ �����ε�]\n");
    printf("=> -,*,/,+ ���� �����ڿ� ���ؼ��� �� ����� Ŀ�����ϰ�, �����ε� ��ų �� �ִ�.\n");
    printf("=> ����� ���� Ÿ�Ա��� Ȯ���� �� �ְ�, Ŭ������ �ϳ��� Ÿ������ �����ش�.\n\n");
    
    printf("1. ������ �Լ�(operator function)\n");
    printf("���� => operator�����ε��ҿ�����(�Ű��������)\n");
    printf("���� => �����ڸ� �� ������� costom�ؼ� �Լ�ó�� ���� ��\n");
    Position pos1 = Position(3.3,4.4);
    Position pos2 = Position(8.8,9.9);
    Position pos3 = pos1 - pos2;
    pos3.Display();
    printf("\n");

    printf("2. ������ �Լ��� ���� ���\n");
    printf("(1) Ŭ���� ��� �Լ��� ����(���� ����)\n");
    printf("(2) ���� �Լ��� ���� => ���� private�� ���� ���Ѵ�. friend �Լ��� ����ؼ� ����.\n");
    Position pos4 = Position(3.3,4.4);
    Position pos5 = Position(8.8,9.9);
    Position pos6 = pos4 + pos5;
    pos6.Display();
    printf("\n");

    printf("[�����ε��� ���� ����]\n");
    printf("1. ���� ���ο� �����ڸ� ������ �� ����.\n");
    printf("2. �⺻ Ÿ���� �ٷ�� �������� �ǹ̴� ������ �Ұ�. ����� ���� Ÿ��. class, ����ü ����.\n");
    printf("3. �����ε��� �����ڴ� �⺻ Ÿ�Կ� ����Ǵ� �ǿ������� ��, �켱���� �� �׷�ȭ�� �ؼ��Ѵ�.\n");
    printf("4. ����Ʈ �μ��� ����� �� ����.\n");
    printf("* �����ε��� �� ���� ������/��� �Լ��θ� �����ε��� �� �ִ� ������ \n");

}


Position::Position(double x, double y)
{
    x_ = x;
    y_ = y;
}

Position Position::operator-(const Position& other)
{
    return Position((x_+other.x_)/2, (y_+other.y_)/2);
}


// Ŭ���� ���� �����ڰ� �ƴϴ�. �̰��������� �� �� �ִ�. ������ ������� Postition�̰�, private�� �����ϰ� �ʹٸ� ���ٸ� ��ó�� ���ؾ� ��.
Position operator+(const Position& pos4, const Position& pos5)
{
    return Position((pos4.x_ + pos5.x_)*2, (pos4.y_ + pos5.y_)*2);
}

void Position::Display()
{
    cout << "pos3�� x, y �� : " << this->x_ << " , " << this->y_ << endl;
}