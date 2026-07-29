#include<iostream>
using namespace  std;
struct result
{
	int marks;
	char grade;
};
struct record
{
	int rollnmbr;
	result result;
};
int main()
{
record student;
cout << "enter marks : ";
cin >> student.result.marks;
cout << "enter grade : ";
cin >> student.result.grade;
cout << "\n--- Student Record ---" << endl;
    cout << "Roll Number: " << student.rollnmbr << endl;
    cout << "Marks: " << student.result.marks << endl;
    cout << "Grade: " << student.result.grade << endl;

    return 0;
}	
