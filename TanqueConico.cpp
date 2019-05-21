#include<iostream>
#include "TanqueConico.h"
#include <math.h>

using namespace std;

TanqueConico::TanqueConico():Tanque(){
	this->diametroInf=0;
	this->diametroSup=0;
	this->altura=0;
	this->angulo=0;
}
TanqueConico::TanqueConico(char codigo[20],char color[11],float precio,float superficie,float diametroSup, float diametroInf, float altura, float angulo):Tanque(codigo,color,precio,superficie){
	this->diametroInf=diametroInf;
	this->diametroSup=diametroSup;
	this->altura=altura;
	this->angulo=angulo;		
}
float TanqueConico::CalcularSuperficie(){
	float num;
	float A;
	const float PI=3.14159;
	A=tan(2*angulo);
	num=(PI*(pow((diametroSup/2),2)+pow((diametroInf/2),2)))+(pow(altura,1.33)/A);
	this->setSuperficie(num);
	return num;
}
float TanqueConico::CalcularPrecio(float PrecioFibra){  //PEDIRLE AL USUARIO EL PRECIO DE LA FIBRA DE VIDRIO
	float costoM=0,ganancia=0;
	float precio;
	costoM=PrecioFibra*(this->getSuperficie());
	ganancia=(costoM*20)/100;
	precio=costoM+ganancia;
	this->setPrecio(precio);
	return precio;
}


void TanqueConico::setDiametroSup(float diametroSup){		//setters
	this->diametroSup=diametroSup;
}
void TanqueConico::setDiametroInf(float diametroInf){
	this->diametroInf=diametroInf;
}
void TanqueConico::setAltura(float altura){
	this->altura=altura;
}
void TanqueConico::setAngulo(float angulo){
	this->angulo=angulo;
}

float TanqueConico::getDiametroSup(){
	return diametroSup;
}
float TanqueConico::getDiametroInf(){
	return diametroInf;
}
float TanqueConico::getAltura(){
	return altura;
}
int TanqueConico::getAngulo(){
	return angulo;
}

