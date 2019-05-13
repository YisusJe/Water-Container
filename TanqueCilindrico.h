#ifndef TanqueCilindricoH
#define TanqueCilindricoH
#include "Tanque.h"


using namespace std;


class TanqueCilindrico : public Tanque{
	private:
		
		float diametrotTapa,altura;
		
		
	public:
			void CalcularSuperficie();
			void CalcularSuperficie(float ,float);		
			
			
			
			void setdiametroTapa(float);

}; 



#endif
