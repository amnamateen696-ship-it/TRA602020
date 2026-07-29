#include<iostream>
#include<string>
using namespace std;
struct student
{
	string name;
	int rollnmbr;
	float marks[3];
	float gpa;
};
void calculateGPA(student &s)
{
float avg = (s.marks[0] + s.marks[1] + s.marks[2]) / 3.0;
    s.gpa = avg / 10.0;
    if(s.gpa > 4.0)
        s.gpa = 4.0;
}
void displayStudent(student s) 
{   
 cout << "\n--- Student Details ---\n";  
cout << "Name: " << s.name << endl;  
cout << "Roll No: " << s.rollnmbr << endl;  
cout << "Marks: " << s.marks[0] << ", "         << s.marks[1] << ", " << s.marks[2] << endl;  
cout << "GPA: " << s.gpa << endl;
}
int main()
{
student students[2];   
for(int i=0; i<2; i++)
 {    
 cout << "\nEnter details for Student " << i+1 << endl;      
 cout << "Name: ";     
getline(cin, students[i].name);        
 cout << "Roll No: ";   
cin >> students[i].rollnmbr;       
 cout << "Enter marks for 3 subjects";
cin >> students[i].marks[0] 
            >> students[i].marks[1] 
            >> students[i].marks[2];

 for(int i=0; i<2; i++)      
displayStudent(students[i]);  
  return 0;
  }
}
