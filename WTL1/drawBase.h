#pragma once

struct drawBase
{
	drawBase();
	virtual ~drawBase();
	virtual void lbuttondown(int x, int y);
	virtual void lbuttonup(int x, int y);
	virtual void mousemove(int x, int y);
	virtual void draw(CDCHandle dc);

	int cololine;
	COLORREF color;
};

