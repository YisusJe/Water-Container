#include <iostream>
#include <string.h>
#include "Tanque.h"
using namespace std;

Tanque::Tanque(){
	strcpy(this->codigo," ");
	strcpy(this->color," ");
	this->precio=0;
	this->superficie=0;
}



Tanque::Tanque(char codigo[20],char color[11],float precio,float superficie){
	strcpy(this->codigo,codigo);
	strcpy(this->color,color);
	this->precio=precio;
	this->superficie=superficie;
	
	
	
}




void Tanque::CalcularPrecio(){
	
	
	
	
}
void Tanque::CalcularSuperficie(){
	
	
	
	
	
}

