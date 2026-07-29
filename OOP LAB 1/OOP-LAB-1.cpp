#include<iostream>
using namespace std;
int main()
{
    int arr[5]={2,4,6,8,10};
    int* Ptr;
    Ptr=&arr[2];
    cout<<"Value :"<<*Ptr<<endl;
    cout<<"Address :"<<Ptr<<endl;

    return 0;

}

// LAB TASK 2
#include<iostream>
using namespace std;
int main()
{
    int arr[6]={5,10,15,20,25,30,};
    int *Ptr;
    Ptr=arr;
    for(int i=0;i<6;i++)
    {
        cout<<*(Ptr)<<endl;
            Ptr++;


    }

    return 0;

}

//LAB TASK 3
#include <iostream>
using namespace std;
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = arr;
    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << *ptr
             << "  Address: " << ptr << endl;
        ptr++;
}
return 0; }

//LAB TASK 03
#include <iostream>
using namespace std;
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = arr;
    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << *ptr
             << "  Address: " << ptr << endl;
        ptr++;
}
return 0; }

//LAB TASK 04
#include<iostream>
using namespace std;
int main()
{
     int a,b;
     cout<<"Enter the value of A:"<<endl;
     cin>>a;
     cout<<"Enter the value of B:"<<endl;
     cin>>b;
       int *PtrA;
       PtrA=&a;
       int *PtrB;
       PtrB=&b;
       cout<<"The value of A is:"<<*PtrA<<endl;
       cout<<"The value of B is:"<<*PtrB<<endl;


        return 0;
}

//TASK 05
#include <iostream>
using namespace std;
int main() {
    float arr[10];
    float* ptr = arr;
    cout << "Enter 10 floating-point values:\n";
    for (int i = 0; i < 10; i++)
        cin >> *(ptr + i);
    cout << "\nValues in reverse order:\n";
    ptr = arr + 9;   // Jump to last element
    for (int i = 0; i < 10; i++) {
        cout << *ptr << " ";
ptr--; }
cout << endl;
return 0; }

//LAB TASK 06
#include <iostream>
using namespace std;
int main() {
    char str[256];
    cout << "Enter a string: ";
    cin.getline(str, 256);
    char* ptr = str;
    int length = 0;
    while (*ptr != '\0') {  // Walk until null terminator
        length++;
ptr++; }
    cout << "Length of string: " << length << endl;
return 0; }

//LAB TASK 07
#include <iostream>
using namespace std;
int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int n;
    cout << "Enter number of elements (minimum 8): ";
    cin >> n;
    if (n < 8) n = 8;   // Enforce minimum
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int* maxPtr = arr;   // Assume first element is max
    for (int i = 1; i < n; i++) {
        if (*(arr + i) > *maxPtr)
            maxPtr = arr + i;
}
    cout << "\nMaximum value: " << *maxPtr << endl;
    cout << "Address of max: " << maxPtr << endl;
    return 0;
}
// Home task 01
#include <iostream>
using namespace std;
int main() {
    int a, b, c, d, e;
    int* ptrs[5] = {&a, &b, &c, &d, &e};
    cout << "Enter values for a, b, c, d, e:\n";
    cin >> a >> b >> c >> d >> e;
    cout << "\n-----------------------------------\n";
    cout << "Pointer  |  Value  |  Address\n";
    cout << "-----------------------------------\n";
    for (int i = 0; i < 5; i++) {
cout<<"ptrs["<<i<<"] | " << *ptrs[i] << " | " << ptrs[i] << endl;
}
return 0; }

// Home task 02
#include <iostream>
using namespace std;
int main() {
    int L;
    cout << "Enter string length L: ";
    cin >> L;
    cin.ignore();
    char str[256];
    cout << "Enter a string of length " << L << ": ";
    cin.getline(str, 256);
    // Walk to actual end
    char* ptr = str;
    int len = 0;
    while (*ptr != '\0') { len++; ptr++; }
    ptr--;   // Step back onto last valid character
    cout << "Reversed string: ";
    for (int i = 0; i < len; i++) {
cout << *ptr;
ptr--; }
cout << endl;
return 0; }
