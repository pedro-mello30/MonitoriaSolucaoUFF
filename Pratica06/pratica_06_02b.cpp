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
 *	dado um numero natural n {r ∈ N : 0 < n}, desenha um quadrado na tela.
 * 	
 *
 */


#include <iostream>
using namespace std;

int main(){
	bool exit = 1;
	while(exit){		

		int h, i = 1, j;

		cout << "####### Desenho do quadrado: #######" << endl;
		
		cout << "Digite a altura do quadrado:" << endl;
		cin >> h;
		if(h<1){
			while(h<1){
				cout << "Digite a altura do quadrado:" << endl << endl;
				cin >> h;
			}
		}
			
		cout << endl; 
		
		for(int i = 1; i <= h; i++){
			for(int j = 0; j < h; j++)
				cout << "#";
			cout << endl;
		}

		cout << "Digite 0 para sair e 1 para continuar.." << endl;
		cin >> exit;
	}
	return 0;
}