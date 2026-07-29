#include<iostream>
using namespace std;
struct car
{
	string model;
	string color;
	float price;
};
int main()
{
	car cars[5];
	cout << "Enter data of 5 cars:\n";
	for(int i=0;i<5;i++)
{
	cout << "\nCar " << i+1 << endl;
        cout << "Model: ";
        cin >> cars[i].model;
        cout << "Color: ";
        cin >> cars[i].color;
        cout << "Price: ";
        cin >> cars[i].price;
	}	
	int choice;
    cin >> choice;
    if(choice==0)
    {
   	int maxIndex=0;
   	for(int i=1; i<5; i++)          
  if(cars[i].price > cars[maxIndex].price)              
   maxIndex = i;     
   cout << "\n--- Most Expensive Car ---\n";      
 cout << "Model: " << cars[maxIndex].model << endl;    
    cout << "Color: " << cars[maxIndex].color << endl;      
  cout << "Price: " << cars[maxIndex].price << endl;   
   }   
   else if(choice == 2)  
	 {        
  cout << "\n--- All Cars ---\n";     
 for(int i=0; i<5; i++)   
	{      
  cout << "\nCar " << i+1 << endl;        
  cout << "Model: " << cars[i].model << endl;    
  cout << "Color: " << cars[i].color << endl;     
  cout << "Price: " << cars[i].price << endl;  
 }  
 }  
 return 0;
 }


