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


void invertedPattern(int num) {
    while (num > 0) {
       
        for (int i = 1; i <= num; i++)
        {
            cout << num;
        }
        num--;
        cout << endl;
    }
   

}

int main()
{
    invertedPattern(readNumber());

}

