#include <stdio.h>
#include <math.h>

// Preprocessor directive for PI
#define PI 3.14159

// Calling out the fractures
void printPoints(double x1, double y1, double x2, double y2);
double calculateDistance(double x1, double y1, double x2, double y2);
double calculatePerimeter(double distance);
double calculateArea(double distance);
double calculateWidth(double x1, double x2);
double calculateHeight(double y1, double y2);

int main(void) {
    double x1, y1, x2, y2;

    // Get user input for the points
    printf("Enter the coordinates for Point #1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the coordinates for Point #2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    printPoints(x1, y1, x2, y2);

    // Call the functions with the provided points
    double distance = calculateDistance(x1, y1, x2, y2);
        printPoints(x1, y1, x2, y2);
    calculatePerimeter(distance);
        printPoints(x1, y1, x2, y2);
    calculateArea(distance);
        printPoints(x1, y1, x2, y2);
    calculateWidth(x1, x2);
        printPoints(x1, y1, x2, y2);
    calculateHeight(y1, y2);

    // Return 0 for the autograder
    return 0;
}

void printPoints(double x1, double y1, double x2, double y2) {
// This function was made given the disclaimers stating that "Must use a function (like calculateDistance) within to avoid repeating code."
    printf("Point #1 entered: x1 = %f; y1 = %f\n", x1, y1);
    printf("Point #2 entered: x2 = %f; y2 = %f\n", x2, y2);
}

// Function to calculate distance between two points
double calculateDistance(double x1, double y1, double x2, double y2) {
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); //Calculation, with distance formula

    // Output
    printf("The distance between the two points is %f\n", distance);

    return distance;
}

// Function to calculate perimeter of a circle (assuming distance is the diameter)
double calculatePerimeter(double distance) {
    double perimeter = PI * distance; // Calculation, using the circumference formula

    // Output
    printf("The perimeter of the city encompassed by your request is %f\n", perimeter);

    return 4.0; // Difficulty rating
}

// Function to calculate area of a circle (assuming distance is the diameter)
double calculateArea(double distance) {
    double radius = distance / 2.0;
    double area = PI * pow(radius, 2); // Calculation, using formula of the area of a cirle 

    // Output
    printf("The area of the city encompassed by your request is %f\n", area);

    return 4.0; // Difficulty rating
}

// Function to calculate width (x-axis difference)
double calculateWidth(double x1, double x2) {
    double width = fabs(x2 - x1);

    // Output
    printf("The width of the city encompassed by your request is %f\n", width);

    return 4.0; // Difficulty rating
}

// Function to calculate height (y-axis difference)
double calculateHeight(double y1, double y2) {
    double height = fabs(y2 - y1);

    // Output
    printf("The height of the city encompassed by your request is %f\n", height);

    return 4.0; // Difficulty rating
}
