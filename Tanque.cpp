#include <iostream>
#include <string.h>
#include "Tanque.h"
using namespace std;

Tanque::Tanque(){					//Constructor por defecto
	strcpy(this->codigo," ");
	strcpy(this->color," ");
	this->precio=0;
	this->superficie=0;
}



Tanque::Tanque(char codigo[20],char color[11],float precio,float superficie){//Constructor alternativo
	strcpy(this->codigo,codigo);
	strcpy(this->color,color);
	this->precio=precio;
	this->superficie=superficie;
	
	
	
}




void Tanque::CalcularPrecio(){			//funciones puras
	
	
	
	
}
void Tanque::CalcularSuperficie(){
	
	//vacio
	
	
	
}
void Tanque::setCodigo(char codigo[20]){
	strcpy(this->codigo,codigo);
}
void Tanque::setColor(char color[11]){
	strcpy(this->color,color);
}
void Tanque::setPrecio(float precio){
	this->precio=precio;
}
void Tanque::setSuperficie(float superficie){
	this->superficie=superficie;
}

char Tanque::getCodigo(){
	return *codigo;
}
char Tanque::getColor(){
	return *color;
}
float Tanque::getPrecio(){
	return precio;
}
float Tanque::getSuperficie(){
	return superficie;
}

