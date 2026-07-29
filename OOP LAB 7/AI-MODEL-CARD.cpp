#include<iostream>
#include<string>
using namespace std;
class AImodel
{
	public:
    string modelName;
    string version;
    string algorithm;
    float accuracy;
    bool isDeployed;
};
int main()
{
	AImodel m1,m2,m3;
	m1.modelName="ResNet-50";
	m1.version="v2.1";
	m1.algorithm="CNN";
	m1.accuracy=0.95;
	m1.isDeployed=true;
	m2.modelName="YOLOv8";
	m2.version="v8.0";
	m2.algorithm="CNN";
	m2.accuracy=0.97;
	m2.isDeployed=true;
	m3.modelName="SpamDetector";
	m3.version="v9.0";
	m3.algorithm="SVM";
	m3.accuracy=0.89;
	m3.isDeployed=false;
	cout <<boolalpha;
	cout <<"---------------AI MODEL CARD--------------"<< endl;
	cout << "NAME  : "<<m1.modelName<<endl;;
	cout << "VERSION  : "<<m1.version<<endl;;
	cout << "ALGORITHM  :"<<m1.algorithm<<endl;;
	cout << "ACCURACY  :"<<m1.accuracy<<endl;;
	cout << "DEPLOYED  :"<<m1.isDeployed<<endl;;
	cout <<"---------------AI MODEL CARD--------------"<< endl;
	cout << "NAME  : "<<m2.modelName <<endl;
	cout << "VERSION  : "<<m2.version<<endl;
	cout << "ALGORITHM  :"<<m2.algorithm <<endl;
	cout << "ACCURACY  :"<<m2.accuracy << endl;
	cout << "DEPLOYED  :"<<m2.isDeployed <<endl;
	cout <<"---------------AI MODEL CARD--------------"<< endl;
	cout << "NAME  : "<<m3.modelName<<endl;;
	cout << "VERSION  : "<<m3.version<<endl;;
	cout << "ALGORITHM  :"<<m3.algorithm<<endl;;
	cout << "ACCURACY  :"<<m3.accuracy<<endl;;
	cout << "DEPLOYED  :"<<m3.isDeployed<<endl;;
	
	
	
}
