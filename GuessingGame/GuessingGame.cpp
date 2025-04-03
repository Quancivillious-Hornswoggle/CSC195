#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int generateRandomNumber() {
	return rand() % 10 + 1;
}

int printQuestion() {
	int numberGuessed;
	cout << "Guess a number." << endl;
	cin >> numberGuessed;
	return numberGuessed;
}

bool checkGuess(int randomNumberToGuess, int numberGuessed) {
	if (numberGuessed == randomNumberToGuess) {
		cout << "You guessed it!" << endl;
		return true;
	}
	else if (numberGuessed < randomNumberToGuess){
		cout << "Your guess is lower." << endl;
	}
	else {
		cout << "Your guess is higher." << endl;
	}
	return false;
}

bool promptPlayAgain() {
	char playAgain;
	cout << "Do you want to play again? (y/n)" << endl;
	cin >> playAgain;
	if (playAgain == 'y' || playAgain == 'Y') {
		return true;
	}
	else {
		return false;
	}
}

int main()
{
	// Initialize the random generator seed
	srand(time(0));

	int randomNumberToGuess = generateRandomNumber();
	runAgain:
	// Run guessing loop with 3 tries
	for (int i = 0; i < 3; i++)
	{
		int numberGuessed = printQuestion();
		if (checkGuess(randomNumberToGuess, numberGuessed))
		{
			break;
		}
		else if (i == 2) {
			cout << "You lose! The number was " << randomNumberToGuess << "." << endl;
		}
		else {
			cout << "Try again." << endl;
		}
	}

	if (promptPlayAgain()) {
		randomNumberToGuess = generateRandomNumber();
		goto runAgain;
	}
	else {
		cout << "Thanks for playing!" << endl;
	}

	return 0;
}
