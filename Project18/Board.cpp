#include "Board.h"

//Constructor
Board::Board() {
	this->resetBoard();
}

//defines the board and sets the pieces
void Board::resetBoard() {
	this->setPiece(std::make_pair('A', 2), Pawn(std::make_pair('A',2), "white"));
}

//changes which piece is occupying a spot
void Board::setPiece(std::pair<char, int> spot, Piece piece) {
	this->board_map_[spot] = piece;
}

Piece Board::getPiece(std::pair<char, int> spot) {
	return board_map_[spot];
}

std::string Board::getState() {
	std::cout << "test";
	//this->getPiece(std::make_pair('A', 2));
}
