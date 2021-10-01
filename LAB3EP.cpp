#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const double PI = 3.14159;

float areaCircle(float PI, float radius);
double circumferenceCircle(double PI, double radius);
float diameterCircle(float radius);


int main() {
	
	float radius;
	float PI;
	int choice;
	
	cout << "This program can calculate the area," 
	     << " diameter, or circumference of a circle." << endl;
	cout << "To start the program, enter a number plus your desired radius " << endl;
	cout << "1: to find the area of the circle" << endl;
	cout << "2: to find the circumference" << endl;
	cout << "3: to find the diameter" << endl;
	cout << "-1: quit the program" << endl;
	
	cin >> choice;
	cout << endl;
	
	while (choice != -1)
	{ switch (choice)
		{
			case 1:
				cout << "Please enter your desired radius ";
				cin >> radius;
				cout << endl;
				cout << "The area of a circle with radius " << radius
				     << " is " << areaCircle(PI, radius) << endl;
				     return 0;
				     break;
			case 2:
				cout << "Please enter your desired radius ";
				cin >> radius;
				cout << endl;
				cout << "The circumference of the circle with radius " << radius
				     << " is " << circumferenceCircle(PI, radius) << endl;
				     return 0;
				     break;
			case 3:
				cout << "Please enter your desired radius ";
				cin >> radius;
				cout << endl;
				cout << "The diameter of the circle with radius " << radius
				     << " is " << diameterCircle(radius) << endl;
				     return 0;
				     break;
				     
			default:
				cout << "invalid choice" << endl;
				break;
				
			
		}
	}
	
	if (choice == -1)
	{
		return 0;
	}
	
	float areacircle(float PI, float radius);
	double circumferenceCircle(double PI, double radius);
	float diameterCircle(float radius);
	
	cout << "To run the program enter number and radius :" << endl;
	cout << "1: to find the area of the circle " << endl;
	cout << "2: to find the circumference of the circle" << endl;
	cout << "3: to find the diameter of the circle" << endl;
	cout << "-1: to quit the program" << endl;
	cin >> choice >> radius;
	cout << endl;
	
	return 0;
}

float areaCircle(float PI, float radius)
{
	return 3.14159 * radius * radius;
}
double circumferenceCircle(double PI, double radius)
{
	return 2 * 3.14159 * radius;
}
float diameterCircle(float radius)
{
	return 2 * radius;
}


