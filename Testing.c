
#include <stdio.h>
#include <math.h>

#define PI 3.14159

void getPoints(float *);
double calculateDistance();
double calculatePerimeter();

int main(int argc, char **argv) 
{
    calculateDistance();
    calculatePerimeter();

    // Return 0 for the autograder
    return 0;
}


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

double calculateDistance() 
{
    float point[4];
    double x1, y1, x2, y2;
    getPoints(point);

    x1 = point[0];
    y1 = point[1];
    x2 = point[2];
    y2 = point[3];

    printf("Point #1 entered: x1 = %f; y1 = %f\n", x1, y1);
    printf("Point #2 entered: x2 = %f; y2 = %f\n", x2, y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); //Calculation, with distance formula

    // Output
    printf("The distance between the two points is %f\n", distance);

    return distance;
}

double calculatePerimeter() 
{
    float point[4];
    double x1, y1, x2, y2;
    getPoints(point);

    x1 = point[0];
    y1 = point[1];
    x2 = point[2];
    y2 = point[3];
    
    printf("Point #1 entered: x1 = %f; y1 = %f\n", x1, y1);
    printf("Point #2 entered: x2 = %f; y2 = %f\n", x2, y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); //Calculation, done again with the new coordinates

    double perimeter = PI * distance; // Calculation, using the circumference formula

    // Output
    printf("The perimeter of the city encompassed by your request is %f\n", perimeter);

    return 4.0; // Difficulty rating
}
