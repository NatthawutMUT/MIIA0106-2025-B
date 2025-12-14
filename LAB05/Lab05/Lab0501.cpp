#include<iostream>
#include<string>
#include<cmath>


using namespace std;

double circleArea(double radius) {
	return 3.14 * radius * radius; //calculate area of circle
}
double rectArea(double width, double height) {
	double result = width * height;
	return result; //calculate area of rectangle
}

int main() {
	double radius; //declare radius variable
	double result; //declare result variable

	cout << "Enter the radius of the circle: "; //prompt user for radius
	cin >> radius; //get radius from user

	//result = 3.14 * radius * radius; //calculate area of circle
	//cout << "The area of the circle is: " << result << endl; //display area of circle
	
	result = circleArea(radius); //call function to calculate area of circle
	cout << "The area of the circle is: " << result << endl; //display area of circle

	double width, height; //declare width and height variables
	cout << "Enter Width";
	cin >> width; //get width from user
	cout << "Enter Height";
	cin >> height; //get height from user

	result = rectArea(width, height); //call function to calculate area of rectangle
	cout << "The area of the rectangle is: " << result << endl; //display area of rectangle


		
	return 1;
}