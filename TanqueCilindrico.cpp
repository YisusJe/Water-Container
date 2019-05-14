#include <iostream>
#include "TanqueCilindrico.h"

using namespace std; //qlq

TanqueCilindrico::TanqueCilindrico():Tanque(){
	
		this->altura=0;
		this->radio=0;
		this->diametroTapa=0;
		this->alturaFi=0;
}

TanqueCilindrico::TanqueCilindrico(float diametroTapa,float alturaFi,float radio,int altura):Tanque(){
	
	this->altura=altura;
	this->radio=radio;
	this->diametroTapa  = diametroTapa;
	this->alturaFi=alturaFi;
	
	
}

float TanqueCilindrico::CalcularSuperficie(){
	
	
	
	
}
float TanqueCilindrico::CalcularPrecio(){
	
	
	
	
}

void TanqueCilindrico::setRadio(float radio){ // setters
	
	this->radio=radio;
	
}

void TanqueCilindrico::setAltura(int altura){
	
	this->altura=altura;
}

int TanqueCilindrico::getAltura(){  // getters
	return altura;
}

float TanqueCilindrico::getRadio(){
	return radio;
}





