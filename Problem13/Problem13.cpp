#include <iostream>
#include<string>

using namespace std;


int readNumber() {
    int num;
    cout << "Enter Your Number ?\n";
    cin >> num;
    cout << endl;
    return num;
}


void invertedPatternInOrder(int num) {

  /*  for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }*/


    int j = 1;

    while (num >= j) {

        for (int i = 1; i <= j; i++)
        {
            cout << j;
        }
        j++;
        cout << endl;
    }

}


int main()
{
    invertedPatternInOrder(readNumber());
}

