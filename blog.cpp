#include <iostream>
#include <string.h>
#include <string>
using namespace std;

namespace tennis
{
	string player;
    int height;
}
using tennis::height;

int main()
{
	height = 100;
    cout << "네임스페이스를 통해 변수를 선언하고 호출합니다. : " << height << endl;
	return 0;
}
