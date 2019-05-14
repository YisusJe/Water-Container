#ifndef TanqueH
#define TanqueH


using namespace std;

class Tanque{
	private:
		char codigo[11],color[20];
		float precio,superficie;
	public:
		Tanque();	//Constructor por defecto
		
		Tanque(char[11],char[20] ,float,float);	//Constructor alternativo

		virtual float CalcularSuperficie()=0;	//funciones puras
		virtual float CalcularPrecio(float)=0;
		
		void setCodigo(char[20]);	//setters
		void setColor(char[11]);
		void setPrecio(float);
		void setSuperficie(float);
	
								//getters
		char *getCodigo();
		char *getColor();
		float getPrecio();
		float getSuperficie();
};
#endif
