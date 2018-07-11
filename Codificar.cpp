#include "Codificar.h"
#include <cstring>
#include <iostream>

using namespace std;
//---------------------------CONSTRUCTOR----------------------------------

Codificar::Codificar(){
}

//----------------------------CODIFICAR-------------------------------------
int Codificar::codifica(char* _cadena){
	
	char aux[4];
	char carac;
	int num1, corre=24, codigo=0;
	
	strcpy(aux,_cadena); //COPIO LA CADENA EN AUXILIAR 
			
	
		
	for(int i=3; i>=0; i--){	
		carac = aux[i]; // SE SEPARA CADA UNO DE LOS CARACTERES
 		num1 = carac; // GUARDO EL VALOR NUMERICO DEL CARACTER
 		num1<<= corre; // SE DESZPLAZA EL NUMERO HACIA LA IZQUIERDA
 		corre-=8; // SE DISMINUYE LA CANTIDAD QUE CORRE
 		codigo|=num1; //OBTENGO CODIGO	 	
	}
	
	return codigo; 
																	
}
