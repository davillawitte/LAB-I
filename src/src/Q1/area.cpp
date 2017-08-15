#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

float areaTriangulo(int x, int y){

	float area;

	area = (x*y)/2;
	return area;

}

int areaRetangulo( int x, int y){

	int area;

	area = x*y;
	return area;
}

int areaQuadrado(int x){

	int area;

	area = x*x;
	return area;
}

float areaCirculo(int x){

	float area;

	area = (3.14)*pow(x,2);
	return area;
}

int areaPiramide(int x, int z){

	int area;

	area = x+(4*z);
	return area;
}

int areaCubo(int x){

	int area;

	area = 6*x;
	return area;
}

int areaParalelepipedo(int x, int y){

	int area;

	area = (4*x) + (2*y);
	return area;
}

float areaEsfera(int x){

	float area;

	area = 4*(3.14)*pow(x,2);
	return area;
}