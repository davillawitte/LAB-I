/**
* @file anterior.cpp
* @brief Funcao principal.
* @brief O Programa mostra o numero primo anterior ao fatorial de n 
* @author Rosangela DAvilla
* @since 10/08/2017
* @date	17/08/2017
*/

#include <iostream>
#include "fatorial.h"
#include "primalidade.h"

using namespace std;

int main () {

	int n;

	cout << "Entre com o n que deseja" << endl;
	cin >> n;
	cout << "O fatorial do numero "<< n << " eh igual a:" << fatorial(n) << endl;
	cout <<"O numero primo anterior a " << fatorial(n) << " eh:" << primalidade(fatorial(n)) << endl; 

	return 0;
}