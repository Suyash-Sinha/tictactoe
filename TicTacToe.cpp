#include "TicTacToe.h"
#include <iostream>
using namespace std;


TicTacToe::TicTacToe() {
	turn = 0;
	grid[0] = '1';
	grid[1] = '2';
	grid[2] = '3';
	grid[3] = '4';
	grid[4] = '5';
	grid[5] = '6';
	grid[6] = '7';
	grid[7] = '8';
	grid[8] = '9';

}
void TicTacToe::printBoard()
{

	std::cout << "\n " << grid[0] << " | " << grid[1] << " | " << grid[2] << std::endl;
	cout << "---+---+---\n";
	cout << " " << grid[3] << " | " << grid[4] << " | " << grid[5] << endl;
	cout << "---+---+---\n";
	cout << " " << grid[6] << " | " << grid[7] << " | " << grid[8] << endl;
}

void TicTacToe::newMove(int movePos)
{
	while (isEmpty(movePos)==false)
	{ 
		cout << "Error invalid input.\n Player "<<playerTrn()<<" enter a positiion between 1-9 tht isn't being used.\n";
		cin >> movePos;

	}
	grid[movePos - 1] = playerTrn();
	if (win())
	{
		printBoard();
		cout << "\n\n\n----------------------------------------\n" << playerTrn() << " is the winner.\n----------------------------------------\n\n To play another game press 1.\n";
		int temp;
		cin >> temp;
		while ( temp != 1)
		{
			cout << "Error invalid input.\nTo play another game press 1 .\n";
			cin >> temp;

		}
		if (temp == 1)
		{
			system("cls");
			restart();
		}
		
	}
	turn++;
	if (turn==9)
	{
		printBoard();
		cout << "\n\n\n----------------------------------------\nTIE\n----------------------------------------\n\n To play another game press 1.\n";
		int tmp;
		cin >> tmp;
		while ( tmp != 1)
		{
			cout << "Error invalid input.\nTo play another game press 1 \n";
			cin >> tmp;

		}
		if (tmp ==1)
		{
			system("cls");
			restart();
		}
	
	}
	
	
}
bool TicTacToe::isEmpty(int pos)
{
	if (grid[pos - 1] == '1' ||
		grid[pos - 1] == '2' ||
		grid[pos - 1] == '3' ||
		grid[pos - 1] == '4' ||
		grid[pos - 1] == '5' ||
		grid[pos - 1] == '6' ||
		grid[pos - 1] == '7' ||
		grid[pos - 1] == '8' ||
		grid[pos - 1] == '9') {
		return true;
	}
	else { return false; }

}

bool TicTacToe::win()
{
	if (turn>3)
	{
if (grid[4] == playerTrn())
	{
		if (grid[3] == playerTrn() && grid[5] == playerTrn() ||
			grid[1] == playerTrn() && grid[7] == playerTrn() ||
			grid[0] == playerTrn() && grid[8] == playerTrn() ||
			grid[2] == playerTrn() && grid[6] == playerTrn())
		{
			return true;
		}
		
	}
	if (grid[0])
	{
		if (grid[1] == playerTrn() &&grid[2] == playerTrn() ||
			grid[3] == playerTrn() &&grid[6] == playerTrn())
		{
			return true;
		}

	}
	 if (grid[8] == playerTrn())
	{
		if (grid[2] == playerTrn() && grid[5] == playerTrn() ||
			grid[6] == playerTrn() && grid[7] == playerTrn())
		{
			return true;
		}

	}
	}
	
	return false;
}

void TicTacToe::restart()
{
	turn = 0;
	grid[0] = '1';
	grid[1] = '2';
	grid[2] = '3';
	grid[3] = '4';
	grid[4] = '5';
	grid[5] = '6';
	grid[6] = '7';
	grid[7] = '8';
	grid[8] = '9';
}

char TicTacToe::playerTrn()
{
	if (turn%2==0)
	{
		return 'X';
	}
	return 'O';
}

