// C++ Program that computes students academic performances in class.
#include <iostream>
#include <conio.h>
#include <cstring> // Type of Header File that defines several functions to manipulate C Strings and Arrays.
#include <cmath>

using namespace std;

int main()
{
	//Declaration of arrays and variables to be used throughout the program.
    float quiz[50], act[50], prelimE[50], finalE[50], finalG[50], gpa[50], componentA[50], componentB[50], componentC[50], componentD[50], componentE[50];
	int num, input, a, b, c, d, e, f, g;
    string name[50], grd[50], h;
    
    input = 0;
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    
    cout << "Grade Components are divided into Quizzes, Activities, and Major Examinations: " << endl;
    //Do-While Loop was utilized to enter the data of 50 students per grade component.
    do
	{
       
		cout << "Student Class Number: "; cin >> num;
		cout << "Student Name: "; cin >> name[input]; 
    	
    	//Reading Data into an Array for the Grade Components.
        cout << "Grade Component: Quizzes(450 points): ";
        cin >> quiz[input];
        cout << "Grade Component: Activities(1,350 points): ";
        cin >> act[input];
        cout << "Grade Component: Preliminary Examination(100 points): ";
        cin >> prelimE[input];
        cout << "Grade Component: Final Examination(100 points): ";
        cin >> finalE[input];
        cout << endl;
        
        input++;
        
        
    }
    while (input < 51);
    
    //Accessing the Arrays with Formulas for each grade components.
    for(input = 0 ; input < 5; input++)
    {
    	componentA[input] = (((quiz[input] / 450) * 100) * 0.3);
    	componentB[input] = (((act[input] / 1350) * 100) * 0.15);
    	componentC[input] = (prelimE[input] * 0.25);
    	componentD[input] = (finalE[input] * 0.3);
    	finalG[input] = (componentA[input] + componentB[input] + componentC[input] + componentD[input]);
	}
    
    
    
    //Do-While Loop for the transmutation of raw grades and identification of students' standing (passed or failed).
    do
	{
    	//Conditional statemnet to satisfy the set conditions for grades and to distinguish if the students passed or failed.
    	if (finalG[b] > 95.56)
		{
			gpa[b] = 1.00;
			grd[b] = "passed";
		}
		
		else if (finalG[b] >= 91.12 && finalG[b] <= 95.56)
		{
			gpa[b] = 1.25;
			grd[b] = "passed";
		}
		
		else if (finalG[b] >= 86.68 && finalG[b] <= 91.11)
		{
			gpa[b] = 1.50;
			grd[b] = "passed";
		}
		
		else if (finalG[b] >= 82.23 && finalG[b] <= 86.67)
		{
			gpa[b] = 1.75;
			grd[b] = "passed";
		}
		
		else if (finalG[b] >= 77.79 && finalG[b] <= 82.22)
		{
			gpa[b] = 2.00;
			grd[b] = "passed";
		}
		
		else if (finalG[b] >= 73.34 && finalG[b] <= 77.78)
		{
			gpa[b] = 2.25;
			grd[b] = "passed";
		}
		
		else if (finalG[b] >= 68.90 && finalG[b] <= 73.33)
		{
			gpa[b] = 2.50;
			grd[b] = "passed";
		}
		
		else if (finalG[b] >= 64.45 && finalG[b] <= 68.89)
		{
			gpa[b] = 2.75;
			grd[b] = "passed";
		}
		
		else if (finalG[b] >= 60 && finalG[b] <= 64.44)
		{
			gpa[b] = 3.00;
			grd[b] = "passed";
		}
		
    	else if (finalG[b] < 60)
    	{
    		gpa[b] = 5.00;
    		grd[b] = "failed";
		}
		
		b++;
	} 
	while (b < 51);
	
	//Do-While Loop For Accessing each students' final raw grades and transmuted grade.
	do
	{
		cout << "Name: " << name[c];
		cout << "\nYour Raw Grade is: " << finalG[c] << endl;
		cout << "Your Transmuted Grade is: " << gpa[c] << endl;
		cout << "You have " << grd[c] << "." << endl;
		
		c++;
	}
	while (c < 51);
	//Selection Sorting to determine the top 10 performing students in class.
	for (e = 0; e < 10; e++)
	{
	    for (f = e + 1; f < 10; f++)
	    {
	        if (finalG[e] < finalG[f])
	        {
	            g = finalG[e];
	            finalG[e] = finalG[f];
	            finalG[f] = g;
	            
	            h = name[e];
	            name[e] = name[f];
	            name[f] = h;
	        }
	    }
	}
	
	//Displaying the Sorted data.
	cout << "The top 10 performing students are: " << endl;
	for (e = 0; e < 10; e++)
	{
	    cout << name[e] << endl;
	}
	
	
	
	_getch();
	return 0;
}
