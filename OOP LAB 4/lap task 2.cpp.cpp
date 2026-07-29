#include<iostream>
using namespace std;
struct data
{
	string name;
	string color;
};
struct car
{
	string model;
    int topspeed;
   int no_of_gears;
   data info;
};
int main()
{
	car c;
	cout << "enter car name : ";
	cin >> c.info.name;
	cout << "enter car color : ";
	cin >> c.info.color;
	cout << "enter car model : ";
	cin >> c.model;
	cout << "enter topspeed : ";
	cin >> c.topspeed;
	cout << "enter no_of_gears : ";
	cin >> c.no_of_gears;
	if(c.topspeed > 200 && c.no_of_gears >4)
	{
		cout << "\n    car details  ";
		cout << "Name: " << c.info.name << endl;
        cout << "Color: " << c.info.color << endl;
        cout << "Model: " << c.model << endl;
        cout << "Top Speed: " << c.topspeed << endl;
        cout << "Gears: " << c.no_of_gears << endl;
    }
    else
    {
        cout << "\nYour car is not suitable for the race." << endl;
    }

    return 0;
}

