#include "TicTacToeBoard.h"
/**
 * Class for representing a 3x3 Tic-Tac-Toe game board, using the Piece enum
 * to represent the spaces on the board.
**/

//Switches turn member variable to represent whether it's X's or O's turn
void TicTacToeBoard::toggleTurn()
{
	//if x went then its 0's turn
	//else its x turns

	
	if (turn == X)
		turn = O;
	else turn = X;
}

//Constructor sets an empty board and specifies it is X's turn first
TicTacToeBoard::TicTacToeBoard()
{

for (int row = 0 ; row < 3 ; row++)
	for (int col = 0; col < 3 ; col ++)
		board [row][col] = Blank;
	turn = X;
}

//Resets each board location to the Blank Piece value
void TicTacToeBoard::clearBoard()
{
for (int row = 0 ; row < 3 ; row++)
	for (int col = 0; col < 3 ; col ++)
		board [row][col] = Blank;
}

/**
 * Places the piece of the current turn on the board, returns what
 * piece is placed, and toggles which Piece's turn it is. placePiece does 
 * NOT allow to place a piece in a location where there is already a piece.
 * In that case, placePiece just returns what is already at that location. 
 * Out of bounds coordinates return the Piece Invalid value
**/ 
Piece TicTacToeBoard::placePiece(int row, int column)
{
	Piece piece = getPiece(row,column);
	if(piece == Blank)
	{
		board[row][column] = turn;
		piece = turn;
		toggleTurn();
	}

	return piece;

}

/**
 * Returns what piece is at the provided coordinates, or Blank if there
 * are no pieces there, or Invalid if the coordinates are out of bounds
**/
Piece TicTacToeBoard::getPiece(int row, int column)
{
if (row > 2 || row < 0 || column <0 || column > 2)
{
	return Invalid;
}
	return board[row][column];
}


/**
 * Returns which Piece has won, if there is a winner, Invalid if the game
 * is not over, or Blank if the board is filled and no one has won.
**/
Piece TicTacToeBoard::getWinner()
{
	if ((board[0][0]== board[0][1])== board[0][2])
		return board[0][0];
	else if ((board[1][0] == board[1][1] )== board[1][2])
		return board[1][0];
	else if ((board[2][0] == board[2][1]) == board[2][2])
		return board[2][0];
	else if ((board[0][0]==board[1][0])==board[2][0])
		return board[0][0];
	else if ((board[0][1]==board[1][1])==board[2][1])
		return board[0][1];
	else if ((board[0][2]==board[1][2])==board[2][2])
		return board[0][2];
	else if ((board[0][0]==board[1][1])==board[2][2])
		return board[0][0];
	else
		return board[0][2];
}
