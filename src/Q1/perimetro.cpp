/**
* @file perimetro.cpp
* @brief Estas funçoes calculam o perimetro de figuras planas. 
* @author Rosangela DAvilla
* @since 10/08/2017
* @date	17/08/2017
*/

#include <iostream>
#include <cmath>

using namespace std;

//@return perimetro do triangulo
int pTriangulo(int x){

	int perimetro;

	perimetro = x*3;
	return perimetro;

}

//@return perimetro do retangulo
int pRetangulo( int x, int y){
	
	int perimetro;

	perimetro = (2*x)+ (2*y);
	return perimetro;
}

//@return perimetro do quadrado
int pQuadrado(int x){
	
	int perimetro;

	perimetro = x*4;
	return perimetro;
}

//@return perimetro do circulo
float pCirculo(int x){
	
	float perimetro;

	perimetro = (3.14)*x*2;
	return perimetro;
}

