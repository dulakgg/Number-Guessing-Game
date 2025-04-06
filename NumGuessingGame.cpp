#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <cstdlib>
using namespace std;
int main()
{
	short difficulty, num = rand() % 101, guess, chances, attempts = 0;
    cout << "Welcome to the Number Guessing Game!" <<endl;
    cout << "I'm thinking of a number between 1 and 100." <<endl;
	cout << "You have 5 chances to guess the correct number." <<endl<<endl;
	cout << "Please select the difficulty level:" <<endl;
	cout << "1. Easy (10 chances)" <<endl;
	cout << "2. Medium (5 chances)" <<endl;
	cout << "3. Hard (3 chances)" <<endl<<endl;
	cout << "Enter your choice: ";
	cin >> difficulty;
	cout <<endl<<endl;
	switch (difficulty) {
		case 1:
			cout << "Great! You have selected the Easy difficulty level." <<endl;
			cout << "Let's start the game!" <<endl<<endl;
			chances = 10;
			break;
		case 2:
			cout << "Great! You have selected the Medium difficulty level." <<endl;
			cout << "Let's start the game!" <<endl<<endl;
			chances = 5;
			break;
		case 3:
			cout << "Great! You have selected the Hard difficulty level." <<endl;
			cout << "Let's start the game!" <<endl<<endl;
			chances = 3;
			break;
		default:
			cout << "This difficulty doesn't exist" <<endl;
			break;
	}
	while ( chances > 0 ) {
		cout << "Enter your guess: ";
		cin >> guess;
		if ( guess > num ) {
			cout << "Incorrect! The number is less than " << guess << "." <<endl<<endl;
			chances--;
			attempts++;
		}
		else if ( guess < num ) {
			cout << "Incorrect! The number is greater than " << guess << "." <<endl<<endl;
			chances--;
			attempts++;
		}
		else {
			cout << "Congratulations! You guessed the correct number in " << attempts << " attempts." <<endl;
			break;
		}
	}
	
	


    system("PAUSE");
    return 0;
}
