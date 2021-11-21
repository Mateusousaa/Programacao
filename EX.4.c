#include<stdio.h>
#include <math.h>
int main()
{ //DIGITE 4 NUMEROS E FAÇA A MÉDIA ARITIMÉTICA DESSES NUMEROS.
    float v1, v2, v3, v4, media;
    printf ("Digite 4 numeros para fazer sua media aritmetica:\n");
    scanf ("%f %f %f %f", &v1, &v2, &v3, &v4);
    media = ((v1 + v2 + v3 + v4)/4);
    printf ("Media aritmetica: %.2f", media);
}