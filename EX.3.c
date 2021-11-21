#include<stdio.h>
#include <math.h>
int main()
{
    float altura,base,Area;
    printf ("Digite a altura e a base para descobrir a area do triangulo isosceles:\n");
    scanf ("%f %f", &altura, &base);
    Area = ((altura * base)/2);
    printf ("Area do triangulo: %.0f", Area);
}