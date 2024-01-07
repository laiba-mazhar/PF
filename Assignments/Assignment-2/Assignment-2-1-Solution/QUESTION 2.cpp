#include <iostream>
#include <ctime>
#include <random>
using namespace std;

int main()
{
	int num;
	
	constexpr int MIN = 1;
	constexpr int MAX = 100;
	constexpr int RAND_NUMS_TO_GENERATE = 10;
	srand(time(nullptr));
	num = rand() % MAX;
	
	if(num<0)
		num=num*(-1);
	else if(num==0)
		num++;
	
	int guess;
	
	cout << "This is a game of Hi-Lo, you have to guess the randomly assigned number (between 1 and 100) in five tries.\n";
	
	int count=1;

// 1
	cout << "\n\nGuess number " << count << ": ";
	cin >> guess;
	if(guess==num)
	{
		cout << "You won, you have guessed the number correctly!  " << num;
		return 0;
	}
	else if(guess>0 && guess<101)
	{
		if(guess>num)
			cout << "You guessed way too high!";
		else
			cout << "You guessed way too low!";
	}
	else
	{
		cout << "Out of range!";
		return 0;
	}
	count++;

// 2
	cout << "\n\nGuess number " << count << ": ";
	cin >> guess;
	if(guess==num)
	{
		cout << "You won, you have guessed the number correctly!  " << num;
		return 0;
	}
	else if(guess>0 && guess<101)
	{
		if(guess>num)
			cout << "You guessed way too high!";
		else
			cout << "You guessed way too low!";
	}
	else
	{
		cout << "Out of range!";
		return 0;
	}
	count++;

// 3
	cout << "\n\nGuess number " << count << ": ";
	cin >> guess;
	if(guess==num)
	{
		cout << "You won, you have guessed the number correctly!  " << num;
		return 0;
	}
	else if(guess>0 && guess<101)
	{
		if(guess>num)
			cout << "You guessed way too high!";
		else
			cout << "You guessed way too low!";
	}
	else
	{
		cout << "Out of range!";
		return 0;
	}
	count++;	

// 4
	cout << "\n\nGuess number " << count << ": ";
	cin >> guess;
	if(guess==num)
	{
		cout << "You won, you have guessed the number correctly!  " << num;
		return 0;
	}
	else if(guess>0 && guess<101)
	{
		if(guess>num)
			cout << "You guessed way too high!";
		else
			cout << "You guessed way too low!";
	}
	else
	{
		cout << "Out of range!";
		return 0;
	}
	count++;
	
// 5
	cout << "\n\nGuess number " << count << ": ";
	cin >> guess;
	if(guess==num)
	{
		cout << "You won, you have guessed the number correctly!  " << num;
		return 0;
	}
	else if(guess>0 && guess<101)
	{
		if(guess>num)
			cout << "You guessed way too high!";
		else
			cout << "You guessed way too low!";
	}
	else
	{
		cout << "Out of range!";
		return 0;
	}
	count++;

	cout << "\n\nYou lose! The correct guess was: " << num << endl << endl;
		
	return 0;
}

