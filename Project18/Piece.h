#pragma once
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

class Piece {
public:
	Piece(std::string pieceColor);
	std::string get_piece_color();
	std::pair<int, int> get_location();
	void set_location(int x, int y);
private:
	//data
	bool piece_white_;
	std::pair<int, int> location_;
	bool killed = false;
};