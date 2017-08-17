/**
* @file fatorial.cpp
* @brief O Programa retorna o fatorial de um numero de modo recursivo
* @author Rosangela DAvilla
* @since 10/08/2017
* @date	17/08/2017
*/

#include <iostream>

using namespace std;

/**
*@brief função que calcula o fatorial de um numero
*@param n numero natural
*@return fatorial do numero n
*/

int fatorial (int n){

	if ((n==1) || (n==0))
		return 1;               
	else
   		return fatorial(n-1)*n;
}

