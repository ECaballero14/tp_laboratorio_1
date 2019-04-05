#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include "funcion.h"

float sumar (float A, float B)
{
    float resultsuma;
    resultsuma = A+B;
    return resultsuma;
}

float restar (float A, float B)
{
    float resultresta;
    resultresta = A-B;
    return resultresta;
}

float division(float A, float B)
{
    float resultdiv;
    resultdiv = (float)A/B;
    return(resultdiv);
}

float multiplicacion(float A, float B)
{
    float resultmul ;
    resultmul = A*B;
    return resultmul;
}

unsigned long int factorial1(int A)
{
    unsigned long int resultadofactorial1;
    while(A>=1){
        switch(A)
        case 1:
            return 1;
        resultadofactorial1=A* factorial1(A-1);
        return (resultadofactorial1);
    }
    return 0;
}



