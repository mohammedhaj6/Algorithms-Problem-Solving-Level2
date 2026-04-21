#include <iostream>
#include<string>
#include<cmath>

using namespace std;

int randomNumber(int from, int to) {
    int num = rand() % (to - from + 1) + from;
    return num;
}

int readNumber() {
    int length;
    cout << "Enter The Length You Need Store in The  Array?\n";
    cin >> length;
    return length;
}

void fillTheArrayWithRandomNumber(int arr[], int &length) {

    for (int i = 0; i <= length - 1; i++) {
        arr[i] = randomNumber(1, 100);
    }
}

void printArray(int arr[], int length) {

    cout << "\nArray Elements : ";

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void fillCopyArray(int newArray[100], int arr[100], int &length) {


    for (int i = 0; i < length; i++)
    {
        // newArray[0] = arr[10-1-0] >> newArray[0] = arr[9]
        // newArray[1] = arr[10-1-1] >> newArray[1] = arr[8]
        newArray[i] = arr[length-1-i];
    }

}

void printCopyArray(int newArray[100], int length) {
    cout << "\nCopy Array Elements In Reversed Order : ";

    for (int i = 0; i < length; i++)
    {
       
        cout << newArray[i] << " ";
    }
    cout << endl;
}

int main()
{
    srand(time(0));
    int length = readNumber();
    int myArray[100];
    fillTheArrayWithRandomNumber(myArray, length);
    printArray(myArray, length);
    int newArray[100];
    fillCopyArray(newArray, myArray, length);
    printCopyArray(newArray, length);
}

