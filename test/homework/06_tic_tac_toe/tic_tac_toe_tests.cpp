#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

using std::unique_ptr;
using std::make_unique;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Test win by first column 3x3 board") {
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe3>();

    game->start_game("X");
    
    game->mark_board(1);
    game->mark_board(2);
    game->mark_board(4);
    game->mark_board(3);
    game->mark_board(7);

    REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by second column 3x3 board") {
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe3>();
    game->start_game("X");
    
    game->mark_board(2);
    game->mark_board(3);
    game->mark_board(5);
    game->mark_board(4);
    game->mark_board(8);

    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by third column 3x3 board") {
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe3>();
    game->start_game("X");
    
    game->mark_board(3);
    game->mark_board(1);
    game->mark_board(6);
    game->mark_board(2);
    game->mark_board(9);

    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test win by first row 3x3 board") {
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe3>();
    game->start_game("X");
    
    game->mark_board(1);
    game->mark_board(4);
    game->mark_board(2);
    game->mark_board(5);
    game->mark_board(3);

    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test win by second row 3x3 board") {
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe3>();
    game->start_game("X");
    
    game->mark_board(4);
    game->mark_board(1);
    game->mark_board(5);
    game->mark_board(2);
    game->mark_board(6);

    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by third row 3x3 board") {
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe3>();
    game->start_game("X");
    
    game->mark_board(7);
    game->mark_board(1);
    game->mark_board(8);
    game->mark_board(2);
    game->mark_board(9);

    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win diagonally from top left 3x3 board") {
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe3>();
    game->start_game("X");
    
    game->mark_board(1);
    game->mark_board(2);
    game->mark_board(5);
    game->mark_board(3);
    game->mark_board(9);

    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win diagonally from bottom left 3x3 board") {
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe3>();
    game->start_game("X");
    
    game->mark_board(7);
    game->mark_board(1);
    game->mark_board(5);
    game->mark_board(2);
    game->mark_board(3);

    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test TicTacToeManager get_winner_total for 3x3 board") {
	std::unique_ptr<TicTacToeManager> manager = std::make_unique<TicTacToeManager>();

	std::unique_ptr<TicTacToe> game1 = std::make_unique<TicTacToe3>();
    game1->start_game("X");
    game1->mark_board(1);
    game1->mark_board(2);
    game1->mark_board(4);
    game1->mark_board(5);
    game1->mark_board(7);
    game1->game_over();
    manager->save_game(std::move(game1));
    
	std::unique_ptr<TicTacToe> game2 = std::make_unique<TicTacToe3>();
    game2->start_game("X");
    game2->mark_board(1);
    game2->mark_board(4);
    game2->mark_board(2);
    game2->mark_board(5);
    game2->mark_board(3);
    game2->game_over();
    manager->save_game(std::move(game2));
    
	std::unique_ptr<TicTacToe> game3 = std::make_unique<TicTacToe3>();
    game3->start_game("O");
    game3->mark_board(1);
    game3->mark_board(4);
    game3->mark_board(2);
    game3->mark_board(5);
    game3->mark_board(3);
    game3->game_over();
    manager->save_game(std::move(game3));
    
    int x_wins, o_wins, ties;
    manager->get_winner_total(x_wins, o_wins, ties); 
	REQUIRE(x_wins == 2);
	REQUIRE(o_wins == 1);
	REQUIRE(ties == 0);
}


TEST_CASE("Test win by first column 4x4 board") {
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe4>();

    game->start_game("X");
    
    game->mark_board(1);
    game->mark_board(2);
    game->mark_board(5);
    game->mark_board(3);
    game->mark_board(9);
    game->mark_board(4);
    game->mark_board(13);

    REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by second column 4x4 board") {
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe4>();
    game->start_game("X");
    
    game->mark_board(2);
    game->mark_board(3);
    game->mark_board(6);
    game->mark_board(4);
    game->mark_board(10);
    game->mark_board(1);
    game->mark_board(14);

    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by third column 4x4 board") {
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe4>();
    game->start_game("X");
    
    game->mark_board(3);
    game->mark_board(1);
    game->mark_board(7);
    game->mark_board(2);
    game->mark_board(11);
    game->mark_board(4);
    game->mark_board(15);

    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");

}


TEST_CASE("Test win by fourth column 4x4 board") {
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe4>();
    game->start_game("X");
    
    game->mark_board(4);
    game->mark_board(1);
    game->mark_board(8);
    game->mark_board(2);
    game->mark_board(12);
    game->mark_board(3);
    game->mark_board(16);

    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test win by first row 4x4 board") {
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe4>();
    game->start_game("X");
    
    game->mark_board(1);
    game->mark_board(5);
    game->mark_board(2);
    game->mark_board(6);
    game->mark_board(3);
    game->mark_board(7);
    game->mark_board(4);

    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test win by second row 4x4 board") {
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe4>();
    game->start_game("X");
    
    game->mark_board(5);
    game->mark_board(1);
    game->mark_board(6);
    game->mark_board(2);
    game->mark_board(7);
    game->mark_board(3);
    game->mark_board(8);

    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by third row 4x4 board") {
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe4>();
    game->start_game("X");
    
    game->mark_board(9);
    game->mark_board(1);
    game->mark_board(10);
    game->mark_board(2);
    game->mark_board(11);
    game->mark_board(3);
    game->mark_board(12);

    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by fourth row 4x4 board") {
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe4>();
    game->start_game("X");
    
    game->mark_board(13);
    game->mark_board(1);
    game->mark_board(14);
    game->mark_board(2);
    game->mark_board(15);
    game->mark_board(3);
    game->mark_board(16);

    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win diagonally from top left 4x4 board") {
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe4>();
    game->start_game("X");
    
    game->mark_board(1);
    game->mark_board(2);
    game->mark_board(6);
    game->mark_board(3);
    game->mark_board(11);
    game->mark_board(4);
    game->mark_board(16);

    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win diagonally from bottom left 4x4 board") {
	std::unique_ptr<TicTacToe> game = std::make_unique<TicTacToe4>();
    game->start_game("X");
    
    game->mark_board(4);
    game->mark_board(1);
    game->mark_board(7);
    game->mark_board(2);
    game->mark_board(10);
    game->mark_board(3);
    game->mark_board(13);

    REQUIRE(game->game_over() == true);
    REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test TicTacToeManager get_winner_total for 4x4 board") {
	std::unique_ptr<TicTacToeManager> manager = std::make_unique<TicTacToeManager>();

	std::unique_ptr<TicTacToe> game1 = std::make_unique<TicTacToe4>();
    game1->start_game("X");
    game1->mark_board(4);
    game1->mark_board(1);
    game1->mark_board(7);
    game1->mark_board(2);
    game1->mark_board(10);
    game1->mark_board(3);
    game1->mark_board(13);
    game1->game_over();
    manager->save_game(std::move(game1));
    
	std::unique_ptr<TicTacToe> game2 = std::make_unique<TicTacToe4>();
    game2->start_game("X");
    game2->mark_board(13);
    game2->mark_board(1);
    game2->mark_board(14);
    game2->mark_board(2);
    game2->mark_board(15);
    game2->mark_board(3);
    game2->mark_board(16);
    game2->game_over();
    manager->save_game(std::move(game2));
    
	std::unique_ptr<TicTacToe> game3 = std::make_unique<TicTacToe4>();
    game3->start_game("O");
    game3->mark_board(1);
    game3->mark_board(5);
    game3->mark_board(2);
    game3->mark_board(6);
    game3->mark_board(3);
    game3->mark_board(7);
    game3->mark_board(4);
    game3->game_over();
    manager->save_game(std::move(game3));
    
    int x_wins, o_wins, ties;
    manager->get_winner_total(x_wins, o_wins, ties); 
	REQUIRE(x_wins == 2);
	REQUIRE(o_wins == 1);
	REQUIRE(ties == 0);
}

