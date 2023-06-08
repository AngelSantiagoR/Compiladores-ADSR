#include <stdio.h>
#include <math.h>

int main(){

    double a,b,c, discriminant, root1, root2; 

    printf("Ingresa el valor de a\n");
    scanf("%lf",&a);
    printf("Ingresa el valor de b\n");
    scanf("%lf",&b);
    printf("Ingresa el valor de c\n");
    scanf("%lf",&c);

    discriminant = (b*b) - 4*a*c;

    if(discriminant == 0){
        root1 = -b/2*a;

        printf("Root1:  %f\n", root1);

        
    }

    else if(discriminant > 0){
        root1 = (-b - pow((discriminant),(1/2)))/2*a;

        root2 = (-b + pow((discriminant),(1/2)))/2*a;

        printf("Root1: %f\n", root1);
        printf("Root2: %f\n", root2);
    }
    else if(discriminant < 0){
        printf("No hay raices reales validas\n");
    }

}
