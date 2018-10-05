/**
 *
 * -------------------------------------------------------
 * Project: SolucaoPratica05
 * Version: 0.1.0
 * Author:  Pedro Mello
 *
 * Copyright (c) 2018 Pedro Mello
 * -------------------------------------------------------
 *
 *	dado um numero r e h em cm, calcula o volume cilindrico. V = pi*r*r*h.
 * 	O programa deve repetir a entrada dos valores de r e h e a exibição do resultado até o usuário digitar um valor igual a zero para r ou h.
 *   
 *   {r ∈ R : r > 0}
 *   {h ∈ R : h > 0}
 */


#include <stdio.h> // Para usar as funções printf(), scanf() é preciso importar esta biblioteca;
#include <iostream>
using namespace std;

#define pi 3.1415926535897

int main(){

	float r, h, l, vA;

	printf("\n\n####### Calculo de volume cilindrico: #######\n");
	
	printf("valor do raio r (cm):\n"); // count << "valor do raio r (cm):" << endl;
	scanf("%f",&r);
	
	while(r<0)
	{
		printf("Somente valores >= 0:\n");
		scanf("%f",&r);
	}

	printf("valor da altura h (cm):\n"); // count << "valor da altura h (cm):" << endl;
	scanf("%f",&h); // cin >> h;

	while(h<0)
	{
		printf("Somente valores >= 0:\n");
		scanf("%f",&h);
	}
	
	while(r>0 && h>0){
		vA = pi*r*r*h;

		printf("o volume do cilindro com altura '%f' e raio '%f' é: %f Litros\n\n", h, r, vA/1000); // count << "o volume do cilindro com altura '" << h << "' e raio '" << r << "' é:" << vA << endl << endl;
		
		printf("\n###############################\n");

		printf("valor do raio r (cm):\n");
		scanf("%f",&r);

		while(r<0)
		{
			printf("Somente valores >= 0:\n");
			scanf("%f",&r);
		}
		

		printf("valor da altura h (cm):\n");
		scanf("%f",&h);

		while(h<0)
		{
			printf("Somente valores >= 0:\n");
			scanf("%f",&h);
		}
	
		
	}

	return 0;
}