#include<iostream>
using namespace std;
struct PetrolPump 
{
char name[20];
float pricePerLiter;
int availableLiters;
};
void input (PetrolPump *p)
{
	cout << "ENTER PETROLPUMP NAME : ";
	cin >> p->name;
	cout << "Enter Price per Liter: ";
    cin >> p->pricePerLiter;
    cout << "Enter Available Liters: ";
    cin >> p->availableLiters;
}
void display(PetrolPump *p)
{
	cout << "\n     petrol pump details     " << endl;
	cout << "NAME " << p->name << endl;
	cout << "Price per Liter: " << p->pricePerLiter << endl;
    cout << "Available Liters: " << p->availableLiters << endl;
}
int main() 
{
    PetrolPump p;
    input(&p);     
    display(&p); 
    return 0;
}
