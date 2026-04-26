#include <iostream>
#include<string>
#include<cmath>

using namespace std;


void printArray(int arr[100],int length) {

    cout << "\nArray Elements : ";

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void fillCopyArray(int newArray[100], int arr[100], int length, int& length2) {
    length2 = 0;

    if (length == 0) return;

    newArray[0] = arr[0];
    length2 = 1;

    for (int i = 1; i < length; i++) {
        if (arr[i] != newArray[length2 - 1]) {
            newArray[length2] = arr[i];
            length2++;
        }
    }
}

void printCopyArray(int newArray[100], int length2) {
    cout << "\nCopy Array Elements : ";

    for (int i = 0; i < length2; i++)
    {
        cout << newArray[i] << " ";
    }
    cout << endl;
}



int main()
{
    srand(time(0));
    int arr[100] = { 10,10,10,50,50,70,70,70,70,90 };
    int length = 10;
    int length2 = 0;
    printArray(arr,length);
    int newArray[100];
    fillCopyArray(newArray, arr, length, length2);
    printCopyArray(newArray, length2);

}

