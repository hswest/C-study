#ifndef OVALAREA_H
#define OVALAREA_H

class ovalArea
{
public:
	int width, height;
	ovalArea();
	ovalArea(float x, float y);
	int getA();
	int getB();
	void Area();
	~ovalArea();
	void set();
};

#endif OVALAREA_H