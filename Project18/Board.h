#pragma once
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "Piece.h"
#include "Pawn.h"
#include <map>

class Board {
public:
	Board();
	void resetBoard();
	std::string getState();
	void setPiece(std::pair<char, int> spot, Piece piece);
	Piece getPiece(std::pair<char, int> spot);

private:
	std::map<std::pair<char, int>, Piece> board_map_;

};