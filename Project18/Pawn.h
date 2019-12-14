#pragma once
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "Piece.h"

class Pawn : public Piece {
public:
	//constructor for pawn piece
	Pawn(std::pair<char, int> location, std::string pieceColor);
private:
	//necessary for determining movement capabilities
	bool has_moved_;
};