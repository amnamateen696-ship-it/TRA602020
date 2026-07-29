#include<iostream>
using namespace std;
struct complex
{
	float real;
	float imaginary;
};
complex addition(complex c1,complex c2)
{
	complex result;
	result.real = c1.real+ c2.real;
	result.imaginary = c1.imaginary + c2.imaginary;
	return result;
}
complex subtract(complex c1,complex c2)
{
	complex result;
	result.real = c1.real - c2.real;
	result.imaginary = c1.imaginary - c2.imaginary;
	return result;
}
complex multiplication(complex c1,complex c2)
{
	complex result;
	result.real = (c1.real * c2.real) -(c1.imaginary * c2.imaginary);
	result.imaginary = (c1.imaginary * c2.imaginary) + (c1.imaginary * c2.imaginary);
	return result;
}
int main()
{
	complex num1,num2,sum,diff,product;
	cout << "enter first complex number (real imaginary) : ";
	cin >> num1.real >> num2.imaginary;
	cout<<  "enter second complex number (real imaginary) : ";
	cin >> num1.real >> num2.imaginary;
	sum =addition(num1,num2);
	diff = subtract(num1,num2);
	product = multiplication(num1,num2);
	cout << "\nADDITION : " << sum.real << "+" << sum.imaginary << "i" << endl;
	cout << "\nSUBTRACTION :" << diff.real << "-" << diff.imaginary << "i" << endl;
	cout << "\nMULTIPLICATION : " << product.real << "*" << product.imaginary << "i" << endl;
	return 0;
}


