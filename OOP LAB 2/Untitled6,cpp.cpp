#include<iostream>
using namespace std;
void reversearray(int* ptr,int size)
{
	int* start=ptr;
	int* end=ptr + size-1;
	while (start < end)
	{
		int temp=*start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
int main()
{
	int arr[5];
	cout << "enter 5 elements ";
	for(int i=0;i<5;i++)
	{
		cin >> arr[i];
	}
	reversearray(arr,5);
    cout << "Reversed array:\n";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
