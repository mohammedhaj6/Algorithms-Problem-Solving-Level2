#include <iostream>
#include<string>
#include<cmath>
#include <ctime>

using namespace std;

int randomNumber(int from, int to) {
    int num = rand() % (to - from + 1) + from;
    return num;
}
void AddArrayElement(int num, int arr[100], int& length)
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

void fillTheArrayWithRandomNumber(int arr[100], int& length) {

    for (int i = 0; i <= length - 1; i++) {
        arr[i] = randomNumber(1, 100);
    }
}

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}
void printArray(int arr[100], int length) {

    cout << "\nArray Elements : ";

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void fillPrimeNumbersInCopyArray(int newArray[100], int arr[100], int length, int& length2) {


    for (int i = 0; i < length; i++)
    {

        if (isPrime(arr[i]) == true) {
            AddArrayElement(arr[i], newArray, length2);
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
    int length = readNumber();
    int length2 = 0;
    int myArray[100];
    fillTheArrayWithRandomNumber(myArray, length);
    printArray(myArray, length);
    int newArray[100];
    fillPrimeNumbersInCopyArray(newArray, myArray, length, length2);
    printCopyArray(newArray, length2);

}

