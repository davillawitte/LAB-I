#include <iostream>
#include <cstdlib>
#include "area.h"
#include "perimetro.h"
#include "volume.h"
#include "calcula.h"

using namespace std;

void Qualfigura (int op){

	int x,y,z;

	switch(op){
		case 1:
				cout << "Digite o tamanho da base do triangulo: "  ;
				cin >> x;
				cout << "Digite o tamanho da altura do triangulo: ";
				cin >> y;
				cout << "Area do triangulo: " << areaTriangulo(x,y) << endl;
				cout<< "Perimetro do triangulo: " << pTriangulo(x) << endl;
				break;
		case 2: 
				cout << "Digite o tamanho da base do retangulo: " ;
				cin >> x;
				cout << "Digite o altura do retangulo: ";
				cin >> y;
				cout << "Area do retangulo: " << areaRetangulo(x,y) << endl;
				cout<< "Perimetro do retangulo: " << pRetangulo(x,y) << endl;
				break;
		case 3:
				cout << "Digite o tamanho do lado do quadrado: " ;
				cin >> x;
				cout << "Area do quadrado: " << areaQuadrado(x) << endl;
				cout<< "Perimetro do quadrado: " << pQuadrado(x) << endl;
				break;
		case 4:
				cout << "Digite o tamanho do raio do circulo: " ;
				cin >> x;
				cout << "Area do circulo: " << areaCirculo(x) << endl;
				cout<< "Perimetro do circulo: " << pCirculo(x) <<endl ;
				break;
		case 5:
				cout << "Digite a area da base da piramide: " ;
				cin >> x;
				cout << "Digite a area de um dos triangulos laterais:";
				cin >> z;
				cout << "Digite a altura da piramide: ";
				cin >> y;
				cout << "Area da piramide: " << areaPiramide(x,z) << endl;
				cout<< "Volume da piramide: " << vPiramide(x,y) << endl;
				break;
		case 6:
				cout << "Digite a area da base do cubo " ;
				cin >> x;
				cout << "Area do cubo: " << areaCubo(x) << endl;
				cout<< "Volume do cubo: " << vCubo(x) << endl;
				break;
		case 7:
				cout << "Digite a area da base do paralelepipedo: " ;
				cin >> x;
				cout << "Digite a area de uma das laterais do paralelepipedo: ";
				cin >> y;
				cout << "Area do Paralelepipedo: " << areaParalelepipedo(x,y) << endl;
				cout<< "Volume do paralelepipedo: " << vParalelepipedo(x,y) << endl;
				break;
		case 8:
				cout << "Digite o tamanho do raio da esfera: " ;
				cin >> x;
				cout << "Area da esfera: " << areaEsfera(x) << endl;
				cout<< "Volume da esfera: " << vEsfera(x) << endl;
				break;
		case 0:
				cout << "Programa encerrado" << endl;
				exit(0);
		}

}