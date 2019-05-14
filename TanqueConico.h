#ifndef TanqueConicoH
#define TanqueConicoH
#include "Tanque.h"
using namespace std;

class TanqueConico : public Tanque{
	private: 
	float diametroSup,diametroInf,altura;
	int angulo;
	public:
	TanqueConico(); //constructor por defec
	TanqueConico(char[20] ,char[11],float,float,float,float,float,int); //const alternativo
		
	float CalcularSuperficie(); //funciones heredadas de un virtual pure
	float CalcularPrecio(float);
	
	void setDiametroSup(float); //setters
	void setDiametroInf(float);
	void setAltura(float);
	void setAngulo(int);
	
	float getDiametroSup(); //getters
	float getDiametroInf();
	float getAltura();
	int getAngulo();
	
	
};
#endif
