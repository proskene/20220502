#include <iostream>
using namespace std;

int main()
{
	int count = 0;
	cin >> count;
	for (int a = count; a >= 1; --a)
	{
	for (int i = 1; i <= a; --i)
		{
			cout << "*";
		}
		cout << '\n';
	}
	return 0;
}

