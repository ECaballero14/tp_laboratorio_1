#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include "funcion.h"

int main()
{
/**<  */
    char continuar='S';
    float primernumero=0,segundonumero=0,resultsuma,resultresta,resultmult,resultdiv;
    unsigned long int resultfactA, resultfactB;
    int menu;

    do{
        printf("\Bienvenido al Programa Calculadora\n");
        printf("\n1- Ingresar 1er Operando (A=%.2f)\n",primernumero);
        printf("\n2- Ingresar 2do Operando (B=%.2f)\n\n",segundonumero);
        printf("\n3- Calcular todas las operacione\n\n");
        printf("   Suma (A+B)\n");
        printf("   Resta (A-B)\n");
        printf("   Division (A/B)\n");
        printf("   Multiplicacion(A*B)\n");
        printf("   Factorial (A! & & B!)\n\n");
        printf("\n4- Informar resultados\n\n\n");
        printf("\n5- Salir\n\n");
        printf("%c  OPCION ELEGIDA: ");
        fflush(stdin);
        scanf("%d",&menu);


        switch(menu)
        {

        case 0:
            continuar = 'N';
            break;

        case 1:
            printf("\nIngresar 1er Operando: "); /* Ingreso primer operando */
            fflush(stdin);
            scanf("%f",&primernumero);
            system("cls");
            break;

        case 2:
            printf("\nIngrese 2do Operando: ");  /* Ingreso segundo operando */
            fflush(stdin);
            scanf("%f",&segundonumero);
            system("cls");
            break;

        case 3:
            /*Calculo todas las operanciones */;
            system("cls");
            resultsuma=sumar(primernumero,segundonumero);
            resultresta=restar(primernumero,segundonumero);
            resultmult=multiplicacion(primernumero,segundonumero);
            resultdiv=division(primernumero,segundonumero);
            resultfactA=factorial1(primernumero);
            resultfactB=factorial1(segundonumero);
            break;
        case 4:

            system("cls");

            printf("\t Informo Resultados\n");
            //SUMA
            printf("\nEl resultado de (A+B) es: .2%f\n\n",resultsuma);
            //RESTA
            printf("El (A-B) es: %.2f\n\n",resultresta);
            //DIVISION
            if (segundonumero==0)
            {
                printf("%c No se puede divir por cero\n\n");
            }
            else
            {
                printf("El resultado de (A/B) es: %.2f\n\n",resultdiv);
            }
            //MULTIPLICACION
            printf("El resultado de (A*B): %.2f\n\n", resultmult);
            //FACTORIAL DE A
            if (primernumero<1) /*Comprueba que el número entero sea mayor a 0, de lo contrario muestra el error por pantalla */
            {
                printf("El factorial A no se aplica por que el numero es menor a 1\n\n");
            }
            else if (primernumero>16)
            {
                printf("El factorial A no se aplica por que el resultado es demasiado grande para calcular su factorial, max 16\n\n");
            }
            else
            {
                printf("EL resultado del factorial de A ES: %ld\n\n",resultfactA);
            }
            //FACTORIAL DE B
            if (segundonumero<1){  /*Comprueba que el número entero sea mayor a 0, de lo contrario muestra el error por pantalla */
                printf("El factorial B no se aplica por que el numero es menor a 1\n\n");
            }
            else if (segundonumero>16)
            {
                printf("El factorial B no se aplica por que el resultado es demasiado grande para calcular su factorial, max 16\n\n");
            }
            else
            {
                printf("EL resultado del factorial de B ES: %ld\n\n",resultfactB);
            }
            system("pause");
            system("cls");
            break;

        case 5:

              printf("Salio del programa");

              continuar='N';

        default:

            //Elegio opcion incorrecta del menu
            if(menu!=1 || menu!=2 || menu!=3 || menu!=4 || menu!=5 ){

              printf("Elegir una opción del menu correcta");
            }
              system("cls");
        }

    }while(continuar=='S');

    return 0;
}

