#include <stdio.h>
#include <math.h>

int aula1exercicio1(void) {
	system(CLEAR);
	l();
	printc("AULA 1 - EXERCICIO 1");
	l();
	printc("Exercicio para calcular o indice de massa corporal de uma pessoa.");
	l();
    float peso = 0,altura = 0, indice = 0;
    
    printf("Insira o peso (em kilos): ");
	peso = scann();   
    printf("Insira a altura (em metros): ");
    altura = scann();
    
    indice = peso / pow(altura,2);
    
    printf("\nIMC = %.2f\n", indice);
    l();
    PAUSE;
    system(CLEAR);
    return 0;

}
