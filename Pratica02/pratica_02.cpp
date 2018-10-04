/**
 *
 * -------------------------------------------------------
 * Project: SolucaoPratica02
 * Version: 0.1.0
 * Author:  Pedro Mello
 *
 * Copyright (c) 2018 Pedro Mello
 * -------------------------------------------------------
 *
 *	dados os valores de velocidade em km/h e teta em graus do lançamento de um projétil calcula o x e y máximo.
 *
 */


#include <stdio.h> // Para usar as funções printf(), scanf() é preciso importar esta biblioteca;
#include <iostream>
#include <cmath> // Para usar a função sin() é preciso importar esta biblioteca;
using namespace std;

// Constante global
const float pi = 3.1415926535897;

int main(){
	// Contante local
	const float g = 9.807;

	float v0, teta, x_max, y_max, aux;

	printf("valor de v0 (km/h):\n"); // count << "valor de v0 (km/h):" << endl;
	scanf("%f",&v0); // cin >> v0;
	printf("valor de teta (graus):\n"); // count << "valor de teta (graus):" << endl;
	scanf("%f",&teta); // cin >> teta;

	v0 = v0/3.6; // Conversão para m/s
	teta = teta*(pi/180); // Conversão para radianos

	x_max = v0*v0*sin(2*teta)/g;

	aux = v0*sin(teta);
	y_max = aux*aux/(2*g);

	printf("alcance máximo: %.3f\n", x_max);
	printf("altura máxima: %.4f\n", y_max);

	return 0;
}