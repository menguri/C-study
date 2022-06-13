#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main(void)
{
    printf("C++�� �� ���� ������� ���ڿ��� ������ �� �ִ�.\n");
    printf("1. C��� ��Ÿ���� ���ڿ�\n");
    printf("2. string Ŭ������ �̿��� ���ڿ�\n\n");

    // C��� ��Ÿ���� ���ڿ� -> "" �� ����ؼ� ǥ��. ���ڿ� ������ �Ѵ�. 
    // NULL ���� -> ���ڿ� ���� ���� �˷���� �Ѵ�. "\0"�� ���ڿ� ���� �־��� ��.

    printf("[���ڿ� �Է� �ޱ�]\n");
    const int SIZE = 20;
    // ���ڸ� �ϳ��� �迭ó�� �ٷ��.
    char address[SIZE];
    char name[SIZE];

    // cout << "�ڽ��� �̸��� �����ּ��� : ";
    // cin >> name;
    // cout << "�ڽ��� ������ ������ �����ּ��� : ";
    // cin >> address;
    // cout << name << "���Լ� " << address << " �� ���Ѿƶ�!" << endl;
    // ����, �� ����, ĳ���� ���� ���� ���� ���ڿ��� ������ �ν��Ѵ�.
    // �� ���θ� �ϳ��� ���ڿ��� �Է¹ޱ� ���ؼ� cin ��ü�� get() �޼ҵ带 ����ؾ� �Ѵ�.

    // cout << "�ڽ��� �̸��� �����ּ��� : ";
    // cin.get(name, SIZE).get();
    // cout << "�ڽ��� ������ ������ �����ּ��� : ";
    // cin.get(address, SIZE).get();
    // cout << name << "���Լ� " << address << " �� ���Ѿƶ�!" << endl;
    // ������ ������ ���̰� 20 ������ �Է� ��ü�� �ȵȴ�. ignore() �޼ҵ带 �̿�����.

    // cout << "�ڽ��� �̸��� �����ּ��� : ";
    // cin.get(name, SIZE).ignore(SIZE, '\n');
    // cout << "�ڽ��� ������ ������ �����ּ��� : ";
    // cin.get(address, SIZE).ignore(SIZE, '\n');
    // cout << name << "���Լ� " << address << " �� ���Ѿƶ�!" << endl;
    // ���ڿ� ���̸� �̸� ������ �ʿ䰡 ������? string Ŭ������ �̿�����

    string address1, name1;
    cout << "�ڽ��� �̸��� �����ּ��� : ";
    getline(cin, name1);
    cout << "�ڽ��� ������ ������ �����ּ��� : ";
    getline(cin, address1);
    cout << name1 << "���Լ� " << address1 << " �� ���Ѿƶ�!\n" << endl;

    printf("[string Ŭ����]\n");
    string str1;                        // ���ڿ� ����
    str1 = "���α��� õ���!";           // ���ڿ� �ʱ�ȭ
    string str2 = "���α��� �߻����!";  // ����� ���ÿ� �ʱ�ȭ

    string cat;
    cout << "���� cat ������ ���̴� " << cat.length() << " �Դϴ�." << endl;
    cat = "nancy";
    cout << "���� cat ������ ���̴� " << cat.length() << " �Դϴ�." << endl;
    cout << "���� cat �� ù ���ڴ� " << cat[0] << " �Դϴ�.\n" << endl;               // �ε����� ���� ���ڿ��� �ٷ� �� �ִ�. 
    // �ѱ��� 2����Ʈ�̱⿡, 2���� ������� ����ε� ���ڸ� �� �� �ִ�. 

    printf("[���ڿ� ó���ϱ� in string Ŭ����]\n");
    string str3 = "C++�� ";
    string str4 = "�������� ���׿�!";
    string str5;
    str5 = str3 + str4;
    cout << str5 << '\n';
    str3 += str4;
    cout << str3 + "\n" << endl;

    printf("[���ڿ� ����� in string Ŭ����]\n");
    string n;
    cout << "���� �̸���? ";
    getline(cin, n);
    cout << "����� �̸��� " << n << " �Դϴ�.\n" << endl;

    printf("[string �޼ҵ�]\n");
    // string Ŭ������ ���ǵ� ���ڿ��� ���õ� �۾��� �� �� ���� �޼ҵ��.
    // ��ǥ���� ���ڿ� ó�� �Լ��� ����.

    printf("1. length()/size()\n");
    // length�� ���̸�, size�� �޸� ũ�⸦ ��Ÿ����. ������ �ᱹ�� �� �� �Ȱ��� �� ����
    string str6 = "C++ is funny!\n";
    cout << "���ڿ� str6 �� ���̴� " << str6.length() << " �Դϴ�." << endl;
    cout << "���ڿ� str6 �� ũ��� " << str6.size() << " �Դϴ�.\n" << endl;

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
    // Ư�� ���ڿ��� ã��, �� ���� ��ġ�� ��ȯ�ϴ� �޼ҵ�
    cout << str7.find("C++") << endl;                   // ���ڿ�.find(ã�����ڿ�); 
    cout << str8.find("y") << endl;                     //���ڿ�.find(ã������); 
    str7 += str8 + str9;
    if (str7.find("very", 6) != string::npos){
        printf("�ش� ���ڿ��� %d �� �ֽ��ϴ�.\n\n", str7.find("very", 6));
    }
    else {
        printf("�ش� ���ڿ��� ã�� �� �����ϴ�.\n\n");
    }

    printf("4. compare()\n");
    // �� ���ڿ� ���� ������ ���ϴ� �޼ҵ�
    printf("�� ���ڿ��� ���� ���, 0�� ��ȯ�մϴ�.");
    printf("str1�� str2���� ���� ���������� �տ� ���� ���, 0���� ���� ���� ��ȯ�մϴ�.");
    printf("str1�� str2���� ���� ���������� �ڿ� ���� ���, 0���� ū ���� ��ȯ�մϴ�.");
    string str11 = "BCED";
    string str12 = "ACED";
    if (str11.compare(str12) == 0){
        printf("���� ���ڿ��� �����ϴ�.\n\n");
    }
    else if (str11.compare(str12) < 0){
        printf("str11�� ���� ���������� str12���� �տ� �ֽ��ϴ�.\n\n");
    }
    else {
        printf("str11�� ���� ���������� str12���� �ڿ� �ֽ��ϴ�.\n\n");
    }

    printf("5. replace()\n");
    printf("��� : ���ڿ�.replace(��ü ���ڿ� ������ġ, ��ü ���ڿ��� ����, ���ο� ���ڿ�)\n");
    string str13 = "a is very beautiful word\n";
    string str14 = "beautiful";
    string str15 = "dirty";
    string::size_type index = str13.find(str14);
    // replace ���ֱ� ����, ���� ���� Ȯ�κ��� ����.
    if (index != string::npos){
        str13.replace(index, 9, str15);
    }
    cout << str13 << endl;

    printf("6. capacity()/max_size()\n");
    // capacity�� ����� ���� �ʰ� ������ �� �ִ� �ִ� ���ڿ��� ����
    // max_size�� �ִ��� ���Թ����� ���� �� �ִ� �ִ� ���ڿ��� ����
    string str16 = "Python, C++, NodeJs are my favorite language!";
    cout << str16.capacity() << " �� str16�� ���� �뷮�̴�.\n";
    cout << str16.max_size() << " �� str16�� �ִ� �뷮�̴�.\n";

}