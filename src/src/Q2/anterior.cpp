#include <iostream>
#include "fatorial.h"

using namespace std;

int main () {

	int n;

	cout << "Entre com o n que deseja" << endl;
	cin >> n;

	cout << "o fatorial do numero "<< n << "eh " << fatorial(n) << endl;

	return 0;
}