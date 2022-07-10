//
// Faça um programa que leia uma matriz de 5x5 de inteiros. Na sequência apresente os valores do caminho percorrido entre o elemento de posição [0,0] até o elemento de posição [4,4],
// 	respeitando as seguintes regras:
//
// Faça um programa que leia uma matriz de 5x5 de inteiros. Na sequência apresente os “valores” do caminho percorrido entre o elemento de posição [0,0] até o elemento de posição [4,4],
// 	respeitando as seguintes regras:
// // a) Se o valor da célula for ímpar,
// deverá somar uma posição a variável que representa a coluna.
// // b) Se o valor da célula for par,
// deverá somar uma posição a variável que representa a linha.
//
// c) Se o valor da célula for menor do que 100 deverá fazer a operação inversa nos itens a e b.
//
// d) O programa termina quando for percorrido as 25 posições ou quando chegar na posição [4,4],
// o número contido nessa posição também deverá ser impresso.

#include <stdio.h>
int	main(void)
{
	int matriz[5][5], line, column;

	for (line = 0; line < 5; line++)
	{
		for (column = 0; column < 5; column++)
		{
			scanf("%d", &matriz[line][column]);
		}
	}

	for (line = 0; line < 4; line++)
	{
		for (column = 0; column < 4; column++)
		{
			if (!((matriz[line][column] % 2 == 0)))
			{
				column++;
			}
			if ((line % 2 == 0) && (column % 2 == 0))
			{
				line++;
			}
			if ((line < 100) && (column < 0))
			{
				line--;
				column--;
			}

			for (line = 0; line < 5; line++)
			{
				for (column = 0; column < 5; column++)
				{
					printf("%d ", matriz[line][column]);
				}
				printf("\n");
			}
		}
	}
}