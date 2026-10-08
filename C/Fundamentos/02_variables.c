#include <stdio.h>

int main(void){
	//Lo normal excribir variable	
	int edad;
	//imprmir algo al usuario
	printf("Ingrese su edad: ");
	//scanear varaible y de que tipo %d ==> entero &edad indicar variable
	scanf("%d", &edad);
	// pintar el resultaado tipo de dato  %d ==> entero y mandar a llamar el tipo de dato edad 
	printf("Tu edad es %d " , edad);
	//Que el programa termino correctamente
	return 0;
	//pintamos la salida con un echo esto en nuestra consola echo $?



}
