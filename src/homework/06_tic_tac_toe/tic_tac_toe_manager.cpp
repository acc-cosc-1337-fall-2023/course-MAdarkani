#include "tic_tac_toe_manager.h"

void TicTacToeManager::save_game(TicTacToe& game) 
{
    games.push_back(game);
    update_winner_count(game.get_winner());
}

void TicTacToeManager::get_winner_total(int& x, int& o, int& t)
{
    x = x_win;
    o = o_win;
    t = ties;
}

void TicTacToeManager::update_winner_count(const std::string& winner)
{
    if (winner == "X")
    {
        x_win++;
    }
    else if (winner == "O")
    {
        o_win++;
    }
    else
    {
        ties++;
    }
    
   
}