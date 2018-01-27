#pragma once

#include "screen.h"

class upgrade
{
public:
	int no;
	const color_t* image;
	bool selected;

	upgrade() { }
	upgrade(int no_);

	void draw(int x, int y);
};


class screen_upgrade : public screen {
public:
	screen_upgrade();
	void shuffle();
	virtual void update() override;
	virtual void draw() override;
	virtual void redraw() override;
	virtual int routine() override;
private:
	void draw_desc();
	int selected_no;

	bool need_redraw;

	int rest;
	upgrade ups[10];
};