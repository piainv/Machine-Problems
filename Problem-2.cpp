// C++ Program that computes data using the sides of the triangle.
#include <iostream>
#include <conio.h>
#include <cmath>		// Declare header file <cmath> for mathematical functions
#include <iomanip>		

using namespace std;

int main()
{
	// Use float for possible decimal values
	float sideA, sideB, sideC, angleA, angleB, angleC, area, perimeter, apothem, circumcenter, height, a, b ,c, d, p;
	const float pi = 3.14159265; 	// Declare pi as constant
	//Sides of the Triangle
	cout << "Enter First Side of the Triangle:"; cin >> sideA;
	cout << "Enter Second Side of the Triangle:"; cin >> sideB;
	cout << "Enter Third Side of the Triangle:"; cin >> sideC;
	
	if ((sideA + sideB > sideC) || (sideA + sideC > sideB) || (sideB + sideC > sideA)) 	//Conditional statement for the values of the sides
	{
		// Use function of mathematical equation power (pow(x,y))
		a = (((pow(sideB,2) + pow(sideC,2)) - pow(sideA,2))/(2*(sideB*sideC)));
		b = (((pow(sideA,2) + pow(sideC,2)) - pow(sideB,2))/(2*(sideA*sideC)));
		c = (((pow(sideA,2) + pow(sideB,2)) - pow(sideC,2))/(2*(sideA*sideB)));
		// Finding interior angles
		angleA = (acos(a) * (180 / pi));
		angleB = (acos(b) * (180 / pi));
		angleC = (acos(c) * (180 / pi));
		
		cout << "The Measure of Angle A (in degrees):" << ' ' << angleA << endl;
		cout << "The Measure of Angle B (in degrees):" << ' ' << angleB << endl;
		cout << "The Measure of Angle C (in degrees):" << ' ' << angleC << endl;
		
		//Classification: Scalene, Isosceles, or Equilateral
		
		if ((sideA == sideB) && (sideB == sideC)) 	// First conditional statement classifying triangles through its sides 
		{
			cout << "The Type of Triangle Based on Sides: Equilateral" << endl;
			;
			apothem = (sideA / (2 * sqrt(3)));	 // Apothem is only for regular polygon
			cout << "The Apothem of the Triangle is" << ' ' << apothem << endl;
		}
		
		else if ((sideA == sideB) || (sideB == sideC)) 	// Second condtional statement for classifying triangles through its side		
		{
			cout << "The Type of Triangle Based on sides: Isosceles" << endl;
			
		}
		
		else if ((sideA != sideB) && (sideB != sideC))	// Third condtional statement for triangle classification
		{
			cout << "The Type of Triangle Based on Sides: Scalene" << endl;	
		}
		
		
		//Area and Perimeter
		
		perimeter = (sideA + sideB + sideC); 	// Formula for the perimeter of a triangle
		p = (perimeter/2);		// Value of P for Heron's equation
		area = (sqrt(p * ((p - sideA) * (p - sideB) * (p - sideC))));	 //Heron's Formula
		cout << "The Perimeter of the Triangle:" << ' ' << perimeter << endl;
		cout << "The Area of the Triangle:" << ' ' << area << endl;

		
		
		//Classification: Acute, Right, Obtuse
		
		if (angleA + angleB > angleC)	// First condtional statement for classifying triangles by angles
		{
			cout << "The Type of Triangle Based on Angle: Acute" << endl;
			
		}
		
		else if (angleA + angleB == angleC)		// Second condtional statement for classifying triangles by angles
		{
			cout << "The Type of Triangle Based on Angle: Right" << endl;
			
		}
		
		
		// Last condtional statement for classifying triangles through its angles which represents angles that are not conditioned
		else
		cout << "The Type of Triangle Based on Angle: Obtuse" << endl; 
		
		
		
		//Circumcenter
		if (sideA == sideB && sideA == sideC) 	//First conditional statement to determine circumcenter through value of sides
		{

			circumcenter = (((sideA + sideB + sideC) / 3) / sqrt(3)); 	//Formula of circumcenter with respect to first condition

			cout << "The Radius of the Circumcenter:" << circumcenter;

		} 
		
		else if (sideA != sideB || sideA != sideC) //Second conditional statement to determine circumcenter through value of sides
		{
			circumcenter = (sideA*sideB*sideC) / (sqrt((perimeter) * (sideB+sideC-sideA)*(sideC + sideA - sideB) * (sideA+sideC - sideC)));

			cout << "The Radius of the Circumcenter:" << circumcenter;
		}

		
	}
	
	_getch();
	return 0; 
	
}

