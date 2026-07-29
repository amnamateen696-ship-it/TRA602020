#include<iostream>
using namespace std;
struct student
{
	int rollno;
	int marks[5];
};
int main()
{
	student s;
	cout << "enter roll number:\n";
	cin >> s.rollno;
	cout << "enter marks of 5 subjects:\n";
	for(int i=0 ;i<5;i++)
	{
		cin >> s.marks[i];
	}
	cout << "-------STTUDENT RECORD------\n ";
	cout << "roll number: "<< s.rollno << endl;
	cout << "marks: ";
	for(int i=0;i<5;i++)
	{
		cout << s.marks[i] << " ";
	}
	return 0;
}

