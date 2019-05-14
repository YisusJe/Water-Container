#ifndef TanqueCilindricoH
#define TanqueCilindricoH
#include "Tanque.h"


using namespace std;


class TanqueCilindrico : public Tanque{
	private:
		
		float diametroTapa,alturaFi,radio,altura;
		
		
	public:
		
		TanqueCilindrico();
		TanqueCilindrico(float,float ,float ,int);		
			
		float CalcularSuperficie(); //funciones heredadas de un virtual pure
		float CalcularPrecio();
			
		void setRadio(float);
		void setAltura(int);
		
		
		float getRadio();
		int getAltura();
		

}; 


#endif
