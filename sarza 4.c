#include <stdio.h>
int main ()
{
    int d1, d2, d3, dt, aux;
    char p1[30], p2[30], p3[30];
    printf ("ingrese el nombre de las tres personas");
    scanf ("%s", p1);
    printf ("ingrese en orden el dinero que se invirtio");
    scanf ("%d %d %d", &d1, &d2, &d3);
    dt = d1 + d2 + d3;
    aux = d1 * 100;
    aux = aux / dt;
    printf ("el porcentaje de %s", p1);
    printf ("es de %d", aux);


    return 1;
}