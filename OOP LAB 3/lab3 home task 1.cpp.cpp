#include <iostream>
using namespace std;
struct hotel
{
	int dishes;
	float bill;
	string name;
};
int main()
{
	hotel h[3];
	float totalbillwithtax=0; 
	cout << "enter record of last three hotels: ";
	for(int i=0;i<3;i++)
	{
		cout <<"\nHOTEL "<< i+1 << endl;
		cout << "hotel name: ";
		cin >> h[i].name;
		cout << "number of dishes eaten: ";
		cin >>h[i].dishes;
		cout << "Total bill(without bill): ";
		cin >> h[i].bill;
		totalbillwithtax+= h[i].bill*1.5;
}
        cout << "\nTotal bill of three hotels (including 15% tax): " << totalbillwithtax << endl;
         cout << "\n--- Hotel Records ---\n";
         for(int i = 0; i < 3; i++)
    {
        cout << "\nHotel " << i+1 << endl;
        cout << "Name: " << h[i].name << endl;
        cout << "Dishes eaten: " << h[i].dishes << endl;
        cout << "Bill (without tax): " << h[i].bill << endl;
        cout << "Bill (with 15% tax): " << h[i].bill * 1.15 << endl;
    }
    
    return 0;
}
