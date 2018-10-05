/**
 *
 * -------------------------------------------------------
 * Project: SolucaoPratica06_01b

 * Version: 0.1.0
 * Author:  Pedro Mello
 *
 * Copyright (c) 2018 Pedro Mello
 * -------------------------------------------------------
 *
 *	dado um numero natural n {r ∈ N : 0 < n <= 10}, calcula a tabuada de 1 a 10.
 * 	
 *
 */

#include <iostream>
using namespace std;

int main(){
	
	int n, cont = 1;

	cout << "####### Calculo da tabuada de dez: #######" << endl;
	
	cout << "Digite um numero de 1 a 10:" << endl;
	cin >> n;
	if(n<1){
		cout << "Valor invalido" << endl;
	}else{	
		cout << "A tabuada de "<< n << "eh:" << endl;
		while(cont<=10){
			cout << n << "X" << cont << ":" << n*cont << endl;
			cont++;
		}
	}
	
	return 0;
}