#include <iostream>
#include<string>

using namespace std;

void printAllWordsFromAAAToZZZ() {

	for (int i = 65; i <= 90; i++)
	{
	
		for (int j = 65; j <= 90; j++) {
			
			for (int y = 65; y <= 90; y++)
			{
				cout << char(i)<< char(j)<< char(y) << endl;
			}
			

		}
		
	}



}





int main()
{
	printAllWordsFromAAAToZZZ();
}

