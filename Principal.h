#ifndef PRINCIPAL_H
#define PRINCIPAL_H
#include "Codificar.h"
#include "Decodificar.h"

class Principal
{
	
	Codificar codificar;
	Decodificar decodificar;
	int tam;
	int tamcad;
	int* vecTOR; 

	public:
		Principal();
		void setVecTOR(int);
		void setTamCad(int);
		void mostrarCodificarTxt();
		void mostrarDecodificarTxt();
		void mostrarCodificarConsola();
		void mostrarDecodificarConsola();
	protected:
};

#endif
