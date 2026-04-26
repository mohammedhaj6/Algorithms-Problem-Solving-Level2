#include <iostream>
#include<string>
#include<cmath>
#include <ctime>

using namespace std;

int randomNumber(int from, int to) {
    int num = rand() % (to - from + 1) + from;
    return num;
}
void AddArrayElement(int num, int arr[100], int &length)
{
 
    arr[length] = num;
    length++;
}

int readNumber() {
    int length;
    cout << "Enter The Length You Need Store in The  Array?\n";
    cin >> length;
    return length;
}

void fillTheArrayWithRandomNumber(int arr[100], int &length) {

    for (int i = 0; i <= length - 1; i++) {
        arr[i] = randomNumber(1, 100);
    }
}

void printArray(int arr[100], int length) {

    cout << "\nArray Elements : ";

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void fillCopyArray(int newArray[100], int arr[100], int length,int length2) {


    for (int i = 0; i < length; i++)
    {
        AddArrayElement( arr[i], newArray, length2);
    }

}

void printCopyArray(int newArray[100], int length) {
    cout << "\nCopy Array Elements : ";

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
    int length2 = 0;
    int myArray[100];
    fillTheArrayWithRandomNumber(myArray, length);
    printArray(myArray, length);
    int newArray[100];
    fillCopyArray(newArray, myArray, length,length2);
    printCopyArray(newArray, length);

}

