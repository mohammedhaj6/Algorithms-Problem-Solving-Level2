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

void fillTheArrayWithRandomNumber(int arr[], int length) {

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



void SearchNumber(int arr[],int length) {
    int num;
    cout << "\nPlease Enter A Number To Search For? \n";
    cin >> num;
    for (int i = 0; i < length; i++)
    {
        if (num == arr[i]) {
            cout << "\nNumber You Are Looking For Is :" << num << endl;
            cout << "\nThe Number Found At Position :" << i << endl;
            cout << "\nThe Number Found Its Order :" << i + 1 << endl;
        }
        else {
            "\nThe Number Is Not Found !\n";
        }
    }

}

int main()
{
    srand(time(0));
    int length = readNumber();
    int myArray[100];
    fillTheArrayWithRandomNumber(myArray, length);
    printArray(myArray, length);
    SearchNumber(myArray, length);
}

