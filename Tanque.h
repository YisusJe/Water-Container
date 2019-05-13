#ifndef TanqueH
#define TanqueH


using namespace std;

class Tanque{
	private:
		char codigo[],color[];
		float precio,superficie;
	public:
		Tanque();
		Tanque(char*,char*,float,float);
		virtual void CalcularSuperficie()=0;
		virtual void CalcularPrecio()=0;
		
	
	
};
#endif
