#include <iostream>
using namespace std;

int readNumber() {
    int num;
    cout << "Please Enter A Number?\n";
    cin >> num;
    return num;
}

void AddArrayElement(int num, int arr[100], int& length)
{
 
    arr[length] = num;
    length++;
}

void printArrayAndLength(int arr[], int length) {
    cout << "Array Length: " << length << endl;

    cout << "Array Elements: ";
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}



void saveNumbersInAnArray(int arr[], int& length) {
    int addNum = 1;
    length = 0;

    do {
       
        AddArrayElement(readNumber(), arr, length);

        cout << "Do You Want To Add More Number? (1 = Yes / 0 = No)\n";
        cin >> addNum;

    } while (addNum == 1);
}

int main() {
    int arr[100];
    int length = 0;

    saveNumbersInAnArray(arr, length);
    printArrayAndLength(arr, length);

    
}