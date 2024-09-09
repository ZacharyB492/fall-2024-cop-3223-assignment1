#include <stdio.h>
#include <math.h>
#define pi 3.14159

double askForUserInput(){
    
} 

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
    printf("The distance between the two points is %lf \n \n", distance);

    return distance;
}


double calculatePerimeter(){
    double perimeter = pi * calculateDistance();
    printf("The perimeter of the City encompassed by your request is %lf \n \n", perimeter);
    return 2.0;
}

double calulateArea(){
    double distance = calculateDistance();
    double area = (pi * pow(distance/2,2));
    printf("The area of the City encompassed by your request is %lf\n \n",area);
    return 2.0;
}

double calculateWidth(){
    double width = calculateDistance();
    printf("The width of your city is %lf \n", width);
    return 1.0;
}

double calculateHeight(){
    double height = calculateDistance();
    printf("The height of your city is %lf \n \n", height);
    return 1.0;
}






int main() {
    calculateDistance();
    calculatePerimeter();
    calulateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}