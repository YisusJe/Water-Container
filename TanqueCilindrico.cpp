#include <iostream>
#include "TanqueCilindrico.h"
#include <math.h>
using namespace std; 

TanqueCilindrico::TanqueCilindrico():Tanque(){
	
		this->altura=0;

		this->diametroTapa=0;

}

TanqueCilindrico::TanqueCilindrico(char codigo[20],char color[11],float precio,float superficie,float diametroTapa,float altura):Tanque(codigo,color,precio,superficie){
	
	this->altura=altura;
	this->diametroTapa  = diametroTapa;
	
	
}

float TanqueCilindrico::CalcularSuperficie(){
	float num;
	
	const float PI=3.14159;
	num=PI*pow((diametroTapa/2),2);
	num=2*PI*(diametroTapa/2)*altura;
	num=(5*2) + 10;
	
	this->setSuperficie(num);
	return num;
}
float TanqueCilindrico::CalcularPrecio(float precioF){
	float costoM,ganancia;
	costoM=precioF*(this->getSuperficie()) ;
	ganancia=(costoM*20)/100;
	precioF=costoM+ganancia;
	this->setPrecio(precioF);
	return precioF;
	
}



void TanqueCilindrico::setAltura(float altura){
	
	this->altura=altura;
}

float TanqueCilindrico::getAltura(){  // getters
	return altura;
}



