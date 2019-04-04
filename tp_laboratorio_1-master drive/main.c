#include <stdio.h>
#include <stdlib.h>
#include "funcion1.h"

int main()
{
    int flag=0;

    int flag1=0;

    int flag2=0;

    int A,B,X,Y;

    int  menu;

    int resultsuma=0;

    int resultresta=0;

    int resultdiv=0;

    int resultmult=0;

    int resultfacta=1,resultfactb=1;

    char resultados,ope;

    char rta='N';

    printf("\n\\\\.....Bienvenido al Programa de la Calcuadora...////\n");

    printf("\n1. Ingresar 1er operando(A=X).");
    printf("\n2. Ingresar 2do operando(B=Y).");
    printf("\n3. Calcular todas las operaciones:\n");
    printf("     a)Calcular la suma(A+B).\n");
    printf("     b)Calcular la resta(A-B).\n");
    printf("     c)Calcular la ||division(A/B)\n");
    printf("     d)Calcular la multiplicacion(A*B)\n");
    printf("     e)Calcular el factorial (A!) y de (B!).");
    printf("\n4. Informar resultados:\n");
    printf("     a)El resultado de A+B es:\n");
    printf("     b)El resultado de A-B es:\n");
    printf("     c)El resultado de A/B es:\n");
    printf("     d)El resultado de A*B es:\n");
    printf("     e)El resultado de A es: y el factorial de B es:");
    printf("\n5. Salir.\n");

    //Permito al usuario que legija las opciones de menu correspondientes);

    printf("\nLa opcion que eligio del menu principal es la: ");

    scanf("%d",&menu);

    do{

        switch(menu){


             case 1:
                  printf("\nIngresar 1er operando: ");

                  scanf("%d",&X);

                  A=X;

                  break;

              case 2:
                  printf("\nIngresar 2do operando: ");

                  scanf("%d",&Y);

                  B=Y;

                  break;

             case 3:

                  printf("\nCalculo todas las operaciones:\n ");

                  fflush(stdin);

                  printf("\nEligio la opcion del submenu Calculo todas las operaciones: ");

                  scanf("%c",&ope);

                  switch(ope){

                  case 'a':
                          resultsuma=suma(A,B);
                          break;
                  case 'b':
                          resultresta=resta(A,B);
                          break;
                  case 'c':
                           if(A!=0 || B!=0){
                             resultdiv=division(A,B);
                             flag1=0;
                             break;
                           }
                           flag1=1;
                  case 'd':
                           resultmult=multiplicar(A,B);
                           break;
                  case 'e':

                          if(A<0 || A==0||B<0 || B==0)

                          {
                             flag2=0;
                          }

                          else

                          {
                            resultfacta=factorial(A,B);

                            resultfactb=factorial(A,B);

                            flag2=1;
                          }

                          break;
                  default:

                    printf("\nOpcion incorrecta del submenu elegida.Reingrese la opcion.\n ");

                    flag=1;

                    break;
                  }

                  break;

           case 4:


                  printf("\nInformar los resultados:\n ");

                  fflush(stdin);

                  printf("\nEligio la opcion del submenu Informar resultados: ");

                  scanf("%c",&resultados);

                  switch(resultados){

                  case  'a':
                        printf("\na)El resultado de A+B es %d:\n ",resultsuma);
                        break;
                  case  'b':
                        printf("\nb)El resultado de A-B es %d:\n ",resultresta);
                        break;
                  case  'c':
                        if(flag1==1)
                        {
                            printf("\nNo se puede dividir por cero");
                        }

                        if(flag1==0)
                        {
                            printf("\nc)El resultado de A/B es %d:\n ",resultdiv);
                        }
                        break;
                  case  'd':
                        printf("\nd)El resultado de A*B es %d:\n ",resultmult);
                        break;
                  case  'e':
                        if(flag2==0)
                        {

                          printf("No se puede hacer su factorial correspodiente");
                        }

                        if(flag2==1)
                        {

                          printf("\ne)El resultado de A es %d: y el factorial de B es %d: \n",resultfacta,resultfactb);
                        }

                        break;

                  default:

                    printf("\nOpcion incorrecta del submenu elegida.Reingrese la opcion.\n ");

                    flag=1;

                    break;

                  }

                  break;

           case 5:
                  rta='S';

                  printf("\nSalio del programa\n ");

                  break;

           default:

                  printf("\nOpcion incorrecta del menu elegida.Reingrese la opcion.\n ");

                  flag=1;

                  break;
         }

        if(flag==1 || flag==0) {

          if(rta!='S'){

            printf("\nEliga una nueva opcion del menu principal : ");

            scanf("%d",&menu);
          }
        }

       }while(rta!='S');

        return 0;

  }


