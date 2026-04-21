#include <iostream>
#include<string>
#include<cmath>

using namespace std;


int randomNumber(int from, int to) {
    int num = rand() % (to - from + 1) + from;
    return num;
}

void  Swap(int &A,int &B) {

    int temp;
    temp = B;
    B = A;
    A = temp;
  
}

int readNumber() {
    int length;
    cout << "Enter The Length You Need Store in The  Array?\n";
    cin >> length;
    return length;
}

void fillTheArrayWithRandomNumber(int arr[], int length) {

    for (int i = 0; i <= length - 1; i++) {
        arr[i] = i + 1;
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

void shuffleElementInArray(int arr[],int length) {

    for (int i = 0; i < length; i++)
    {
        Swap(arr[randomNumber(1, length)-1], arr[randomNumber(1, length)-1]);
    }
    cout << endl;

}

void printShuffleArray(int arr[],int length) {
    cout << "\nArray Elements After Shuffle : ";

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}



int main()
{
    srand(time(0));
    int length = readNumber();
    int Array[100];
    fillTheArrayWithRandomNumber(Array, length);
    printArray(Array,length);
    shuffleElementInArray(Array, length);
    printShuffleArray(Array, length);
   
}

