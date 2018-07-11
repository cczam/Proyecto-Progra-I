#include <iostream>
#include <string>
//#include <iomanip>
#include "Codificar.h"
#include "Decodificar.h"
#include "Principal.h"

using namespace std;

int main(int argc, char** argv) {
	
	Principal p;
	int opc;
	
	do{
		
		do{
		
		cout<<"MENU"<<endl<<endl;
		cout<<"1. Codificar archivo ya creado"<<endl;
		cout<<"2. Decodificar archivo ya creado"<<endl;
		cout<<"3. Codificar cadena"<<endl;
		cout<<"4. Decodificar cadena"<<endl;
		cout<<"5. Salir"<<endl;
		cin>>opc;
		
		cin.sync();
		system("cls");	
			
		}while(opc<1 || opc>5);
		
	
	switch(opc){
		
		case 1:
			p.mostrarCodificarTxt();
			cout<<"El texto codificado se encuentra en el archivo Enteros.txt";	
		break;
		
		case 2:
			p.mostrarDecodificarTxt();	
		break;	
		
		case 3:
			p.mostrarCodificarConsola();
		break;
		
		case 4:
			p.mostrarDecodificarConsola();
		break;
		
	}
	
	cin.get();
	system("cls");
	
	}while(opc!=5);
	
	

	return 0;
}
