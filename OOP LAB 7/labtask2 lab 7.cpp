#include<iostream>
#include<string>
using namespace std;
class sensor
{
	public:
	string sensorID;
	string sensorType;
	float reading;
	bool isactive;
};
int main()
{
	sensor s1,s2,s3;
	s1.sensorID="sensor-001";
	s1.sensorType="ultrasonic";
	s1.reading=25.4;
	s1.isactive="true";
	s2.sensorID="sensor-002";
	s2.sensorType="infrared";
	s2.reading=10.01;
	s2.isactive="false";
	s3.sensorID="sensor-003";
	s3.sensorType="camera";
	s3.reading=0;
	s3.isactive="true";
	cout <<"-----------sensors status report------------"<<endl;
	cout << boolalpha;
	cout << "ID: " << s1.sensorID
    << " | Type: " << s1.sensorType
    << " | Reading: " << s1.reading
    << " | Active: " << s1.isactive << endl;
	cout << "ID: " << s2.sensorID
    << " | Type: " << s2.sensorType
    << " | Reading: " << s2.reading
    << " | Active: " << s2.isactive << endl;
    cout << "ID: " << s3.sensorID
    << " | Type: " << s3.sensorType
    << " | Reading: " << s3.reading
    << " | Active: " << s3.isactive << endl;
    return 0;


	
	
}



