#include <iostream>
#include<string>
#include<cmath>

using namespace std;

void printArray(int arr[],int length) {
	cout << "Array Elements: " << endl;
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


void reversedArray(int arr[],int newArray[],int length) {
	
	for (int i = 0; i < length; i++)
	{
		newArray[i] = arr[length - 1-i];
		
	}

}

bool isArrayPalindrome(int arr[], int newArray[], int length) {
	for (int i = 0; i < length; i++)
	{
		if (arr[i] != newArray[i]) {
			return false;
		}
	}
	return true;
}
void printResult(bool isPalindrome) {
	if (isPalindrome) cout << "Yes array is palindrome ";
	else cout << "No array is not palindrome ";

	
}


int main()
{
	int arr[6] = {10 ,20 ,30,30,20,10};
	int newArray[6];
	int length = 6;
	printArray(arr, length);
	
	reversedArray(arr,newArray,length);
	printArray(newArray, length);
	printResult(isArrayPalindrome(arr, newArray, length));
}

