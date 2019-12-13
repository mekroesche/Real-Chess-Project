#include "Spot.h"

class Spot {
public:
	//constructor
	Spot(int x, int y) {
		this->x_ = x; 
		this->y_ = y;
	}

	//return the piece on the board space
	Piece getPiece() {
		return this->piece_;
	}

	//set which piece is on the space
	void setPiece(Piece piece) {
		this->piece_ = piece;
	}

	//return the x coordinate of the spot
	int getX() {
		return this->x_;
	}

	void setX(int x) {
		this->x_ = x;
	}

	//return the y coordinate of the spot
	int getY() {
		return this->y_;
	}

	void setY(int y) {
		this->y_ = y;
	}

private:
	int x_;
	int y_;
	Piece piece_;
};