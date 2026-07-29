#include<iostream>
using namespace std;
int findmax(int *ptr,int size)
{
	for (int i = 1; i < size; i++)  
	 {
        if (*(ptr + i) > max) 
		{
            max = *(ptr + i);
        }
    }

    return max;
}
int main()
{
	int arr[5];
	cout << "enter 5 elements:\n";
	for(int i=0;i<5;i++)
	{
		cin >> arr[i];
	}
	int maximum=findmax(arr,5);
	cout << "maximum value is:" << maximum << endl;
	return 0;
}
