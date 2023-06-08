/*Declarar dos contadores, uno para el numero de 
lineas el otro es para el numero de caracteres*/

%{
    int no_of_lines = 0;
    int no_of_chars = 0;
%}

/***Regla1: cuenta el numero de lineas, 
Regla 2: cuenta el numero de caracteres
y la regla 3 especifica cuando detenerse
tomar entrada***/
%%
\n      ++no_of_lines;
.       ++no_of_chars;
end     return 0;
%%

/***Seccion del codigo de usuario***/
int yywrap(){}
int main(int argc, char **argv)
{

    yylex();
    printf("Numero de lineas = %d, Numero de caracteres = %d\n",
            no_of_lines,no_of_chars);

return 0;
}