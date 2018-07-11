#include "Decodificar.h"
#include <iostream>

using namespace std;

//----------------------------CONSTRUCTOR-----------------------------
Decodificar::Decodificar(){
}
//--------------------------DECODIFICAR-------------------------------
char* Decodificar::decodifica(int _codigo){
	
	unsigned int mascara[4]={255, 65280, 16711680, 4278190080};//VECTOR DE MASCARAS
	int auxCodigo=_codigo;
	int corre=0;
	char cadena[4];
	
	for(int i=0; i<4; i++){
		
		cadena[i]= (auxCodigo & mascara[i])>>corre; //SE OBTIENE EL CARACTER POR CADA NUMERO
		
		corre+=8; //SE AUMENTA VALOR QUE CORRE	
	
	}
	
	return cadena;		
}
