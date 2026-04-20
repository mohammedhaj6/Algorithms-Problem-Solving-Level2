#include <iostream>
using namespace std;

int readLengthOfArray() {
    int length;
    cout << "How Many Elements You Need To Store In Array?\n";
    cin >> length;
    return length;
}

int readArrayElement(int arr[], int length) {
   
    for (int i = 1; i <= length; i++) {
        cout << "Enter Array Element["<<i<<"] : ";
        cin >> arr[i];
        cout << endl;
    }
    return arr[100];
}

void cheakTheNumberFrequancyInsideArray(int arr[],int length) {
    int num;
    cout << "Enter The Number You Want To Cheak : \n";
    cin >> num;

    int counter = 0;
    for (int i = 1; i <= length; i++) {
        if (num == arr[i]) {
            counter++;
           }
    }
    cout << num << " Is Repeated " << counter << " Time(s)\n";

}

void printArrayElements(int arr[],int length) {

    cout << "Array Elements: ";
    for (int i = 1; i <= length; i++) {
        cout << arr[i] << " ";
    }
}



int main() {

    int length = readLengthOfArray();
    int myArray[100];
    readArrayElement(myArray,length);
    cheakTheNumberFrequancyInsideArray(myArray, length);
    printArrayElements(myArray,length);
     


    

}