#include <stdio.h>

int main ()

{
    int p1, p2, p3, p4, precio, aux;
    printf ("ingrese el precio del articulo");
    scanf ("%d",&precio);
    p1 = precio / 10;
    p1 = precio - p1;
    printf ("El precio con la promo 1 es de: %d ", p1);
    
    p2 = precio / 10;
    p2 = precio + p2;
    p3 = precio / 15;
    p3 = precio + p3;
    p4 = precio

    printf ( " el precio de la promo 2 es %d,", p2, "/t" );
    printf ( " 50 por ciento al contado y el resto en 2 cuotas iguales");
    printf ( " el precio de la promo 3 es de %d ", p3);
    printf ( " de este total 25 por ciento al contado y el resto en 5 cuotas iguales");
    printf ("El precio de la promo 4 es de %d " , p4 );

     return 0;
}
