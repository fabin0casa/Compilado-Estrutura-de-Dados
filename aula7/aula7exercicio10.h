#include <stdio.h>

int bsearchEx10(int x, int v[], int n) {
    int p = 0;
    int u = n-1;
    while(p <= u) {
        int m = (p + u) / 2;
        
        if(x == v[m]) 
            return 1;
            
        if(x < v[m]) 
            u = m-1;
        else 
            p = m+1; 
       
    }
    return 0;
}

int aula7exercicio10(void) {
	system(CLEAR);
	l();
	printc("AULA 7 - EXERCICIO 10");
	l();
	printc("Programa que implementa o bubble search.");
	printc("(1 = verdadeiro e 0 = falso)");
	l();
	
    int v[8] = {19,27,31,48,52,66,75,80};
    exibe(v,8);
    printf("\nverificando se ha um 27: %d\n", bsearchEx10(27,v,8));
    printf("\nverificando se ha um 51: %d\n", bsearchEx10(51,v,8));
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}
