#pragma once
#include "drawBase.h"
struct drawline : drawBase
{
public:
	drawline();
	~drawline();
	void lbuttondown(int x, int y);
	void lbuttonup(int x, int y);
	void mousemove(int x, int y);
	void draw(CDCHandle dc);
};

