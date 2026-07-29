#include<iostream>
using namespace std;
struct date
{
	int month,day,year;
};
int main()
{
	date d;
	char ch;
	cout << "enter date (MM/DD/YYYY)";
	cin >>d.month>>ch>>d.day>>ch>>d.year;
	cout<<"Date is: "<<d.month<<"/"<<d.day<<"/"<<d.year;
    return 0;
}
