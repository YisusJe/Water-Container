#include<iostream>
#include "TanqueConico.h"

using namespace std; //qlq

TanqueConico::TanqueConico():Tanque(){
	this->diametroInf=0;
	this->diametroSup=0;
	this->altura=0;
	this->angulo=0;
}
TanqueConico::TanqueConico(float diametroSup, float diametroInf, float altura, int angulo):Tanque(){
	this->diametroInf=diametroInf;
	this->diametroSup=diametroSup;
	this->altura=altura;
	this->angulo=angulo;		
}
void TanqueConico::CalcularSuperficie(){
	
	
	
	
}
void TanqueConico::CalcularPrecio(){
	
	
	
	
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
void TanqueConico::setAngulo(int angulo){
	this->angulo=angulo;
}

float TanqueConico::getDiametroSup(){
	return diametroSup;
}
float TanqueConico::getDiametroInf(){
	return diamtroInf;
}
float TanqueConico::getAltura(){
	return altura;
}
int TanqueConico::getAngulo(){
	return angulo;
}

