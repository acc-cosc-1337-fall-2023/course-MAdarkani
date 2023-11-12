//cpp
#include "tic_tac_toe.h"
using std::cout;

TicTacToe::TicTacToe(int s) : pegs(s * s, " ") {}

//Pulic Functions

void TicTacToe::start_game(std::string first_player)
{
    player = first_player;
    winner = "";
    clear_board();
}


bool TicTacToe::game_over()
{
    if (check_row_win() || check_column_win() || check_diagonal_win())
    {
        set_winner();
        return true;
    }
    else if (check_board_full())
    {
        winner = "C"; 
        return true;
    }
    return false;
}


void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}

void TicTacToe::display_board() const
{
    int size = pegs.size();
    if (size == 3*3)
    {
        for(long unsigned int i=0; i < pegs.size(); i +=3)
        {
            cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
        }
    }
    else if (size == 4*4)
    {
        for(long unsigned int i=0; i < pegs.size(); i +=4)
        {
            cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"|"<<pegs[i+3]<<"\n";
        }
    }
}


std::string TicTacToe::get_winner() const
{
    return winner;
}

//Private Functions
void TicTacToe::clear_board()
{
    for(auto& peg: pegs)
    {
        peg = " ";
    }
}


void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}


void TicTacToe::set_winner()
{
    if (player=="X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
}

bool TicTacToe::check_board_full() const
{
    for(long unsigned int i=0; i < pegs.size(); i++)
    {
        if(pegs[i] == " ")
        {
            return false;
        }
    }

    return true;
}


bool TicTacToe::check_column_win() const
{
    for (int i=0; i<3; i++)
    {
        if (pegs[i]==pegs[i+3] && pegs[i]==pegs[i+6] && pegs[i]!=" ")
        {
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_row_win() const
{
    for(int i=0; i<9; i+=3)
    {
        if (pegs[i]==pegs[i+1] && pegs[i]==pegs[i+2] && pegs[i]!=" ")
        {
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_diagonal_win() const
{
    if ((pegs[0]==pegs[4] && pegs[0]==pegs[8] && pegs[0]!=" ") || (pegs[2]==pegs[4] && pegs[2]==pegs[6] && pegs[2]!=" "))
    {
        return true;
    }
    return false;
}


std::ostream& operator<<(std::ostream& out, const TicTacToe& game)
{
    for (size_t i = 0; i < game.pegs.size(); ++i)
    {
        out << game.pegs[i];
        if ((i + 1) % 3 == 0 && i < game.pegs.size() - 1)
        {
            out << "\n";
        }
        else
        {
            out << "|";
        }
    }
    return out;
}