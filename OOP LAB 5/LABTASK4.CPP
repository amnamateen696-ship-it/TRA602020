#include<iostream>
using namespace std;
struct Bill
 {
    int accountNo;
    char ownerName[30];
    int unitsConsumed;
    float ratePerUnit;
    float totalBill;
};
void inputBill(Bill *b) 
{
    cout << "Enter Account Number: ";
    cin >> b->accountNo;
    cout << "Enter Owner Name: ";
    cin >> b->ownerName;
    cout << "Enter Units Consumed: ";
    cin >> b->unitsConsumed;
    cout << "Enter Rate per Unit: ";
    cin >> b->ratePerUnit;
}
void calculateBill(Bill *b) 
{
    b->totalBill = b->unitsConsumed * b->ratePerUnit;
    if(b->unitsConsumed > 300)
    {
        b->totalBill = b->totalBill + (b->totalBill * 0.15);
    }
}
void displayBill(Bill *b) 
{
    cout << "\n======= ELECTRICITY BILL =======\n";
    cout << "Account No : " << b->accountNo << endl;
    cout << "Owner Name : " << b->ownerName << endl;
    cout << "Units Used : " << b->unitsConsumed << endl;
    cout << "Rate/Unit  : " << b->ratePerUnit << endl;
    cout << "Total Bill : " << b->totalBill << endl;
    cout << "================================\n";
}
int main()
 {
    Bill b;
    cout << "=== LESCO Billing System ===" << endl;
    inputBill(&b);
    calculateBill(&b);
    displayBill(&b);
    return 0;
}
