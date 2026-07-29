#include<iostream>
using namespace std;
struct citizen
{
	int CNICID;
	char name[30];
	char city[20];
	int age;
};
int main()
{
	citizen c;
	citizen*ptr;
	ptr=&c;
	cout << "ENTER CNIC ID: ";
	cin >> ptr->CNICID;
	cout << "ENTER  NAME : ";
	cin >> ptr->name;
	cout << " ENTER CITY NAME : ";
	cin >> ptr->city;
	cout << "ENTER AGE : ";
	cin >> ptr->age;
     int choice;
    cout << "\nPress 1 to update city of residence, 0 to display record: ";
    cin >> choice;
	if (choice ==1)
	{
	cout << "Enter new city: ";    
    cin >> ptr->city;     
    cout << "\nUpdated Citizen Record:\n";     
    cout << "CNIC ID: " << ptr->CNICID << endl;      
    cout << "Name: " << ptr->name << endl;      
    cout << "City: " << ptr->city << endl;      
    cout << "Age: " << ptr->age << endl;   
   }    
    else
	{     
    cout << "\nOriginal Citizen Record:\n";    
    cout << "CNIC ID: " << ptr->CNICID << endl;     
    cout << "Name: " << ptr->name << endl;     
    cout << "City: " << ptr->city << endl;     
    cout << "Age: " << ptr->age << endl;  
	}
  return 0;
  }
