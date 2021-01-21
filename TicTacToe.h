#pragma once
class TicTacToe
{public:
	
	TicTacToe();
	void printBoard();
	void newMove(int);
	bool isEmpty(int);
	bool win();
	void restart();
	char playerTrn();




	
private:
	char grid[9];
	int turn ;
	char player;
};

