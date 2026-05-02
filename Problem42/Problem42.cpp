#include <iostream>
#include<string>
#include<cmath>
#include <ctime>

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

void fillTheArrayWithRandomNumber(int arr[100], int& length) {

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

void countOddNums(int arr[],int length) {
    int counter = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] % 2 != 0) counter++;

        

        
    }
    cout << "\nOdd Numbers Count Is : " << counter << endl;

}

int main()
{
    srand(time(0));
    int length = readNumber();
    int myArray[100];
    fillTheArrayWithRandomNumber(myArray, length);
    printArray(myArray, length);
    countOddNums(myArray, length);
}

