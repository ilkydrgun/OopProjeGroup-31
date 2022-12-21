#pragma once
#include 'Point.h'
#include <list>
#include <iterator>

class PointCloud {

private:
	int pointNumber;
	list<Point> points;
	
public:
	PointCloud();
	~PointCloud();
	void setpointNumber(int);
	void setpoints(list<Point>);
	int getpointNumber() const;
	list<Point> getpoints() const;

	PointCloud operator+(PointCloud pc);
	void operator=(PointCloud *pc);




};