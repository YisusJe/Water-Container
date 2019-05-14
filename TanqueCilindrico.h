#ifndef TanqueCilindricoH
#define TanqueCilindricoH
#include "Tanque.h"


using namespace std;


class TanqueCilindrico : public Tanque{
	private:
		
		float diametroTapa,altura;
		
		
	public:
		
		TanqueCilindrico();
		TanqueCilindrico(char[20],char[11],float,float,float,float);		
			
		float CalcularSuperficie(); //funciones heredadas de un virtual pure
		float CalcularPrecio(float);
		
		void setAltura(float);
		void setRadio(float);
		
		
		float getRadio();
		float getAltura();
		

}; 


#endif
