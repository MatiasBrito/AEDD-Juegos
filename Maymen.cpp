#include <stdlib.h>
#include <stdio.h>t\t
#include <time.h>
//Cambios de ejemplo
void Esquema();
void Modelo(int Nro_Sec, int Nro);
main(){
	int Nro_Secreto, Nro;
	
	Esquema();
	Modelo(Nro_Secreto, Nro);
	
	
	system("PAUSE");
}
void Esquema(){
	printf("\n\t\t----------------------");
	printf("\n\t\t| WELCOME TO MAYMEN! |");
	printf("\n\t\t----------------------");
}
void Modelo(int Nro_Sec, int Nro){
	int Puntos=10;
	int Intentos=0;
	int Cota_Inf=1, Cota_Sup=999;
	
	for(int i=1; i<=10; i++){
		printf("\nINTENTO %d:",i);
		scanf("%d", &Nro);
		
		if(Nro_Sec<Nro) Cota_Sup=Nro;
		else Cota_Inf=Nro;
		
		if(Nro_Sec>Nro){
			printf("\nEl numero secreto es mayor y se encuentra entre %d y %d",Cota_Inf,Cota_Sup;
			Intentos++;
			 Puntos--;
		}
                if(Nro_Sec<Nro){
			printf("\nEl numero secreto es menor y se encuentra entre %d y %d",Cota_Sup,Cota_Sup;
			Intentos++;
			 Puntos--;
		}
	}
	while(Nro!=Nro_Sec && Intentos!=10);
	if(Nro==Nro_Sec){
		printf("\nADIVINASTE!");
		printf("\nTU PUNTAJE ES: %d",Puntos);
		printf("\nADIVINASTE EN EL INTENTO: %d\n\n",Intentos);
	}
	else{
		printf("\nPERDISTE.. EL NUMERO SECRETO ES: %d",Nro_Sec);
		printf("\nTU PANTAJE ES: %d\n\n",Puntos);
	}
}
	
