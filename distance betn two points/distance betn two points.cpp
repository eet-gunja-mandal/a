// distance betn two points.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<ostream>
#include<math.h>
using namespace std;
class coordinate
{
private:
	float x_coordinate;
	float y_coordinate;
	float z_coordinate;

public:
	coordinate (float x = 0, float y = 0, float z = 0) :x_coordinate(x), y_coordinate(y), z_coordinate(z) {};
	float distaceFrom(coordinate abc) {
		return pow(pow((abc.x_coordinate - x_coordinate), 2) + pow((abc.y_coordinate - y_coordinate), 2) + pow((abc.z_coordinate - z_coordinate), 2), 0.5);
	}
};



int main()
{
	coordinate  A(12, 23, 45);
	coordinate B(34, 31, 45);
	int dist =A.distaceFrom(B);

    return 0;
	std::cout << "This is not wortking";
}

