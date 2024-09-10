#include <stdio.h>
#include <math.h>
#define PI 3.14159

// Funtion for distance
// Includes questions and input
double calculateDistance(){
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;

    printf("What is the x coordinate for the first point? \n");
    scanf("%d", &x1);
    printf("What is the y coordinate for the first point? \n");
    scanf("%d", &y1);

    printf("Point #1 entered: x1 = %d; y1 = %d \n",x1,y1);


    printf("What is the x coordinate for the second point? \n");
    scanf("%d", &x2);
    printf("What is the y coordinate for the second point? \n");
    scanf("%d", &y2);

    printf("Point #2 entered: x2 = %d; y2 = %d \n \n",x2,y2);
    

    double distance = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    printf("The distance between the two points is %.3lf \n \n", distance);

    return distance;
}

// Function for finding perimeter
// Uses distance function
double calculatePerimeter(){
    double perimeter = PI * calculateDistance();
    printf("The perimeter of the city encompassed by your request is %.3lf \n \n", perimeter);
    return 2.0;
}
// Function for finding area
// Uses distance function
double calulateArea(){
    double distance = calculateDistance();
    double area = (PI * pow(distance/2,2));
    printf("The area of the city encompassed by your request is %.3lf\n \n",area);
    return 2.0;
}

// Function for width
// Calls calculateDistance
double calculateWidth(){
    double width = calculateDistance();
    printf("The width of the city encompassed by your request is %.3lf \n", width);
    return 1.0;
}

// Function for height
// Calls calculateDistance
double calculateHeight(){
    double height = calculateDistance();
    printf("The height of the city encompassed by your request is %.3lf \n \n", height);
    return 1.0;
}






int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calulateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}