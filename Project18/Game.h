#pragma once
#include "Board.h"

class Game {
public:
	Game();
	void getState();
private:
	Board game_board_;
};