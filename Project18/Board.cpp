#include "Board.h"

class Board {
public:
	//Constructor
	Board() {
		this->createBoard();
	}

	void createBoard() {
		for (int row = 0; row < 8; row++) {
			for (int col = 0; col < 8; col++) {
				this->spotArray[row][col].setX(row);
				this->spotArray[row][col].setY(col);
			}
		}
	}

	void resetBoard() {
		this->spotArray[1][0].setPiece()
	}
private:
	Spot spotArray[8][8];

};