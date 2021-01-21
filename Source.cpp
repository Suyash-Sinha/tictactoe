#include "TicTacToe.h"
#include <iostream>
using namespace std;

int main() {

	TicTacToe Game;
	Game.printBoard();
	while (true)
	{
		int temp;
		cout << "Player turn: " << Game.playerTrn() << endl;
		cin >> temp;
		Game.newMove(temp);
		Game.printBoard();

	}






	return 0;
}