#include<iostream>
using namespace std;
struct points
{
	int x;
	int y;
};
int main()
{
 points p1,p2,p3;
cout << "enter coordinates for p1: ";
cin >> p1.x >> p1.y;
cout << "enter coordinate for p2: ";
cin >> p2.x >> p2.y;
p3.x=p1.x + p1.y;
p3.y=p2.x + p2.y;
cout<<"Coordinates of p1+p2 are: "<<p3.x<<", "<<p3.y;
return 0;
}
