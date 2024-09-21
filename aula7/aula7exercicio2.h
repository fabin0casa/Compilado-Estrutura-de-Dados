#include <stdio.h>

/*void troca(int v[], int i, int j) {
   int x = v[i];
   v[i] = v[j];
   v[j] = x;
}*/

void empurra(int v[], int n) {
    
    int maior = 0, i=0, j=0;
    
    for(i=0; i <= n; i++){
        if (i == 0)
            maior = v[i];
            
        if (v[i] > maior)
            maior = v[i];
    }
   
     for(j=0; j < n-1; j++)
      
        if(v[j] == maior)
            trocaIJ(v, j , j+1);
         
    
}

/*void exibe(int v[], int n){ //essa função ja havia sido declarada anteriormente, entao nao tenho que ficar repetindo ela
    int i=0;
    
    for (i = 0; i <= n - 1; i++){
        printf("%d ", v[i]);
    }
}*/


int aula7exercicio2(void) {
	system(CLEAR);
	l();
	printc("AULA 7 - EXERCICIO 2");
	l();
	printc("Implementacao na funcao 'empurra'.");
	printc("Ele encontra o maior valor em um vetor e, em seguida,");
	printc("'empurra' esse valor para o final");
	l();
   int v[10] = {83,31,91,46,27,20,99,25,96,80};
   printf("vetor original:\n ");
   	exibe(v,10);
	printf("\nvetor depois do empurra:\n");
   empurra(v,10);
   exibe(v,10);
   
    l();
    PAUSE;
    system(CLEAR);
   return 0;
}
