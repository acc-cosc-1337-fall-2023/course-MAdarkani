#ifndef TIC_TAC_TOE_3_H
#define TIC_TAC_TOE_3_H

#include "tic_tac_toe.h"

class TicTacToe3 : public TicTacToe
{
public:
    TicTacToe3();
    ~TicTacToe3() override = default;

protected:
    bool check_column_win() const override;    
    bool check_row_win() const override;    
    bool check_diagonal_win() const override;    
};

#endif
