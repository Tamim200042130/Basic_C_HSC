#include <stdio.h>
#include <math.h>
#include<conio.h>


int main() {
    float a, b, c, s, area;

    // Input lengths of the triangle
    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);
    printf("Enter the value of c: ");
    scanf("%f", &c);

    // Check if the lengths form a valid triangle
    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
        printf("\n");
        printf("Invalid input: lengths do not form a triangle.\n");
        //return 1; // Exit with error code
    }

    else{
        // Calculate the semi-perimeter
    s = (a + b + c) / 2;

    // Calculate the area using Heron's formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    // Output the area of the triangle
    printf("\n");
    printf("Area of the triangle = %0.4f\n", area);

    }

    getch();

    return 0;
}
