#include <stdio.h>;
#include <stdlib.h>;
#include "funcionesmatematicas.c";
#include "otrasfunciones.h";


void main(void)
{

int flag=0;

int A,B,X,Y;

int ope;

int resultsuma=0;

int resulresta=0;

int resultdiv=0;

int resultmult=0;

int resultfacta=1,resultfactb=1;

char rta='S';

     do{
       printf("\nIngrese primer numero:");

       scanf("%d",&X);

       A=X;

       printf("\nIngrese segundo numero:");

       scanf("%d",&Y);

       B=Y;

       printf("\nIngrese una operacion matematica a realizar 1-Sumar , 2-Restar , 3-division , 4-multiplicacion y 5 factorial:");

       scanf("%d",&ope);

       switch(ope){
       case 1:
              resultsuma=suma(A,B);

              break;
       case 2:
              resulresta=resta(A,B);

              break;
       case 3:
              resultdiv=division(A,B);

              break;
       case 4:
              resultmult=multiplicar(A,B);

              break;
       case 5:

               resultfacta=factorial(A,B);

               resultfactb=factorial(A,B);

               break;
       default:
               printf("Error de ingreso operacion matematica.Reingrese la correcta");
       }
       printf("\nReingrese numeros.Continuar[S/N]:");

       fflush(stdin);

       scanf("%c",&rta);

       rta=toupper(rta);

     }while(rta!='S');

      printf("\nLa suma total es: %d",resultsuma);

      printf("\nLa resta total es: %d",resulresta);

      if(flag==1){

        printf("\nNo se puede dividir por cero");
      }

      else if (flag==0){

        printf("\nLa division total es: %d",resultdiv);
      }

      printf("\nLa multplicacion total es: %d",resultmult);

      printf("\nEl factorial de A es: %d",resultfacta);

      printf("\nEl factorial de B es: %d",resultfactb);

      return 0;

}

