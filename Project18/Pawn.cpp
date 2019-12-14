#include "Pawn.h"

//constructs with piece location and color
Pawn::Pawn(std::pair<char, int> location, std::string pieceColor):Piece(location, pieceColor) {
	this->has_moved_ = false;
}

