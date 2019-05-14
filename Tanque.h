#ifndef TanqueH
#define TanqueH


using namespace std;

class Tanque{
	private:
		char codigo[],color[];
		float precio,superficie;
	public:
		Tanque();	//Constructor por defecto
		
		Tanque(char*,char*,float,float);	//Constructor alternativo

		virtual float CalcularSuperficie()=0;	//funciones puras
		virtual float CalcularPrecio(float)=0;
		
		void setCodigo(char*);	//setters
		void setColor(char*);
		void setPrecio(float);
		void setSuperficie(float);
	
								//getters
		char getCodigo();
		char getColor();
		float getPrecio();
		float getSuperficie();
};
#endif
