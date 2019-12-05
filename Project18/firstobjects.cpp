#include "firstobjects.h"

class Piece {
private:

	bool killed = false;

public:
	Piece(std::string pieceColor) {
		//this.setWhite(white);
		if(pieceColor == "white") { piece_white_ = true; }
	}
//accessors
	std::string get_piece_color();
private:
//data
	bool piece_white_;
};