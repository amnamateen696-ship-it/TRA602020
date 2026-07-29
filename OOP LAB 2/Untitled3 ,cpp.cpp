#include <iostream>
using namespace std;
int findMax(int* ptr, int size) 
 {
    int max = *ptr;

    for (int i = 1; i < size; i++) 
	{
        if (*(ptr + i) > max)
	 {
            max = *(ptr + i);
        }
    }

    return max;
}

int main() {
    int arr[5];

    cout << "Enter 5 elements:\n";
    for (int i = 0; i < 5; i++)
	 {
        cin >> arr[i];
    }

    int maximum = findMax(arr, 5);

    cout << "Maximum value is: " << maximum << endl;

    return 0;
}
