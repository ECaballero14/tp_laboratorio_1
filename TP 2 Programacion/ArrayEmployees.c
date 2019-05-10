#include "ArrayEmployees.h"
#include <stdio.h>
#include <stdlib.h>
int initEmployees(eEmployee* list,int len){
    int retorno=-1;
    if (list != NULL && len>0){
        for (int i=0;i<len;i++){
            list[i].isEmpty=1;
            retorno=0;
        }
    }
    return retorno;
}
/**de la lista existente "list" añade los siguientes parametros en la primer posicion libre del array
*
*
*
*/

int addEmployee(eEmployee* list, int len, int id, char name[],char lastName[],float salary,int sector){


    int retorno=-1;
    if (list!=NULL && len>0){
        strcpy (list[id].name,name);
        strcpy (list[id].lastName,lastName);
        list[id].salary = salary;
        list[id].sector = sector;
        list[id].isEmpty=0;
        retorno=0;
    }
 return retorno;
}
int findEmployeeById(eEmployee* list, int len,int id){
    int retorno=-1;
    if (list!=NULL && len>0){
        for (int i=0;i<len;i++){
            if (list[i].id==id){
                retorno=i;
                break;
            }
        }
    }
 return retorno;
}

int removeEmployee(eEmployee* list, int len, int id){
    int retorno=-1;
    if (list!=NULL && len>0){
        for (int i=0;i<len;i++){
            if (list[i].id==id){
                list[i].isEmpty=1;
                retorno=0;
                break;
            }else {
            retorno=-1;
            }
        }
    }
 return retorno;
}
int sortEmployees(eEmployee* list, int len, int order){
    eEmployee aux;
    int retorno=-1;
    if (list!=NULL && len>0){
        for (int i=0;i<len-1;i++){
            for (int j=i+1;j<len;j++){
                if (order==1){
                    if (strcmp(list[i].lastName,list[j].lastName)>0){
                    aux = list[i];
                    list[i]=list[j];
                    list[j]=aux;
                } else if (strcmp(list[i].lastName,list[j].lastName)==0){
                    if (list[i].sector>list[j].sector){
                        aux = list[i];
                        list[i]=list[j];
                        list[j]=aux;
                        }
                    }
                }else {     //si no se ordena de manera asceebte (1) hacemelo descendente
                if (strcmp(list[i].lastName,list[j].lastName)<0){
                    aux = list[i];
                    list[i]=list[j];
                    list[j]=aux;
                } else if (strcmp(list[i].lastName,list[j].lastName)==0){
                    if (list[i].sector<list[j].sector){
                        aux = list[i];
                        list[i]=list[j];
                        list[j]=aux;
                        }
                    }
                }
            }
        }
    retorno=0;
    }
 return retorno;
}

int printEmployees(eEmployee* list, int length){
    int retorno=-1;
    if (list!=NULL && length>0){
        for (int i=0;i<length;i++){
            if (list[i].isEmpty==0){
            printf("\n");
            printf("%d  %s   %s  %.f  %d",list[i].id,list[i].lastName,list[i].name,list[i].salary,list[i].sector);
            retorno=0;
            }
        }
    }
 return retorno;
}
int PedirRespuesta(){
    int respuesa;
    printf("\nIngrese respuesta");
    ImprimirMenu();
    printf("\n");
    scanf("%d",&respuesa);
    while (respuesa<0 ||respuesa>5 ){
        printf("\nError, reingrese respuesta correcta: ");
        scanf("%d",&respuesa);
    }
    return respuesa;
}
void ImprimirMenu(){
    printf("\n1-Alta");
    printf("\n2-Modificar");
    printf("\n3-Baja");
    printf("\n4-Informar");
}
int obtenerEspacioLibre(eEmployee* list,int len){
    int retorno=-1;
    for (int i=0;i<len;i++){
        if (list[i].isEmpty==1){
            retorno =i;
            break;
        }
    }
    return retorno;
}
int idAModificarRespuesta(){
    int retorno;
    printf("\nIngrese el id del empleado que desea modificar: ");
    scanf("%d",&retorno);

return retorno;
}
int modificarEmploy(eEmployee* list,int len,int id){
    int retorno=-1;
        if (list!=NULL&& len>0){
            printf("\nIngrese Apellido: ");
            fflush(stdin);
            gets(list[id].lastName);

            printf("\nIngrese Nombre: ");
            fflush(stdin);
            gets(list[id].name);

            printf("\nIngrese salario: ");
            scanf("%f",&list[id].salary);

            printf("\nIngrese sector: ");
            scanf("%d",&list[id].sector);
            retorno=0;
        }
    return retorno;
}










