#include <stdio.h>
#include<stdbool.h>
int main(){
    int i = 8, j = 5;
    float  x = 0.005, y = -0.01;
    char c = 'c', d = 'd';

    int A= (3 * i - 2 * j) % (2 * d - c);
    printf("a:= %i\n",A);

    int B = (2*((i/5)+(4*(j-3))%(i+j-2)));
    printf("b:= %i\n", B);

    float C = ((i-3*j)%(c+2*d)/(x-y));
    printf("c:= %f\n", C);

    int D = (-(i+j));
    printf("d:= %i\n", D);

    int E = (++i);
    printf("e:= %i\n", E);
    
    int F = (i++);
    printf("f:= %i\n", F);

    int G = (-j);
    printf("g:= %i\n", G);

    float H = (++x);
    printf("h:= %f\n", H);

    float I = (y--);
    printf("i:= %f\n", I);

    bool J = (i<=j);
    printf("j: = %d\n",J);

    bool K = (c>d);
    printf("k: = %d\n",K);

    bool L = (x>0);
    printf("l: = %d\n",L);
    
    bool M = (x<y);
    printf("m: = %d\n",M);
    
    bool N = (j !=6);
    printf("n: = %d\n", N);

    bool O = (c == 99);
    printf("o: = %d\n",O);

    bool P = (5*(i+j)>'c');
    printf("p: = %d\n",P);
    return 0;
}