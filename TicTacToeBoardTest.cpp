/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 

};
TEST(TicTacToeBoardTest, SanityTest)
{
	ASSERT_TRUE(true);
}

TEST(TicTacToeBoardTest, Toogle)
{
TicTacToeBoard board;
board.placePiece(1,1);
board.placePiece(0,0);
Piece actual = board.placePiece(2,2);
Piece expected = X;
ASSERT_EQ(expected, actual);
}


TEST(TicTacToeBoardTest, InArea)
{
TicTacToeBoard board;
Piece actual = board.placePiece(1,1);
Piece expected = X;
ASSERT_EQ(expected, actual);
}


TEST(TicTacToeBoardTest, Turnone)
{
TicTacToeBoard board;
board.placePiece(1,1);
Piece actual = board.placePiece(1,1);
Piece expected =X;
ASSERT_EQ(expected , actual);

}

TEST(TicTacToeBoardTest, TurnTwo)
{
TicTacToeBoard board;
board.placePiece(1,1);
board.placePiece(0,0);
Piece actual = board.placePiece(0,0);
Piece expected = O;
ASSERT_EQ(expected , actual);

}

TEST(TicTacToeBoardTest, constructorInitiation)
{
TicTacToeBoard board;
Piece actual = board.placePiece(1,1);
Piece expected = X;
ASSERT_EQ(expected , actual);

}



TEST(TicTacToeBoardTest, boardClear)
{
TicTacToeBoard board;
board.placePiece(0,0);
board.clearBoard();
Piece actual = board.getPiece(0,0);
Piece expected = Blank;
ASSERT_EQ(expected , actual);

}



TEST(TicTacToeBoardTest, empty)
{
TicTacToeBoard board;
Piece actual = board.getPiece(0,0);
Piece expected = Blank;
ASSERT_EQ(expected , actual);

}












