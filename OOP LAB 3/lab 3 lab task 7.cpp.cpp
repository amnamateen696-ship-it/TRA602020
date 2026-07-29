#include<iostream>
using namespace std;
struct employee
{
	int empnum;
	float sallery;
};
int main()
{
	employee e[3];
	for(int i=0;i<3;i++)
	{
		cout << "enter employee number: \n";
		cin >> e[i].empnum;
		cout << "enter compensation: \n";
		cin >> e[i].sallery;
	}
	cout << "--------------EMPLOYEE DATA-------------\n";
	for(int i=0;i<3;i++)
	cout << "EMPLOYEE: " << i+1 << ": " << endl << "EMPLOYEE NUMBER :" << e[i].empnum << "employee sallery: "  << e[i].sallery << endl;
	return 0;
}
