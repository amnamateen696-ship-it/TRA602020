#include<iostream>
#include<string>
using namespace std;
class robot
{
	public:
	string robotID;
	string  robotType;
	int battery;
	float speed;
};
int main()
{
	robot r1, r2, r3;
	r1.robotID="R-001";
	r1.robotType="picker";
	r1.battery=90;
	r1.speed=1.5;
	r2.robotID="R-002";
	r2.robotType="scout";
	r2.battery=55;
	r2.speed=2.2;
	r3.robotID="R-003";
	r3.robotType="carrier";
	r3.battery=20;
	r3.speed=0.8;
	cout << "--------ROBOT FLEET STATUS--------"<<endl;
	cout << "ID:" << r1.robotID
	     <<"| TYPE:" << r1.robotType
	     <<"| BATTERY:" << r1.battery<< "%"
	     <<"| SPEED:" << r1.speed<< "m/s"<< endl;
	     cout << "ID:" << r2.robotID
	     <<"| TYPE:" << r2.robotType
	     <<"| BATTERY:" << r2.battery<< "%"
	     <<"| SPEED:" << r2.speed<< "m/s"<< endl;
	     cout << "ID:" << r3.robotID
	     <<"| TYPE:" << r3.robotType
	     <<"| BATTERY:" << r3.battery<< "%"
	     <<"| SPEED:" << r3.speed<< "m/s"<< endl;
	     return 0;
}
