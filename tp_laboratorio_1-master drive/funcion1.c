

/*Programa Calculadora que da un menu de opciones:

  Las operaciones matematicas se haran por medio de llamadas a sus funciones creadas.

  Para salir del programa se elegir la opción 5 del menu.
*/

int suma(int A,int B){
 int totalsuma;
 totalsuma=A+B;
 return totalsuma;
}

int resta(int A,int B){
 int totalresta;
 totalresta=A-B;
 return totalresta;
}

int division(int A,int B){
 int totaldiv;
 totaldiv=A/B;
 return totaldiv;
}
int multiplicar(int A,int B){
 int totalmult;
 totalmult=A*B;
 return totalmult;
}

int factorial(int A,int B){

     int totalfacta=1;

     int totalfacb=1;

     int i,j;

     for(i=A;i>0;i--){
          totalfacta=totalfacta*i;
         }
    for(i=B;j>0;j--){
       totalfacb=totalfacb*j;
       }
   return totalfacta,totalfacb;
}



