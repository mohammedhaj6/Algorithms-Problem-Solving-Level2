#include <iostream>
#include<string>

using namespace std;


void buildHeader() {
    cout << "\t\t\tMultiplication Table From 1 To 10\n\n";

    cout << "\t";
    for (int i = 1; i <= 10; i++) {
        cout << i << "\t";
    }

    cout << endl;
}

void buildSeparator() {
    cout << "-----------------------------------------------------------------------------------\n";
}

void buildMultiplicationTable() {

    for (int i = 1; i <= 10; i++) {

        cout <<" " << i << "\t| ";

       for (int j = 1; j <= 10; j++) {
            cout << i * j << "\t";
        }

        cout << endl;
    }
}

int main()
{
    buildHeader();
    buildSeparator();
    buildMultiplicationTable();
	
}

