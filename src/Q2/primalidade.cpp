#include <iostream>

 int primalidade(int n){

 	for (int i = 2; i <= n/2 ; i++){
 		if(n%i == 0)
 			return primalidade(n-1);
 	}
 	return n;
}
 
 
 
 