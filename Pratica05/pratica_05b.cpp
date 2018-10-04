/**
 *
 * -------------------------------------------------------
 * Project: SolucaoPratica05B

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

const float pi = 3.1415926535897;

/**
 * Check
 *
 * Verifica se numero real contindo no endereço de memória n é n < 0, caso seja executa um loop até que seja inserido n > 0
 *
 * @param      Float Pointer  $n  Endereço de meória do numero a ser verificado
 *
 */

void check(float *n)
{
	while(*n<0)
	{
		printf("Somente valores >= 0:\n");
		scanf("%f", n);
	}

	if(*n==0)
		exit(0);
}

int main(){

	float r, h, l, vA;

	printf("\n\n####### Calculo de volume cilindrico: #######\n");
	
	// Loop infinito pois eu verifico a saida dentro da subrotina check();
	while(true){

		printf("valor do raio r (cm):\n"); // cout << "valor do raio r (cm):" << endl;
		scanf("%f",&r);
		
		check(&r); // chama a subrotina

		printf("valor da altura h (cm):\n"); // cout << "valor da altura h (cm):" << endl;
		scanf("%f",&h); // cin >> h;

		check(&h);

		vA = pi*r*r*h;

		printf("o volume do cilindro com altura '%f' e raio '%f' é: %f\n\n", h, r, vA); // cout << "o volume do cilindro com altura '" << h << "' e raio '" << r << "' é:" << vA << endl << endl;
		
		printf("\n###############################\n");
		
	}

	return 0;
}