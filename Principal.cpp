#include "Principal.h"
#include <fstream>
#include <cstring>
#include <iostream>
#include <cstdlib>
#include "Codificar.h"
#include "Decodificar.h"

using namespace std;

//------------------------------CONSTRUCTOR-------------------------------------

Principal::Principal(){
}

//-----------------------------MOSTRAR CODIFICAR---------------------------------
void Principal::mostrarCodificarTxt(){
	
	ifstream archivo;
	ofstream archivo2;
	string txt;
	
	archivo.open("Prueba.txt",ios::in); // abro archivo de textos
	archivo2.open("Enteros.txt",ios::out); // abro archivo de enteros
	
	if(archivo.fail()){
		cout<<"NO SE PUDO ABRIR EL ARCHIVO";
		exit(1);
	}// en caso de que el arechivo no se abra
	
	while(!archivo.eof()){
		getline(archivo,txt);
		
		tam = txt.length();
		int ta=tam/4;
		char aux[5];

		int n=4,m=0,arch;
		
		for(int i=0; i<ta; i++){
		
			int n2=0;
		
				for(int j=m; j<n; j++){				
			
			 		aux[n2]= txt[j];
			 		n2++;
		 		
				}//se crean cadenas de 4 caracteres
		
			aux[4]='\0';
			n+=4; m+=4;
		
			arch=codificar.codifica(aux);	
			
			archivo2<<arch<<endl;
			
			
		}// for de cantidad de cadenas
		
	}// se rpite las veces necesarias hasta que se termine el texto
		
	archivo.close();
	archivo2.close();
	
	
}
//----------------------------MOSTRAR DECODIFICAR--------------------------------
void Principal::mostrarDecodificarTxt(){
	
		ifstream archivo;
		string txt;
	
		archivo.open("Enteros.txt", ios::in); // ABRE EL ARCHIVO ENTEROS

	while(!archivo.fail()){
		
		getline(archivo,txt);
		
		int aux= atoi((char*)txt.c_str()); 
		
		char* copia = new char [strlen(decodificar.decodifica(aux))]; // CREO VECTOR
		strcpy(copia, decodificar.decodifica(aux));
		cout << copia; 

	}// SE REPITE HASTA QUE SE TERMINE LA CADENA

	archivo.close();
}
//--------------------------MOSTAR CODIFICAR CONSOLA-------------------------------
void Principal::mostrarCodificarConsola(){
	
	char cad[100], auxi[5];
	int aux;
	
	cout<<"Ingrese la cadena que desea codificar:"<<endl;
	cin.getline(cad,100);
	//cout<<cad;
	
	setTamCad(strlen(cad)/4);
	setVecTOR(this->tamcad);
	
	
	
	int n=4,m=0,codigo;
	
	for(int i=0 ; i<tamcad ; i++){
		int n2=0;
		
			for(int j=m; j<n; j++){				
			
				auxi[n2]= cad[j];
				n2++;
		 		
			}//se crean cadenas de 4 caracteres
		
		auxi[4]='\0';
		n+=4; m+=4;
		
		codigo=codificar.codifica(auxi);
		cout<<codigo<<endl;
		
		this->vecTOR[i]=codigo;	
	
		//cout<<"*"<<vecTOR[i]<<endl;	
		
	}
	
	
}
//--------------------------MOSTAR DECODIFICAR CONSOLA-------------------------------
void Principal::mostrarDecodificarConsola(){
	
	int auxi;
	
	cout<<"Cadena Decodificada:"<<endl;
	
	
	for(int i=0; i<tamcad ;i++){
		
		auxi=vecTOR[i];
		
		char* copia = new char [strlen(decodificar.decodifica(auxi))]; // CREO VECTOR
		strcpy(copia, decodificar.decodifica(auxi));
		cout << copia; 
				
	}
	
}

void Principal::setTamCad(int _tam){
	
	this->tamcad=_tam;
	
}

void Principal::setVecTOR(int _tamcad){
	
	this->vecTOR= new int [tamcad];
	
}

