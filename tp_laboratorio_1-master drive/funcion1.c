
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
 int bandera=0;
 if(A!=0 || B!=0){
   totaldiv=A/B;
 }
 else
 {
  bandera=1;
 }
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

     int bandera1=0;

     int i,j;

   if(A<0 || A==0){

       bandera1=1;

      }

    else if(B<0 || B==0){

       bandera1=2;
     }

    else

    {

        if(bandera1!=1){

           int i=0;

          for(i=A;i>0;i--){

          totalfacta=totalfacta*i;

            }
          }
       else if(bandera1!=2){

         int j=0;

         for(i=B;j>0;j--){

       totalfacb=totalfacb*j;

       }
      }
     }
   return totalfacta,totalfacb;
}








