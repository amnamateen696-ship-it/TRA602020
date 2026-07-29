#include<iostream>
using namespace std;
struct country
{
	string name;
	float population;
};
int main()
{
country c;
cout << "enter country name:\n";
cin >> c.name;
cout << "Enter population(in millions):";
cin >> c.population;

cout << "\n-----COUNTRY DATA------\n ";
cout << "COUNTRY: "<< c.name << endl;
cout << "POPULATION: "<< c.population << endl;
return 0;
}

