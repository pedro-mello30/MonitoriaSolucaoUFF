/**
 *
 * -------------------------------------------------------
 * Project: SolucaoPratica03
 * Version: 0.1.0
 * Author:  Pedro Mello
 *
 * Copyright (c) 2018 Pedro Mello
 * -------------------------------------------------------
 *
 *	dado 
 *
 *
 *
 *
 */


#include <iostream>
#include <cmath>
using namespace std;

const float pi = 3.1415926535897;

int main(){
	bool exit = 1;
	while(exit){

		float r, h, l, vA, vB, vAux;

		printf("\n####### Calculo volume CONE #######\n");
		printf("valor do raio r (cm):\n");
		scanf("%f",&r);
		printf("valor da altura h (cm):\n");
		scanf("%f",&h);

		vA = (1.0/3.0)*(r*r*h*pi);
		printf("o volume do cone é: %f\n\n", vA);

		printf("\n\n####### Calculo volume CUBO #######\n");
		printf("valor do L (cm):\n");
		scanf("%f",&l);

		vB = l*l*l;
		printf("o volume do cubo é: %f\n\n", vB);

		if(vA-vB>1){
			printf("o Cone possui maior volume.\n");
		}
		else if(vB-vA>1)
		{
			printf("o Cubo possui maior volume.\n");
		}
		else if(vA-vB<1)
		{
			printf("os volumes são equivalentes.\n");
		}
		
		printf("\n## tecle 1 para continuar ##\n");
		cin >> exit; //neste caso a funçao 'scanf() não funciona, pois ela não pode ser utilizada para ler boolean
	}

	return 0;
}