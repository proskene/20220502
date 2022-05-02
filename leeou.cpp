#include <iostream>
using namespace std;

int main()
{
	int MyProject = 100;
	int Open = 10;

	cout << MyProject + Open << endl;
	cout << MyProject - Open << endl;
	cout << MyProject * Open << endl;
	cout << MyProject / Open << endl;
	cout << MyProject % Open << endl;
	

	float Re = 0.1f;
	float Gr= 0.3f;
	float Bl = 0.2f;

	float GrayColor = (0.299f * Re) + (0.587f * Gr) + (0.114 * Bl); 


	cout << GrayColor << endl;
	

	return 0;
}