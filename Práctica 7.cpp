//Sección de librerías que se usarán en este código
#include <stdio.h>

//Declaración de variables globales
int EdadDeAlumnos;

//Declaración de funciones
int main(){
	//Declaración de variables locales
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

