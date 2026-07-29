#include<iostream>
using namespace std;
struct Distance
{
	int feet;
	float inches;
};
struct Volume
{
	Distance length;
	Distance width;
	Distance height;
};
float tofeet(Distance d)
{
     return d.feet + (d.inches / 12.0);
}
int main()
{
    Volume room = { {12,6}, {10,0}, {8,3} };

    float l = tofeet(room.length);
    float w = tofeet(room.width);
    float h = tofeet(room.height);

    float volume = l * w * h;

    cout<<"Room volume = "<<volume<<" cubic feet";

    return 0;
}
