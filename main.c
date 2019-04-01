#include <stdlib.h>
#include "matematicas1.h"
#include "funciones1.h"

int main()
{
    int flag=0;

    int A,B,X,Y;

    int menu;

    int resultsuma=0;

    int resulresta=0;

    int resultdiv=0;

    int resultmult=0;

    int resultfacta=1;

    char rta='S';

    printf("\n\\\\BIENVENIDO A Programa CALCULADORA----////\n");

    do{
        //menu de opciones
        printf("\n1- Ingresar primer operando (A=x)\n");
        printf("2- Ingresar segundo operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Salir\n");
        scanf("%d",&menu);

        switch(menu){

        //ingreso 1er operando
        case 1:
            printf("\nIngrese primer operando: ");
            scanf("%d",&X);
            A=X;
            break;
        //ingreso segundo operando
        case 2:
            printf("\nIngrese  operando: ");
            scanf("%d",&Y);
            B=Y;
            break;
      case 3:
              resultsuma=suma(A,B);
              break;
       case 4:
              resulresta=resta(A,B);

              break;
       case 5:
               resultdiv=division(A,B);

                break;
       case 6:
               resultmult=multiplicar(A,B);

               break;
        case 7:
               resultfacta=factorial(A,B);

               break;

        case 8:

               printf("\nQuiere continuar en la calculadora[S/N]:");

               scanf("%c",&rta);

               break;

       default:

            printf("Error de ingreso operacion matematica.Reingrese la correcta");
      }

    }while(rta!='S');

       return 0;
 }

