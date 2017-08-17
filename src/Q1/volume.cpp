/**
* @file volume.cpp
* @brief Estas funçoes calculam o volume de figuras espaciais. 
* @author Rosangela DAvilla
* @since 10/08/2017
* @date	17/08/2017
*/

#include <cmath>

//@return volume da piramide
int vPiramide(int x, int y){
	int volume;

	volume = (x*y)/3;
return volume;
}

//@return volume do cubo
int vCubo(int x){
	int volume;

	volume = x*x;
return volume;
}

//@return volume do paralelepipedo
int vParalelepipedo(int x, int y){
	int volume;

	volume = x*y;
return volume;
}

//@return volume da esfera
float vEsfera(int x){
	float volume;

	volume = (4*(3.14)*pow(x,3))/3;
return volume;
}