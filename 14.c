#include <stdio.h>
void area_circle(float, float *, float *);

int main()
{
    float radius, area, permiter;
    printf("Enter the Radius\n");
    scanf("%f", &radius);
    area_circle(radius, &area, &permiter);
    printf("Area of Circle = %f\n", area);
    printf("Permiter of Circle = %f\n", permiter);

    return 0;
}
void area_circle(float radius, float *area, float *permiter)
{

    *area = 3.14 * radius * radius;
    *permiter = 2 * 3.14 * radius;
}
