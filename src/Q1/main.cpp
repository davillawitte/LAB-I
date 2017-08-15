#include <iostream>
#include <cstdlib>
#include "area.h"
#include "perimetro.h"
#include "volume.h"
#include "calcula.h"

using namespace std;

int main(){

	int opcao = 0;
 
	do{
	cout << "Calculadora de Geometria Plana e Espacial" << endl;
	cout << "(1) Triangulo Equilatero" << endl;
	cout << "(2) Retangulo " << endl;
	cout << "(3) Quadrado" << endl;
	cout << "(4) Circunferencia" << endl;
	cout << "(5) Piramide com base quadrangular" << endl;
	cout << "(6) Cubo" << endl;
	cout << "(7) Paralelepipedo" << endl;
	cout << "(8) Esfera " << endl;
	cout << "(0) Sair " << endl << endl;
	cout << "Digite a sua opcao: ";
	
		cin >> opcao;
		Qualfigura(opcao);
		
	cout << "----------------------------------------------------------" << endl << endl;
	}while(opcao >= 0 && opcao < 9);

return 0;

}