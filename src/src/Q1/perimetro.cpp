#include <iostream>
#include <cmath>

using namespace std;

int pTriangulo(int x){

	int perimetro;

	perimetro = x*3;
	return perimetro;

}

int pRetangulo( int x, int y){
	
	int perimetro;

	perimetro = (2*x)+ (2*y);
	return perimetro;
}

int pQuadrado(int x){
	
	int perimetro;

	perimetro = x*4;
	return perimetro;
}

float pCirculo(int x){
	
	float perimetro;

	perimetro = (3.14)*x*2;
	return perimetro;
}

