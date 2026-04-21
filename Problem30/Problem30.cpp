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

void sum2Array(int arr[],int arr2[],int arr3[], int length) {
    
  
    for (int i = 0; i < length; i++)
    {
        arr3[i] = arr[i] + arr2[i];
      
    }
    

}
void printSum2Array(int arr3[],int length) {
    cout << "\nSum Of Array1 And Array2 : ";
    for (int i = 0; i < length; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;
}



int main()
{
    srand(time(0));
    int length = readNumber();
  
    int myArray[100], myArray2[100],myArray3[100];
    fillTheArrayWithRandomNumber(myArray, length);
    fillTheArrayWithRandomNumber(myArray2, length);
    printArray(myArray, length);
    printArray(myArray2, length);
    sum2Array(myArray, myArray2, myArray3, length);
    printSum2Array(myArray3, length);
}

