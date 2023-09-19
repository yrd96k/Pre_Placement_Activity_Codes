#include<stdio.h>

int main()
{
    float Radius = 0.0f;
    const float PI = 3.14;
    float Area = 0.0f;

    printf("Enter the Size of Radius : \n"); 
    scanf("%f", &Radius);

    Area = PI * Radius*Radius;

    printf("Area of the circle is : %f\n", Area);

    return 0;

}