#include <stdio.h>
#include <stdlib.h>

float media(float v[], int n) {
    float s = 0;
    
    for(int i=0; i<n; i++)
        s += v[i];
        
    return s/n;
}

int aula1exercicio14(void) {
	system(CLEAR);
	l();
	printc("AULA 1 - EXERCICIO 14");
	l();
	printc("Programa que calcula a media de N numeros");
	l();
	
    int n;
    printf("insira a quantidade de numeros a serem analisados: ");
    n = scann();
    
    float *v = malloc(n*sizeof(float));
    
    for(int i=0; i<n; i++) {
        printf("\ninsira o (%d) numero: ",i+1);
        v[i] = scann();
    }
    printf("\nMedia = %.2f\n",media(v,n));
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}
