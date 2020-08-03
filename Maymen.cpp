#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void Esquema();

main(){
	Esquema();
	
	
	
	system("PAUSE");
}
void Esquema(){
	int Aux;
	printf("\nComenzar Juego?  (*1* SI  *0* NO): ");
	scanf("%d", &Aux);
	
	if(Aux>0){
		printf("\nBienvenido!   **MAYMEN**\n\n");
	}
	else{
		printf("\nSaliste del juego\n\n");
	}

}
