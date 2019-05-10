#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayEmployees.h"
#define LEN 1000

int main()
{
eEmployee list[LEN];

char auxNombre[50];
char auxApellido[50];

float salarioAux;
int sectorAux;

int idModificar;
int idEliminar;

initEmployees(list,LEN);
int respuesta=1;
int indexFree;
int flagResto=0;


do{
    if (flagResto){
    respuesta=PedirRespuesta();
    }

    switch (respuesta){
    case 1:

        indexFree= obtenerEspacioLibre(list,LEN);
        if (indexFree!=-1){

        printf("\nIngrese Apellido: ");
        fflush(stdin);
        gets(auxApellido);

        printf("\nIngrese Nombre: ");
        fflush(stdin);
        gets(auxNombre);

        printf("\nIngrese salario: ");
        scanf("%f",&salarioAux);

        printf("\nIngrese sector: ");
        scanf("%d",&sectorAux);

        addEmployee(list,LEN,indexFree,auxNombre,auxApellido,salarioAux,sectorAux);
        flagResto=1;
        }
        break;
    case 2:
        printEmployees(list,LEN);
        idModificar = idAModificarRespuesta();
        if (findEmployeeById(list,LEN,idModificar)!=-1){
        modificarEmploy(list,LEN,idModificar);
        }
        break;
    case 3:
        printEmployees(list,LEN);
        printf("\nIngrese el id del empleado que desea eliminar:");
        scanf("%d",&idEliminar);
        removeEmployee(list,LEN,idEliminar);

        break;
    case 4:
        sortEmployees(list,LEN,1);
        printEmployees(list,LEN);
        break;

        }
    }while(respuesta);
    return 0;
}
