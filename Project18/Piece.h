#pragma once
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

class Piece {
public:
	Piece(std::pair<char,int> location, std::string pieceColor);
	std::string get_piece_color();
	std::pair<int, int> get_location();
	void set_location(std::pair<char,int>);
private:
	//data
	bool piece_white_;
	std::pair<int, int> location_;
	bool killed = false;
	bool has_moved_;
};