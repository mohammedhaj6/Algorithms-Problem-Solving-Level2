#include <iostream>
#include<string>
#include<cmath>
#include <ctime>

using namespace std;


int randomNumber(int from, int to) {
	int num = rand() % (to - from + 1) + from;
	return num;
}

short readHowManyQuestions() {
	short numberOfQuestions;

	do {
		cout << "How Many Questions Do You Want To Answer (1 - 100)? ";
		cin >> numberOfQuestions;

	} while (numberOfQuestions < 1 || numberOfQuestions > 100);

	return numberOfQuestions;
}

short readQustionsLevel() {
	short levelOfQuestions;

	do {
		cout << "\nEnter Questions Level [1] Easy, [2] Med, [3] Hard, [4] Mix ? ";
		cin >> levelOfQuestions;

	} while (levelOfQuestions < 1 || levelOfQuestions > 4);

	return levelOfQuestions;
}


short readOperationType() {
	short operationType;

	do {
		cout << "\nEnter Operation Type [1] Add, [2] Sub, [3] Mul, [4] Div, [5] Mix ? ";
		cin >> operationType;

	} while (operationType < 1 || operationType > 5);

	return operationType;
}

void getLevelQuestions(short &num1,short &num2 , short questionsLevelInput) {


	if (questionsLevelInput == 4)
		questionsLevelInput = randomNumber(1, 3);
	
		
	
	if (questionsLevelInput == 1) {
		num1 = randomNumber(1,10);
		num2 = randomNumber(1, 10);
	}
	else if ((questionsLevelInput == 2)) {
		num1 = randomNumber(10, 50);
		num2 = randomNumber(10, 50);
	}
	else if ((questionsLevelInput == 3)) {
		num1 = randomNumber(50, 100);
		num2 = randomNumber(50, 100);
	}
	

}

char getOperationType(short operationTypeInput) {

	if (operationTypeInput == 5)
		operationTypeInput = randomNumber(1, 4);

	switch (operationTypeInput) {
	case 1: return '+';
	case 2: return '-';
	case 3: return '*';
	case 4: return '/';
	default: return '?';
	}
}

short getAnswerFromUser() {
	short answer;
	cin >> answer;
	return answer;
}

short getCorrectAnswer(short num1, short num2, char op) {

	switch (op) {
	case '+': return num1 + num2;
	case '-': return num1 - num2;
	case '*': return num1 * num2;
	case '/': return (num2 != 0) ? num1 / num2 : 0;
	default: return 0;
	}
}


void makeQuestions(short& num1, short& num2 , char operationTypeInput , short &userAnswer) {


	cout << num1 << " " << operationTypeInput << " " << num2 << " = ";
	userAnswer =  getAnswerFromUser();

}

void checkIfCorrectAnswer(short userAnswer,short correctAnswer , short &rightAnswer , short &wrongAnswer) {

	if (userAnswer == correctAnswer) {
		system("color 2f");
		cout << "\a";
		cout << "\nRight Answer :-)"<<endl;
		rightAnswer++;

	}
	else {
		system("color 40");
		cout << "\a\a";
		cout << "\nWrong Answer :-(" << endl;
		cout << "The Right Answer Is:" << correctAnswer<<endl;
		wrongAnswer++;
	}

}


string checkIfPassOrFail(short rightAnswer , short wrongAnswer) {
	if (rightAnswer>= wrongAnswer) {
		system("color 2f");
		return"PASS :-)";
	}
	else {
		system("color 40");
		return"FAIL :-(";
	}
}

string getNameOfQuestionsLevel(short QuestionsLevel) {
	if (QuestionsLevel == 4) return "Mix";
	
	switch (QuestionsLevel) {
	case 1:
		return"Easy";
	case 2:
		return"Med";
	case 3:
		return"Hard";
	default:
		return"?";
	}

	
}
string getNameOfOperationType(short operationType) {
	if (operationType == 5) return "Mix";
	

	switch (operationType) {
	case 1:
		return"Add";
	case 2:
		return"Sub";
	case 3:
		return"Mul";
	case 4:
		return"Div";
	default:
		return"?";
	}


}

void printFinalResult(string passOrFail , short numberOfQuestions,string QustionsLevel , string operationType , short rightAnswer,short wrongAnswer) {
	cout << "\n-------------------------------\n";
	cout << "\nFinal Result Is " << passOrFail<<endl;
	cout << "\n-------------------------------\n";
	cout << "Number Of Questions : " << numberOfQuestions << endl;
	cout << "Questions Level : " << QustionsLevel << endl;
	cout << "Operation Type : " << operationType << endl;
	cout << "Number Of Right Answers : " << rightAnswer << endl;
	cout << "Number Of Wrong Answers : " << wrongAnswer << endl;
	cout << "\n-------------------------------\n";


}

void startGame() {


	char answer = ' ';
	
	

	do
	{
		system("cls");
		system("color 0F");

		short counter = 1;
		short numberOfQuestions = readHowManyQuestions();
		short qustionsLevelInput = readQustionsLevel();
		short operationTypeInput = readOperationType();
		string qustionsLevelName = getNameOfQuestionsLevel(qustionsLevelInput);
		string operationTypeName = getNameOfOperationType(operationTypeInput);
		short rightAnswer = 0, wrongAnswer = 0;
		do
		{


			short num1, num2, userAnswer;
			cout << "\n\nQuestion [" << counter << "/" << numberOfQuestions << "]\n\n";
			getLevelQuestions(num1, num2, qustionsLevelInput);
			char op = getOperationType(operationTypeInput);
			makeQuestions(num1, num2, op, userAnswer);

			short correctAnswer = getCorrectAnswer(num1, num2, op);
			checkIfCorrectAnswer(userAnswer, correctAnswer, rightAnswer, wrongAnswer);



			counter++;

		} while (counter <= numberOfQuestions);
		string passOrFail = checkIfPassOrFail(rightAnswer, wrongAnswer);
		printFinalResult(passOrFail, numberOfQuestions, qustionsLevelName, operationTypeName, rightAnswer, wrongAnswer);

		cout << "\nDo You Want To Play Again? Y/N ? ";
		cin >> answer;

	} while (answer == 'Y' || answer == 'y');



}


int main()
{
	srand(time(0));
	startGame();

}

