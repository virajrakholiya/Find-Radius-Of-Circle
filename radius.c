#include <stdio.h>

void main()
{
    float radius,area;

    printf("Enter the radius\n");
    scanf("%f",&radius);

    area = 3.14*radius*radius;

    printf("Area of circle :  %f\n",area);
}