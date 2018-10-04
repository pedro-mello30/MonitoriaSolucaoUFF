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
 *	dado um numero natural n pertencente ao conjunto {n ∈ N: 1582 <= n <= 2499}, calcula o domingo de pascoa através da fórmula de gauss.
 *   
 */

#include <stdio.h> 
#include <iostream>
using namespace std;

int main(){
	bool exit = 1;
	while(exit){
		int ano, anoA, digits, x, y, a, b, c, d, e, p;
		while(exit){
			digits = 0;
			printf("Digite o ano: \n");
			scanf("%d", &ano);
			anoA = ano;
			while(anoA){
				++digits;
				anoA /= 10;
			}

			exit = digits==4?0:1;
			if(!exit){			
				if(ano>1582 && ano<1699)
				{
					x = 22;
					y = 2;
				}
				else if(ano>1700 && ano<1799)
				{
					x = 23;
					y = 3;
				}
				else if(ano>1800 && ano<1899)
				{
					x = 23;
					y = 4;
				}
				else if(ano>1900 && ano<2099)
				{
					x = 24;
					y = 5;
				}
				else if(ano>2100 && ano<2199)
				{
					x = 24;
					y = 6;
				}
				else if(ano>2200 && ano<2299)
				{
					x = 25;
					y = 0;
				}
				else if(ano>2300 && ano<2399)
				{
					x = 26;
					y = 1;
				}
				else if(ano>2400 && ano<2499)
				{
					x = 25;
					y = 1;
				}
				else
				{
					printf("O ano %d esta fora do periodo de calculo.\n", ano);
					exit = 1;
				}
			}
		}


		a = ano%19;
		b = ano%4;
		c = ano%7;
		d = (19*a+x)%30;
		e = (2*b+4*c+6*d+y)%7;

		p = 22+d+e;
		if(p<=31)
			printf("No ano %d a Pascoa sera no dia: %d de marco.\n", ano, p);
		else
		{
			p = d+e-9;
			if(p<=25)
				printf("No ano %d a Pascoa sera no dia: %d de abril.\n", ano, p);
			else if(p>=22 && p<=31)
				printf("No ano %d a Pascoa sera no dia: %d de abril.\n", ano, p-7);
		}



		printf("\n## tecle 1 para continuar ##\n");
		cin >> exit;
	}



	return 0;
}