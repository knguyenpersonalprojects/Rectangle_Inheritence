#include<iostream>
using namespace std;

class Rectangle
{
public:
	int height;
	int width;
	
	/*void Display()
	{
		cout << width << " " << height << endl;
	}*/
	void DisplaySides()
	{
		cout << width << " " << height << endl;
	}
};

class RectangleArea:public Rectangle
{
public:
	int recWidth;
	int recHeight;
	int readInput()
	{
		recWidth = width;
		recHeight = height;
	}
	/*void Display()
	{
		cout << width*height << endl;
	}*/
	void DisplayArea()
	{
		cout << width * height << endl;
	}
};
class RectangleParameter:public RectangleArea
{
public:
	int parameter = 0;
	//note declaration must be inside of functions to run
	void DisplayPara()
	{
		parameter = (2 * height) + (2 * width);
		cout << parameter << endl;
	}
};
int main()
{
	RectangleParameter r;
	int height = 0;
	int width=0;
	cin >> height >> width;
	r.width = width;
	r.height = height;
	r.DisplaySides();
	r.DisplayArea();
	r.DisplayPara();


}