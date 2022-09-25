#include <math.h>
#include <stdio.h>

/*Circuito Lógico: Divisor de Frequência.
Algoritmo para calcular a frequência na saída de cada FF em um contador
Assíncrono Author: Silas Vasconcelos Cruz -
Matéria:  Sistemas Digitais */

float funcao_Saida_FFs(int frequencia_In, int numero_FFs) {
	int i = 1;
	float fout = 0.0;
	float periodo = 0.0;

	for (i = 1; i <= numero_FFs; i++) {
		fout = (float)((frequencia_In) / pow(2, i));
		periodo = (float)((1) / (fout));

		printf(
			"A freqência de Sáida para o FF(%d) é de %.2f Hz\nPeríodo para o "
			"FF(%d):  %.2f segundos\n\n",
			i,
			fout,
			i,
			periodo);
	}
	return 0;
}
int main(void) {
	int p = 0, q = 0;

	printf("Script com valores de Frequência e Tempo para transmissão de 8 "
		   "bits!\n");

	printf("Digite o Valor da Frequência: ");
	scanf("%d", &p);
	printf("\nDigite o numero de FFs: ");
	scanf("%d", &q);

	return funcao_Saida_FFs(p, q);
}