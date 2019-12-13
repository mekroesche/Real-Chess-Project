#pragma once
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "Piece.h"

class Spot{
public:
	//constructor
	Spot(int x, int y, Piece piece);

	//returns the piece on the spot
	Piece getPiece();

	//sets the piece on the spot
	void setPiece(Piece piece);

	//returns the x coordinate of the spot
	int getX();

	void setX(int x);

	//returns the y coordinate of the spot
	int getY();

	void setY(int y);

private:
	//internal variables
	int x_;
	int y_;
	Piece piece_;

};