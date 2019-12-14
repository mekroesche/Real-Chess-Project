#include "Game.h"

Game::Game() {
	this->game_board_.resetBoard();
}

void Game::getState() {
	this->game_board_.getState();
}
