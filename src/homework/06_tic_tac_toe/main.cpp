#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

using std::cout;
using std::cin;
using std::string;
using std::unique_ptr;
using std::make_unique;

int main() 
{
	TicTacToeManager manager;
	std::unique_ptr<TicTacToe> game;
	string first_player;
	char user_choice = 'y';

	do
	{
		cout<<"Choose your Tic Tac Toe Board Version (3 or 4): ";
		int version;
		cin>>version;

		if (version == 3)
		{
			game = make_unique<TicTacToe3>();
		}
		else if (version == 4)
		{
			game = make_unique<TicTacToe4>();
		}
		else
		{
			cout<<"Invalid choice. Exiting...\n";
			return 1;
		}



		cout<<"Enter first player: ";
		cin>>first_player;

		game->start_game(first_player);

		int position;

		while(!game->game_over())
		{
			cout<<"Enter a position: ";
			cin>>position;
			game->mark_board(position);
			game->display_board();
		}

		if (game->get_winner() != "C")
		{
			cout<<"Winner is: "<<game->get_winner()<<"\n";
		}
		else
		{
			cout<<"It's a tie"<<"\n";
		}

		manager.save_game(std::move(game));

		int x_wins, o_wins, ties;
		manager.get_winner_total(x_wins, o_wins, ties);
		cout<<"Total X wins: "<<x_wins<<"\n";
		cout<<"Total O wins: "<<o_wins<<"\n";
		cout<<"Total ties: "<<ties<<"\n\n";

		cout<<"Enter y or Y to play again: ";
		cin>>user_choice;


	} while (user_choice == 'y' || user_choice == 'Y');

	int x_wins, o_wins, ties;
	manager.get_winner_total(x_wins, o_wins, ties);
	cout<<"Total X wins: "<<x_wins<<"\n";
	cout<<"Total O wins: "<<o_wins<<"\n";
	cout<<"Total ties: "<<ties<<"\n\n";

	return 0;
}
