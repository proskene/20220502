#include <iostream>
using namespace std;

int main()
{
	int Sum = 0;
	for (int i = 1; i <= 100; i += 2)
	{
		Sum += i;
	}

		cout << Sum << endl;
			
		int Sum1 = 0;
		for (int Q = 1; Q <= 100; Q += 3)
		{
			Sum1 += Q;
		}
		cout << Sum1 << endl;
		cout << Sum -Sum1 << endl;

	return 0;
}

