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
	float num,A,B;
	
	const float PI=3.14159;
	A=PI*pow(diametroTapa/2,2);
	B=2*PI*(diametroTapa/2)*altura;
	num=A+B;
	this->setSuperficie(num);
	return num;
}
float TanqueCilindrico::CalcularPrecio(float precioFibra){
	float costoM=0,ganancia=0,precio;
	costoM=precioFibra*(this->getSuperficie()) ;
	ganancia=(costoM*20)/100;
	precio=costoM+ganancia;
	this->setPrecio(precio);
	return precio;
	
}



void TanqueCilindrico::setAltura(float altura){
	
	this->altura=altura;
}
void TanqueCilindrico::setDiametroTapa(float diametroTapa){
	this->diametroTapa=diametroTapa;
}

float TanqueCilindrico::getAltura(){  // getters
	return altura;
}
float TanqueCilindrico::getDiametroTapa(){
	return diametroTapa;
}

