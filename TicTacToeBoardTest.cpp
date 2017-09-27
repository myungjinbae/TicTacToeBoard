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


/* EXAMPLE TEST FORMAT
TEST(TicTacToeBoardTest, sanityCheck)
{
	ASSERT_TRUE(true);
}
*/
TEST(TicTacToeBoardTest, toggleTurn1)
{
	TicTacToeBoard T;
	ASSERT_EQ('O', T.toggleTurn());
}

TEST(TicTacToeBoardTest, toggleTurn2)
{
	TicTacToeBoard T;
	T.toggleTurn();
	ASSERT_EQ('X', T.toggleTurn());
}

TEST(TicTacToeBoardTest, placePiece1)
{
	TicTacToeBoard T;
	ASSERT_EQ('X', T.placePiece(1,1));
}

TEST(TicTacToeBoardTest, placePiece2)
{
	TicTacToeBoard T;
	T.placePiece(2,1);
	ASSERT_EQ('O', T.placePiece(1,1));
}

TEST(TicTacToeBoardTest, placePiece3)
{
	TicTacToeBoard T;
	T.placePiece(2,1);
	ASSERT_EQ('X', T.placePiece(2,1));
}

TEST(TicTacToeBoardTest, placePiece4)
{
	TicTacToeBoard T;
	ASSERT_EQ('?', T.placePiece(4,6));
}

TEST(TicTacToeBoardTest, placePiece5)
{
	TicTacToeBoard T;
	ASSERT_EQ('?', T.placePiece(-2,-2));
}

TEST(TicTacToeBoardTest, placePiece6)
{
	TicTacToeBoard T;
	ASSERT_EQ('?', T.placePiece(2,22));
}

TEST(TicTacToeBoardTest, placePiece7)
{
	TicTacToeBoard T;
	ASSERT_EQ('?', T.placePiece(2,-2));
}

TEST(TicTacToeBoardTest, getPiece1)
{
	TicTacToeBoard T;
	ASSERT_EQ(' ', T.getPiece(1,1));
}

TEST(TicTacToeBoardTest, getPiece2)
{
	TicTacToeBoard T;
	ASSERT_EQ('?', T.getPiece(4,4));
}

TEST(TicTacToeBoardTest, getPiece3)
{
	TicTacToeBoard T;
	ASSERT_EQ('?', T.getPiece(-1,-1));
}

TEST(TicTacToeBoardTest, getPiece4)
{
	TicTacToeBoard T;
	T.placePiece(1,1);
	ASSERT_EQ('X', T.getPiece(1,1));
}

TEST(TicTacToeBoardTest, getPiece5)
{
	TicTacToeBoard T;
	ASSERT_EQ('?', T.getPiece(1,-1));
}

TEST(TicTacToeBoardTest, getPiece6)
{
	TicTacToeBoard T;
	ASSERT_EQ('?', T.getPiece(1,11));
}

TEST(TicTacToeBoardTest, getWinner1)
{
	TicTacToeBoard T;
	T.placePiece(1,1);
	ASSERT_EQ('?', T.getWinner());
}

TEST(TicTacToeBoardTest, getWinner2)
{
	TicTacToeBoard T;
	T.placePiece(1,1);
	T.placePiece(0,0);
	T.placePiece(0,1);
	T.placePiece(0,2);
	T.placePiece(1,0);
	T.placePiece(1,2);
	T.placePiece(2,1);
	T.placePiece(2,0);
	T.placePiece(2,2);
	ASSERT_EQ('X', T.getWinner());
}
  /* 
  BUG: Describe the situation and what the EXPECTED outcome should be 
  but also what the ACTUAL outcome is with your bug
  */
TEST(TicTacToeBoardTest, getWinner3)
{
	TicTacToeBoard T;
	T.placePiece(0,1);
	T.placePiece(0,0);
	T.placePiece(1,0);
	T.placePiece(0,2);
	T.placePiece(1,2);
	T.placePiece(1,1);
	T.placePiece(2,1);
	T.placePiece(2,0);
	T.placePiece(2,2);
	ASSERT_EQ('O', T.getWinner());
}
  /* 
  BUG: Describe the situation and what the EXPECTED outcome should be 
  but also what the ACTUAL outcome is with your bug
  */
TEST(TicTacToeBoardTest, getWinner4)
{
	TicTacToeBoard T;
	T.placePiece(0,1);
	T.placePiece(0,0);
	T.placePiece(0,2);
	T.placePiece(1,1);
	T.placePiece(1,0);
	T.placePiece(1,2);
	T.placePiece(2,1);
	T.placePiece(2,0);
	T.placePiece(2,2);
	ASSERT_EQ(' ', T.getWinner());
}

TEST(TicTacToeBoardTest, getWinner5)
{
	TicTacToeBoard T;
	T.placePiece(0,0);
	T.placePiece(0,2);
	T.placePiece(0,1);
	T.placePiece(1,1);
	T.placePiece(1,0);
	T.placePiece(1,2);
	T.placePiece(2,1);
	T.placePiece(2,2);
	T.placePiece(2,0);
	ASSERT_EQ('X', T.getWinner());
}

TEST(TicTacToeBoardTest, getWinner6)
{
	TicTacToeBoard T;
	T.placePiece(0,0);
	T.placePiece(0,1);
	T.placePiece(0,2);
	T.placePiece(1,1);
	T.placePiece(1,0);
	T.placePiece(1,2);
	T.placePiece(2,1);
	T.placePiece(2,0);
	T.placePiece(2,2);
	ASSERT_EQ(' ', T.getWinner());
}

TEST(TicTacToeBoardTest, getWinner7)
{
	TicTacToeBoard T;
	T.placePiece(1,1);
	T.placePiece(0,2);
	T.placePiece(0,1);
	T.placePiece(0,0);
	T.placePiece(1,0);
	T.placePiece(1,2);
	T.placePiece(2,0);
	T.placePiece(2,1);
	T.placePiece(2,2);
	ASSERT_EQ(' ', T.getWinner());
}

TEST(TicTacToeBoardTest, getWinner8)
{
	TicTacToeBoard T;
	T.placePiece(0,0);
	T.placePiece(0,2);
	T.placePiece(0,1);
	T.placePiece(1,1);
	T.placePiece(1,0);
	T.placePiece(1,2);
	T.placePiece(2,1);
	T.placePiece(2,0);
	T.placePiece(2,2);
	ASSERT_EQ('O', T.getWinner());
}