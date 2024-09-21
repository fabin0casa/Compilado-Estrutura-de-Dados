#include <stdio.h>
#include <math.h>

int aula1exercicio2(void) {
    system(CLEAR);
	l();
	printc("AULA 1 - EXERCICIO 2");
	l();
	printc("Exercicio para calcular o IMC de uma pessoa, e");
	printc("faz uma constatacao a partir do resultado.");
	l();
    float peso, altura, i;
    
    printf("Insira o peso (em kilos): ");
	peso = scann();  
    printf("Insira a altura (em metros): ");
    altura = scann();
    
    i = peso/pow(altura,2);
    printf("\no IMC eh %.2f\n\n", i);
    
    if (i < 18.5) 
		puts("Essa pessoa eh Magra");
		
    else if 
		(i > 30) puts("Essa pessoa eh Obesa");
		
    else 
		puts ("Essa pessoa eh Normal");
		
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}
