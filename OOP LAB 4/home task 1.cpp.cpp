#include<iostream>
using namespace std;
struct date 
{
	int day,month,year;
};
struct phonebook
{
	string name;
	string city;
	string phonenumber;
	date dob;
};
int main()
{
	phonebook person;
	cout << "ENTER NAME : ";
	cin >> person.name;
	cout << "ENTER CITY : ";
	cin >> person.city;
	cout << "ENTER PHONENUMBER : ";
	cin >> person.phonenumber;
	cout << "ENTER DATE OF BIRTH : ";
	cin >> person.dob.day >> person.dob.month >> person.dob.year;
	cout << "\n ENTER PHONEBOOK RECORD : ";
	cout << "NAME : "<< person.name << endl;
	cout << "CITY : " << person.city << endl;
	cout << "PHONENUMBER : " << person.phonenumber << endl;
	cout << " DATE OF BIRTH : " << person.dob.day << "/" << person.dob.month << "/" <<  person.dob.year << endl;
	return 0;
	
	
}
