//h
#include <string>
#include <vector>
#include <iostream>
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    TicTacToe(int s);
    virtual ~TicTacToe() = default;
    
    void start_game(std::string first_player);
    bool game_over();
    void mark_board(int position);
    void display_board() const;
    std::string get_winner() const;

protected:
    std::vector<std::string> pegs;
    virtual bool check_column_win() const;
    virtual bool check_row_win() const;
    virtual bool check_diagonal_win() const;

private:
    std::string player;
    std::string winner;
    
    void clear_board();
    void set_next_player();
    void set_winner();
    bool check_board_full() const;
    friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);

};


#endif