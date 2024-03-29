﻿#pragma once
#include "Shape.h"

class CPentagon : public Shape
{
public:
	CPentagon();
	~CPentagon();

	// Function Class
	void Draw(HDC hdcPoint, Point LeftTop, Point RightBottom);
	void ReDraw(HDC hdc);
	//Lay toa do cua cac dinh
	vector<Point> getVertexes();
	bool isIntersect(Line l);
	Shape* Clone(); 
	string getClassName(); 
};

