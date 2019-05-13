#ifndef TanqueConicoH
#define TanqueConicoH

using namespace std;

class TanqueConico : public Tanque{
	private: 
	float diametroSup,diametroInf,altura;
	int angulo;
	public:
	TanqueConico(); //constructor por defec
	TanqueConico(float,float,float,int); //const alternativo
		
	void CalcularSuperficie(); //funciones heredadas de un virtual pure
	void CalcularPrecio();
	
	void setDiametroSup(float); //setters
	void setDiametroInf(float);
	void setAltura(float);
	void setAngulo(int);
	
	float getDiametroSup(); //getters
	float getDiametroInf();
	float getAltura();
	int getAngulo();
	
	//qlq
};
