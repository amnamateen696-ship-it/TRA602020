#include<iostream>
using namespace std;
struct parameter
{
	float length;
	float width;
};
struct result
{
float area;
float perimeter;
};
struct rectangle
{
	parameter p;
	result r;
};
int main()
{
rectangle rect;
cout << "ENTER LENGTH";  
cin >> rect.p.length; 
 cout << "Enter Width: ";
cin >> rect.p.width;
 
 rect.r.area = rect.p.length * rect.p.width;
    rect.r.perimeter = 2 * (rect.p.length + rect.p.width);

    cout << "\n--- Rectangle Result ---\n";
    cout << "Area: " << rect.r.area << endl;
    cout << "Perimeter: " << rect.r.perimeter << endl;
    return 0;
}
