#include "Piece.h"

//constructs with location and color
Piece::Piece(std::pair<char, int> location, std::string pieceColor) {
	//setting piece color
	if(pieceColor == "white") { piece_white_ = true; }
	else { piece_white_ = false; }
	//sets piece location. necessary for determining possible moves
	this->set_location(location);
}
//accessors
std::string Piece::get_piece_color() {
	//returning piece color
	if (piece_white_) { return "white"; }
	else { return "black"; }
}

//gets the current location of the piece
std::pair<int, int> Piece::get_location() {
	return this->location_;
}

//changes the current location of the piece
void Piece::set_location(std::pair<char,int> location) {
	this->location_ = location;
}

