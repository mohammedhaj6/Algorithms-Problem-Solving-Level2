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

void PrintInvertedLetterPattern(int num) {
    int counter = 64+num;
        while (num > 0) {

            for (int i = 65; i <= counter; i++)
            {
                cout << (char)counter;
            }
            num--;
            counter--;
          
            cout << endl;
        }


    }


int main()
{
    PrintInvertedLetterPattern(readNumber());
    }

