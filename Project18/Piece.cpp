#include "Piece.h"

class Piece {
public:
	Piece(std::string pieceColor) {
		//this.setWhite(white);
		if(pieceColor == "white") { piece_white_ = true; }
	}
//accessors
	std::string get_piece_color() {
		if (piece_white_) { return "white"; }
		else { return "black"; }
	}

	//gets the current location of the piece
	std::pair<int, int> get_location() {
		return this->location_;
	}

	//changes the current location of the piece
	void set_location(int x, int y) {
		this->location_ = std::make_pair(x, y);
	}
private:
//data
	bool piece_white_;
	std::pair<int, int> location_;
	bool killed = false;
};