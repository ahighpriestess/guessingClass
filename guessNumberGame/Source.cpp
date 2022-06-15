#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	long int randomizingNumbers, enterNumber, numberOfGuesses = 0;
	int levelNumber;
	bool winner = false;

	cout << "Enter level. Enter 1 for easy, 2 for medium, 3 for hard. " << endl;
	cout << endl;
	cin >> levelNumber;
	cout << endl;

	if (levelNumber == 3) {

		unsigned seed = time(0);
		srand(seed);
		randomizingNumbers = rand() % (999999999 + 1 - 100000000) + 100000000;

	}

	else if (levelNumber == 2) {

		unsigned seed = time(0);
		srand(seed);
		randomizingNumbers = rand() % (999999 + 1 - 100000) + 100000;


	}

	else if (levelNumber == 1) {

		unsigned seed = time(0);
		srand(seed);
		randomizingNumbers = rand() % (999 + 1 - 100) + 100;


	}

	else {
		cout << "ERROR 101." << endl;
		exit(0);
	}



	cout << "Welcome to the Guessing Number game! " << endl;
	cout << endl;
	cout << "Enter a 9 digit number or less: " << endl;
	cin >> enterNumber;

	while (winner != true)
	{
		if (enterNumber < randomizingNumbers) {
			cout << endl;
			cout << "Number is too low!" << endl;
			cout << "Please try again" << endl;
			cout << endl;
			cout << "Enter number again: " << endl;
			cout << endl;
			cin >> enterNumber;
			cout << endl;
			numberOfGuesses++;
		}

		else if (enterNumber > randomizingNumbers && enterNumber < 1000000000)
		{
			cout << endl;
			cout << "Number is too high!" << endl;
			cout << "Please try again" << endl;
			cout << endl;
			cout << "Enter number again: " << endl;
			cout << endl;
			cin >> enterNumber;
			cout << endl;
			numberOfGuesses++;
		}

		else if (enterNumber >= 1000000000) {
			cout << endl;
			cout << "ERROR!!! Exit program." << endl;
			exit(0);
		}


		else if (enterNumber = randomizingNumbers) {
			numberOfGuesses++;
			cout << endl;
			cout << "Congratulations! " << endl;
			cout << endl;
			cout << "It took you " << numberOfGuesses << " tries!" << endl;
			cout << endl;
			winner = true;

		}










	}


}