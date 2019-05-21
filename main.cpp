#include <iostream>
#include <string.h>
#include <typeinfo>
#include "TanqueConico.h"
#include "TanqueCilindrico.h"

using namespace std;
int main() {
	int x;
	int tipo,ward=0;
	char codigocomp[20];
	char codigo[20],color[11];
	float precio,superficie,diametroTapa,alturaFi,radio,altura,diametroSup,diametroInf;
	float mayor=-999999999,menor=99999999;
	int angulo;
	float sup,precioFibra,acum1=0,acum2=0,promedio=0;
	int cont=0,opcion,j,cont1=0;
	
	do{
	
	cout<<"Introduzca el numero de tanques que posee:";
	cin>>x;
	system("cls");
}while(x<=0);
	float mayormenor[x];
	char variable[20];
	system("cls");
	Tanque **vtanques=new Tanque*[x];
	TanqueCilindrico *objaux4[x];	//vectores aux para cargar atributos
	TanqueConico *objaux2[x];
	for(j=0;j<x;j++){
		do{
		cout<<"El tanque numero: "<<j+1<<" es conico o cilindrico"<<endl;
		cout<<"Cilindrico (1) / Conico (0)"<<endl;
			cin>>tipo;
			if(tipo!=0&&tipo!=1){
				cout<<"Numero invalido, vuelva a intentarlo"<<endl;
				system("pause");
			}
			system("cls");
		}while(tipo!=0&&tipo!=1);
		system("cls");
		
		if(tipo==1){
			vtanques[j] = new TanqueCilindrico(codigo,color,precio,superficie,diametroTapa,altura);
			cout<<"Codigo:";
			cin.sync();
			cin.getline(codigo,20);
			vtanques[j]->setCodigo(codigo);	
			cin.sync();
			cout<<endl<<"Color:";
			cin.getline(color,11);
			vtanques[j]->setColor(color);
			cin.sync();
			objaux4[j]=(TanqueCilindrico *) vtanques[j];
			cout<<endl<<"Diametro de la tapa:";
			cin>>diametroTapa;
			objaux4[j]->setDiametroTapa(diametroTapa);
			cout<<endl<<"Altura:";
			cin>>altura;
			objaux4[j]->setAltura(altura);
			cout<<endl<<"Precio de la fibra del vidrio:";
			cin>>precioFibra;
			sup=vtanques[j]->CalcularSuperficie();
			mayormenor[j]=vtanques[j]->CalcularPrecio(precioFibra);
			acum1=acum1+mayormenor[j];
			cont1++;
			system("cls");
			
		}
		else{
			vtanques[j]=new TanqueConico(codigo,color,precio,superficie,diametroSup,diametroInf,angulo,altura);
			
			cout<<"Codigo:";
			cin.sync();
			cin.getline(codigo,20);
			vtanques[j]->setCodigo(codigo);
			cin.sync();
			cout<<endl<<"Color:";
			cin.getline(color,11);
			vtanques[j]->setColor(color);
			cin.sync();
			objaux2[j]=(TanqueConico *) vtanques[j];
			cout<<endl<<"Diametro superior:";
			cin>>diametroSup;
			objaux2[j]->setDiametroSup(diametroSup);
			cout<<endl<<"Diametro inferior:";
			cin>>diametroInf;
			objaux2[j]->setDiametroInf(diametroInf);
			cout<<endl<<"Angulo:";
			cin>>angulo;
			objaux2[j]->setAngulo(angulo);
			cout<<endl<<"Altura:";
			cin>>altura;
			objaux2[j]->setAltura(altura);
			cout<<endl<<"Precio de la fibra del vidrio:";
			cin>>precioFibra;
			sup=vtanques[j]->CalcularSuperficie();
			mayormenor[j]=vtanques[j]->CalcularPrecio(precioFibra);
			cont++;
			acum2=acum2+vtanques[j]->getPrecio();
			
			system("cls");
		}
		
	}
	
		do{
			do{
			
		cout<<"SELECCIONE UNA OPCION"<<endl;
		cout<<"Opcion 1:Calcular precio/informacion"<<endl;
		cout<<"Opcion 2:Calcular precio total de tanques cilindricos"<<endl;
		cout<<"Opcion 3:Calcular promedio de tanques conicos"<<endl;
		cout<<"Opcion 4:Tanque mas caro y tanque mas barato"<<endl;
		cout<<"Opcion 5:Cantidad de tanques cilindricos y conicos"<<endl;
		cout<<"Opcion 6:Salir"<<endl;
		cin>>opcion;
		if(opcion<1||opcion>6){
			cout<<"intente de nuevo";
			system("pause");
		}
		system("cls");
		
		}while(opcion<1||opcion>6);
		switch(opcion){
		
			case 1:
				
				cout<<"El codigo es:";
				cin>>codigocomp;
				
				for(int i=0;i<x;i++){
					if(strcmpi(codigocomp,vtanques[i]->getCodigo())==0){
						
						if(typeid(*vtanques[i])==typeid(TanqueConico)) {
							cout<<"Codigo: "<<vtanques[i]->getCodigo()<<endl;
							cout<<"Color: "<<vtanques[i]->getColor()<<endl;
							cout<<"Precio: "<<vtanques[i]->getPrecio()<<" Bs"<<endl;
							cout<<"Superficie: "<<vtanques[i]->getSuperficie()<<endl;
							TanqueConico *objaux=(TanqueConico *) vtanques[i];
							cout<<"Angulo: "<<objaux->getAngulo()<<endl;
							cout<<"DiametroInf: "<<objaux->getDiametroInf()<<endl;
							cout<<"DiametroSup: "<<objaux->getDiametroSup()<<endl;
							cout<<"Altura: "<<objaux->getAltura()<<endl;
							system("pause");
					}
					else{
							cout<<"Codigo: "<<vtanques[i]->getCodigo()<<endl;
							cout<<"Color: "<<vtanques[i]->getColor()<<endl;
							cout<<"Precio: "<<vtanques[i]->getPrecio()<<" Bs"<<endl;
							cout<<"Superficie: "<<vtanques[i]->getSuperficie()<<endl;
							TanqueCilindrico *objaux3=(TanqueCilindrico *)vtanques[i];
							cout<<"Altura: "<<objaux3->getAltura()<<endl;
							cout<<"Diametro de la Tapa: "<<objaux3->getDiametroTapa()<<endl;
							system("pause");
					
					}
					
				}
					
					system("cls");
				}
				break;
			case 2:
				cout<<"Total de los tanques cilindricos"<<endl;
				cout<<acum1<<" Bs"<<endl;
				system("pause");
				system("cls");
				break;
			case 3:
				promedio=acum2/cont;
				cout<<"Promedio de los tanques conicos:"<<endl;
				cout<<promedio<<" Bs"<<endl;
				system("pause");
				system("cls");
				break;
			case 4:
				
				for(int i=0;i<x;i++){
					if(mayor<mayormenor[i]){
						mayor=mayormenor[i];
						
					}
					if(menor>mayormenor[i]){
						menor=mayormenor[i];
					}
					system("cls");	
				}
				cout<<"Tanque mas caro:"<<mayor<<endl;
				cout<<"Tanque mas barato:"<<menor<<endl;
				system("pause");
				system("cls");
				break;
				
			case 5:
			cout<<"Numero de tanques conicos:"<<cont<<endl;
			cout<<"Numero de tanque cilindricos:"<<cont1<<endl;
			system("pause");
			system("cls");
			break;
	}
		}while(opcion!=6);
				
	
	
	
	return 0;
}
