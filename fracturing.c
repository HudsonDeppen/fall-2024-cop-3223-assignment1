//********************************************************
// fracturing.c
// Author: Hudson Deppen
// Student UCFID: 5588676
// Date: 10/14/24
// Class: COP 3223, Professor Parra
//
// Purpose: Program to demonstrate my ability to house many internal
// functions, ”fracturing” my code.
//
// Input: User, two coordinates for all five functions 
//
// //********************************************************

#include <stdio.h>
#include <math.h>

// Preprocessor directive for PI
#define PI 3.14159

// Calling out the fractures
void getPoints(float *);
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

int main(int argc, char **argv) 
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    // Return 0 for the autograder
    return 0;
}


//********************************************************
// void getPoints()
//
// Purpose:             Get user input for the points
// Output:              The two coordinates
// Precondition:        None
// Postcondition:       None
//********************************************************

void getPoints(float *point) 
{
    double x1, y1, x2, y2;

    // Get user input for the points
    printf("Enter the coordinates for Point #1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the coordinates for Point #2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    point[0] = x1;
    point[1] = y1;
    point[2] = x2;
    point[3] = y2;
}
    

//********************************************************
// double calculateDistance()
//
// Purpose:             Function to calculate distance between two points
// Output:              The two coordinates and the total distance
// Precondition:        None
// Postcondition:       None
//********************************************************

double calculateDistance() 
{
    float point[4];
    double x1, y1, x2, y2;
    getPoints(point);

    x1 = point[0];
    y1 = point[1];
    x2 = point[2];
    y2 = point[3];

    // Output
    printf("Point #1 entered: x1 = %f; y1 = %f\n", x1, y1);
    printf("Point #2 entered: x2 = %f; y2 = %f\n", x2, y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); //Calculation, with distance formula

    // Output
    printf("The distance between the two points is %f\n", distance);

    return distance;
}


//********************************************************
// double calculatePerimeter() 
//
// Purpose:             Function to calculate perimeter of a circle (assuming distance is the diameter)
// Output:              The two coordinates and the perimeter 
// Precondition:        None
// Postcondition:       None
//********************************************************

double calculatePerimeter() 
{
    float point[4];
    double x1, y1, x2, y2;
    getPoints(point);

    x1 = point[0];
    y1 = point[1];
    x2 = point[2];
    y2 = point[3];
    
    // Output
    printf("Point #1 entered: x1 = %f; y1 = %f\n", x1, y1);
    printf("Point #2 entered: x2 = %f; y2 = %f\n", x2, y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); //Calculation, done again with the new coordinates

    double perimeter = PI * distance; // Calculation, using the circumference formula

    // Output
    printf("The perimeter of the city encompassed by your request is %f\n", perimeter);

    return 4.0; // Difficulty rating
}


//********************************************************
// double calculateArea() 
//
// Purpose:             Function to calculate area of a circle
// Output:              The two coordinates and the area 
// Precondition:        None
// Postcondition:       None
//********************************************************

double calculateArea() 
{
    float point[4];
    double x1, y1, x2, y2;
    getPoints(point);

    x1 = point[0];
    y1 = point[1];
    x2 = point[2];
    y2 = point[3];
    
    // Output
    printf("Point #1 entered: x1 = %f; y1 = %f\n", x1, y1);
    printf("Point #2 entered: x2 = %f; y2 = %f\n", x2, y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); //Calculation of distance formula

    double radius = distance / 2.0;
    double area = PI * pow(radius, 2); // Calculation using formula of the area of a cirle 

    // Output
    printf("The area of the city encompassed by your request is %f\n", area);

    return 4.0; // Difficulty rating
}


//********************************************************
// double calculateArea() 
//
// Purpose:             Function to calculate width, computing the diameter using distance formula
// Output:              The two coordinates and the width 
// Precondition:        None
// Postcondition:       None
//********************************************************

double calculateWidth() 
{
    float point[4];
    double x1, y1, x2, y2;
    getPoints(point);

    x1 = point[0];
    y1 = point[1];
    x2 = point[2];
    y2 = point[3];

    // Output
    printf("Point #1 entered: x1 = %f; y1 = %f\n", x1, y1);
    printf("Point #2 entered: x2 = %f; y2 = %f\n", x2, y2);

    double width = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); //Calculation, this is the distance formula

    // Output
    printf("The width of the city encompassed by your request is %f\n", width);

    return 2.0; // Difficulty rating
}


//********************************************************
// double calculateArea() 
//
// Purpose:             Function to calculate height, computing the diameter using distance formula
// Output:              The two coordinates and the width 
// Precondition:        None
// Postcondition:       None
//********************************************************

double calculateHeight() 
{
    float point[4];
    double x1, y1, x2, y2;
    getPoints(point);

    x1 = point[0];
    y1 = point[1];
    x2 = point[2];
    y2 = point[3];
    
    // Output
    printf("Point #1 entered: x1 = %f; y1 = %f\n", x1, y1);
    printf("Point #2 entered: x2 = %f; y2 = %f\n", x2, y2);

    double height = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); //Calculation, this is the distance formula

    // Output
    printf("The height of the city encompassed by your request is %f\n", height);

    return 2.0; // Difficulty rating
}
