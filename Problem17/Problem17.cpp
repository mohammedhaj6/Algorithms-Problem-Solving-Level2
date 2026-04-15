#include <iostream>
#include<string>

using namespace std;


string readThreeLetterPasswordAllCapital() {
    string pass;
    cout << "Enter The Password >>> 'only three letter all capital !' \n";
    cin >> pass;
    return pass;
}

void guessPassword(string pass) {
	int counter = 0;
	string word = "";

	for (int i = 65; i <= 90; i++)
	{

		for (int j = 65; j <= 90; j++) {

			for (int y = 65; y <= 90; y++)
			{
				counter++;

				

				word = word + char(i);
				word = word + char(j);
				word = word + char(y);

				if (pass == word) {
					cout << "\nPassword is " << word <<endl;
					cout << "Found After [" << counter << "] Trial(s) \n";
				}


				word = "";
			
				
			}


		}

	}


}


int main()
{
	guessPassword(readThreeLetterPasswordAllCapital());
}
