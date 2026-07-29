#include<iostream>
using namespace std;
int countvowels(char* str)
{
	int count =0;
	while(*str != '\0')
	{
		char ch =*str;
		 if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
			 {
            count++;
        }
        str++;
    }
    return count;
}
int main()
{
	char str[100];
	cout << "enter a string:";
	cin.getline(str, 100);
    int result = countvowels(str);
    cout << "Number of vowels: " << result << endl;
    return 0;
}
