/**
* @file main.cpp
* @brief Funcao principal.
* @brief O programa é uma calculadora de geomatria plana e espacial 
* @author Rosangela DAvilla
* @since 10/08/2017
* @date	17/08/2017
*/

#include <iostream>
#include <cstdlib>
#include "include/Q1/area.h"
#include "include/Q1/perimetro.h"
#include "include/Q1/volume.h"
#include "include/Q1/calcula.h"

using namespace std;

int main(){

	//@param opcao variavel que guarda a opcao escolhida pelo usuário e a repassa para a função "Qualfigura"
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
		
	cout << "=============================================" << endl << endl;
	}while(opcao >= 0 && opcao < 9);

return 0;

}
