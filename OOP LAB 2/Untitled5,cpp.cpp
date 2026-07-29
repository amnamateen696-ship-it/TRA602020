#include<iostream>
using namespace std;
void swapnumbers(int *a, int *b,int *c,int *d)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	
	temp=*c;
	*c=*d;
	*d=temp;
}
int main()
{
	int a,b,c,d;
	cout << "enter four numbers :";
	cin >> a >> b >> c >> d;
	swapnumbers(&a,&b,&c,&d);
	cout << "After swapping:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;
    return 0;
}
