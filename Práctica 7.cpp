//Secci�n de librer�as que se usar�n en este c�digo
#include <stdio.h>

//Declaraci�n de variables globales
int EdadDeAlumnos;

//Declaraci�n de funciones
int main(){
	//Declaraci�n de variables locales
	int EdadDeAlumnos2=33;
	int Edades;
	float operacion;
	
	//Bloque de instrucciones
    printf("Escribe tu edad:");
    
	scanf("%i",&Edades);
	
	operacion=Edades+16;
	
	printf("Tu edad mas 16 es: \n %2.f",operacion);
	
	return 0;
	
}

