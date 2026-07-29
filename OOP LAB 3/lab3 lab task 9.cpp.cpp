#include<iostream>
using namespace std;
struct time
{
int hour,seconds,minutes;
};
int main()
{
	time t1;
	char ch;
	cout << "enter the time (HH:MM:SS)";
	cin >> t1.hour>>ch>>t1.minutes>>ch>>t1.seconds;
	long totalsecs = t1.hour*3600 + t1.minutes*60 + t1.seconds;

    cout<<"Total seconds = "<<totalsecs;

    return 0;
}
