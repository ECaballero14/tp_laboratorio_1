
int suma(int a, int b){
int totalsum;
totalsum=a+b;
return totalsum;
}
int resta(int a, int b){
int totalresta;
totalresta=a-b;
return totalresta;
}
int division(int a, int b){
int totaldiv;
    if(b!=0){
      totaldiv=a/b;
      flag=0;
      }
    else{
      flag=1;
      }
return totaldiv;
}
int multiplicar(int a, int b){
int totalmult;
totalmult=a*b;
return totalmult;
}
int factorial(int A,int B){
   int totalA=1,totalB=1;
   int i=0,j=0;
   for(i=A;i>0;i--){
       totalA=totalA*i;
    }
   for(j=B;j>0;j--){
       totalB=totalB*j;
    }
  return totalA,totalB;
}

