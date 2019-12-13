#pragma once
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "Piece.h"
#include "Spot.h"

class Board {
public:
	void createBoard();
	void resetBoard();

private:
	Spot spotArray[8][8];

};