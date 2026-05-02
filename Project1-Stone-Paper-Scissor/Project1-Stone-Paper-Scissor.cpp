#include <iostream>
#include<string>
#include<cmath>
#include <ctime>

using namespace std;



int randomNumber(int from, int to) {
	int num = rand() % (to - from + 1) + from;
	return num;
}

short readHowManyRounds() {
	short roundsGame;

	do {
		cout << "How Many Rounds 1 To 10?\n";
		cin >> roundsGame;
	} while (roundsGame < 1 || roundsGame > 10);

	return roundsGame;
}

short getComputerChoice() {
	short computerChoice = randomNumber(1,3);
	return computerChoice;

}

short readUserChoiceType() {
	short userChoice;
	do {
		cout << "Your Choice : [1]:Stone,[2]:Paper,[3]:Scissors ? :";
		cin >> userChoice;
	} while (userChoice < 1 || userChoice > 3);

	return userChoice;
}

void printResultForSingleRound(short counter,string userChoiceType , string computerChoiceType , string roundWinner) {
	cout << "\n____________Round[" << counter << "]____________\n\n";
	cout << "Player Choice :" << userChoiceType << endl;
	cout << "Computer Choice :" << computerChoiceType << endl;
	cout << "Round Winner   : [" << roundWinner << "]\n";
	cout << "------------------------------\n\n";

}

string getComputerChoiceType(short computerChoice ) {
	if (computerChoice==1) {
		return "Stone";
	}
	else if (computerChoice==2) {
		return "Paper";
	}
	else if (computerChoice ==3) {
		return "Scissors";
	}
	else
	{
		return "You Enter Not Valid Choice Type\n";
	}
}

string getUserChoiceType(short userChoice) {
	if (userChoice == 1) {
		return "Stone";
	}
	else if (userChoice == 2) {
		return "Paper";
	}
	else if (userChoice == 3) {
		return "Scissors";
	}
	else
	{
		return "You Enter Not Valid Choice Type\n";
	}
}

string getWinnerInRound(short computerChoice, short userChoice,
	short& playerWonTimes, short& computerWonTimes, short& drawTimes)
{
	if (computerChoice == userChoice) {
		drawTimes++;
		system("color 6F");
		cout << "\a";
		return "Draw";
	}

	if (
		(userChoice == 1 && computerChoice == 3) || // Stone beats Scissors
		(userChoice == 2 && computerChoice == 1) || // Paper beats Stone
		(userChoice == 3 && computerChoice == 2)    // Scissors beats Paper
		)
	{
		playerWonTimes++;
		system("color 2f");
		cout << "\a";
		return "Player";
	}
	else {
		computerWonTimes++;
		system("color 40");
		cout << "\a";
		return "Computer";
	}
}




string getFinalWinners(short playerWonTimes , short computerWonTimes , short drawTimes) {
	if (playerWonTimes == computerWonTimes) {
		system("color 6F");
		cout << "\a";
		return "Draw";

	}
	else if (playerWonTimes > computerWonTimes) {
		system("color 2f");
		cout << "\a";
		return "Player";
	}
	else if (computerWonTimes > playerWonTimes) {
		system("color 40");
		cout << "\a";
		return "Computer";
	}
	else
	{
		return "Error In Final Winner Function";
	}
}




void printGameOverScreen(short gameRounds , short playerWonTimes,short computerWonTimes,short drawTimes, string finalWinners) {

	cout << "\t\t\t----------------------------------------------------\n";
	cout << "\t\t\t\t\t+++ Game Over +++\n"; 
	cout << "\t\t\t----------------------------------------------------\n";

    cout << "\t\t\t___________________ [Game Results] __________________\n";
	cout << "\t\t\tGame Rounds: " << gameRounds<<endl;
	cout << "\t\t\tPlayer Won Times: " << playerWonTimes << endl;
	cout << "\t\t\tComputer Won Times: " << computerWonTimes << endl;
	cout << "\t\t\tDraw Times: " << drawTimes << endl;
	cout << "\t\t\tFinal Winner: " << finalWinners << endl;
	cout << "\t\t\t----------------------------------------------------\n";



}





void startGame() {
	char answer = ' ';

	do
	{
		system("cls");
		system("color 0F");
		short roundGame = readHowManyRounds();


		short counter = 1;
		short playerWonTimes = 0;
		short computerWonTimes = 0;
		short drawTimes = 0;
		string finalWinners;
		do
		{
			cout << "\n\nRound [" << counter << "] begins:\n";
			short userChoice = readUserChoiceType();
			short computerChoice = getComputerChoice();
			string computerChoiceType = getComputerChoiceType(computerChoice);
			string userChoiceType = getUserChoiceType(userChoice);
			string roundWinner = getWinnerInRound(computerChoice, userChoice, playerWonTimes, computerWonTimes, drawTimes);

			printResultForSingleRound(counter, userChoiceType, computerChoiceType, roundWinner);

			counter++;


		} while (counter <= roundGame);
		finalWinners = getFinalWinners(playerWonTimes, computerWonTimes, drawTimes);
		printGameOverScreen(roundGame, playerWonTimes, computerWonTimes, drawTimes, finalWinners);
	
		cout << "Do You Want To Play Again? Y/N? ";
		cin >> answer;
		
	} while (answer =='Y' || answer =='y');


}



int main()
{
	srand(time(0));
	startGame();
}

