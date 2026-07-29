#include<iostream>
using namespace std;
struct phone
{
	int areacode;
	int exchange;
    int number;
};
int main()
{
	phone mynumber={ 282,141,303};
	phone yournumber;
	cout << "enter your areacode,exchange,number:\n";
	cin >> yournumber.areacode >> yournumber.exchange >> yournumber.number;
	
	cout << "My NUMBER IS:\n "<< mynumber.areacode << " " << mynumber.exchange  << " " << mynumber.number << " " << endl;
	cout << "Your number is:\n" << yournumber.areacode <<  " " <<  yournumber.exchange << " " <<  yournumber.number <<  " " << endl;
    return 0;
}


