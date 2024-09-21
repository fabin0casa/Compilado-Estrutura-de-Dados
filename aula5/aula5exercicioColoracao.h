#include <stdio.h>

#define dim 10

#define cor(i,j) (i>=0 && i<dim && j>=0 && j<dim ? desenho[i][j] : -1) 
#define parOrdenado(i,j) ((i)*100+(j))
#define linha(p)   ((p)/100)
#define coluna(p)   ((p)%100)


void mostraPaleta();
void inicializaDesenho(int);
void exibir(int[dim][dim]);
void colorir(int[dim][dim], int, int, int);
void abreArquivo(int [dim][dim], char *);

int desenho[dim][dim] = {
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
	{0, 0, 0, 0, 1, 1, 1, 0, 0, 0},
	{0, 0, 0, 1, 1, 1, 1, 1, 0, 0},
	{0, 0, 1, 1, 1, 1, 1, 1, 1, 0},
	{0, 0, 0, 2, 0, 0, 0, 2, 0, 0},
	{0, 0, 0, 2, 0, 0, 0, 2, 0, 0},
	{0, 0, 0, 2, 2, 2, 2, 2, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},

};


int aula5exercicioColoracao(void) {
    int i, j, novaCor;
	int opcao;
	char option;
	system(CLEAR);
	l();
	printc("AULA 5 - EXERCICIO DE COLORACAO");
	l();
	printc("Exercicio para testar as funionalidades da funcao");
	printc(" de coloracao do C.");
	l();

	printf("deseja ver a paleta de cores? (s/n)");
	scanf("%s", &option);

	if(option == 's' || option == 'S')
		mostraPaleta();

    while(1) {
    	setTextColor(2);
		printf("\nPixel art: \n\n");
        exibir(desenho);
        setTextColor(2);
		printf("\nEscolha o que quer fazer: ");

		printf("\n1 - Pintar com balde de tinta");
		printf("\n2 - Pintar com lapis");
		printf("\n3 - Pintar quadro inteiro");
		printf("\n4 - Ver paleta de cores");

		printf("\n\n5 - Abrir imagem 'Brasil'");
		printf("\n6 - Abrir imagem 'Creeper'");
		printf("\n7 - Abrir imagem 'Mario'");
		
		setTextColor(8);
		printf("\n\n0 - Sair\n");
		setTextColor(2);
		opcao = lerInteiro();

		switch(opcao){
			case 1:
		        printf("\nInsira uma nova cor para pintar com balde de tinta: ");

		        novaCor = scann();
		        
		        if(novaCor < 0) 
		            break;
		            
		        if(novaCor > 16) 
		            break;
		            
		        int consistir = 0;
		        do 
		        {
		            printf("\nQual coordenada da posicao desejada? \n");
					setTextColor(11);
					printf("coordenas, exs: (0,4) ou (3,6)   (linha, coluna) ");
					setTextColor(2);
					char input[10];
		            scanf("%9s", input);
    
					    // Verifica se o formato é válido
					    if (isdigit(input[0]) && input[1] == ',' && isdigit(input[2]) && input[3] == '\0') {
					        // Converte os caracteres numéricos para inteiros
					        i = input[0] - '0';
					        j = input[2] - '0';
					        consistir = 1;
					    } else {
					        printf("Entrada invalida!\n");
					    }
		        }
		        while(consistir == 0);
		        
		        colorir(desenho, i, j, novaCor);
		        system(CLEAR);
		        l();
				printc("AULA 5 - EXERCICIO DE COLORACAO");
				l();
				printc("Exercicio para testar as funionalidades da funcao");
				printc(" de coloracao do C.");
				l();
				break;

			case 2:
		        printf("\nInsira uma nova cor para pintar com o lapis: ");

		        novaCor = scann();
		        
		        if(novaCor < 0) 
		            break;
		            
		        if(novaCor > 16) 
		            break;
		            
		        consistir = 0;
		        
		        do 
		        {
		            printf("\nQual coordenada da posicao desejada? \n");
					setTextColor(11);
					printf("coordenas, exs: (0,4) ou (3,6)   (linha, coluna) ");
					setTextColor(2);
					char input[10];
		            scanf("%9s", input);
    
					    // Verifica se o formato é válido
					    if (isdigit(input[0]) && input[1] == ',' && isdigit(input[2]) && input[3] == '\0') {
					        // Converte os caracteres numéricos para inteiros
					        i = input[0] - '0';
					        j = input[2] - '0';
					        consistir = 1;
					    } else {
					        printf("Entrada invalida!\n");
					    }
		        }
		        while(consistir == 0);
		        
		        desenho[i][j] = novaCor;
		        system(CLEAR);
		        l();
				printc("AULA 5 - EXERCICIO DE COLORACAO");
				l();
				printc("Exercicio para testar as funionalidades da funcao");
				printc(" de coloracao do C.");
				l();
				break;

			case 3:
				setTextColor(4);
				printf("ATENCAO!!!! esse processo ira reiniciar o seu desenho, deseja prosseguir? (s/n)");
				setTextColor(2);
				scanf("%s", &option);

				if(option == 'n' || option == 'N')
					break;

		        printf("\nInsira uma nova cor para pintar o quadro todo: ");

		        novaCor = scann();
		        
		        if(novaCor < 0) 
		            break;
		            
		        if(novaCor > 16) 
		            break;
		        
		        inicializaDesenho(novaCor);
		        system(CLEAR);
		        l();
				printc("AULA 5 - EXERCICIO DE COLORACAO");
				l();
				printc("Exercicio para testar as funionalidades da funcao");
				printc(" de coloracao do C.");
				l();
				break;

			case 4:
				system(CLEAR);
				l();
				printc("AULA 5 - EXERCICIO DE COLORACAO");
				l();
				printc("Exercicio para testar as funionalidades da funcao");
				printc(" de coloracao do C.");
				l();
				mostraPaleta();
				break;
				
			case 5:
				setTextColor(4);
				printf("ATENCAO!!!! esse processo ira reiniciar o seu desenho, deseja prosseguir? (s/n)");
				setTextColor(2);
				scanf("%s", &option);

				if(option == 'n' || option == 'N'){
					system(CLEAR);
					l();
					printc("AULA 5 - EXERCICIO DE COLORACAO");
					l();
					printc("Exercicio para testar as funionalidades da funcao");
					printc(" de coloracao do C.");
					l();
					break;
				}

				abreArquivo(desenho, "aula5/imagemBrasil.txt");
				system(CLEAR);
				l();
				printc("AULA 5 - EXERCICIO DE COLORACAO");
				l();
				printc("Exercicio para testar as funionalidades da funcao");
				printc(" de coloracao do C.");
				l();
				break;

			case 6:
				setTextColor(4);
				printf("ATENCAO!!!! esse processo ira reiniciar o seu desenho, deseja prosseguir? (s/n)");
				setTextColor(2);
				scanf("%s", &option);

				if(option == 'n' || option == 'N'){
					system(CLEAR);
					l();
					printc("AULA 5 - EXERCICIO DE COLORACAO");
					l();
					printc("Exercicio para testar as funionalidades da funcao");
					printc(" de coloracao do C.");
					l();
					break;
				}

				abreArquivo(desenho, "aula5/imagemCreeper.txt");
				system(CLEAR);
				l();
				printc("AULA 5 - EXERCICIO DE COLORACAO");
				l();
				printc("Exercicio para testar as funionalidades da funcao");
				printc(" de coloracao do C.");
				l();
				break;

			case 7:
				setTextColor(4);
				printf("ATENCAO!!!! esse processo ira reiniciar o seu desenho, deseja prosseguir? (s/n)");
				setTextColor(2);
				scanf("%s", &option);

				if(option == 'n' || option == 'N'){
					system(CLEAR);
					l();
					printc("AULA 5 - EXERCICIO DE COLORACAO");
					l();
					printc("Exercicio para testar as funionalidades da funcao");
					printc(" de coloracao do C.");
					l();
					break;
				}
				
				abreArquivo(desenho, "aula5/imagemMario.txt");
				system(CLEAR);
				l();
				printc("AULA 5 - EXERCICIO DE COLORACAO");
				l();
				printc("Exercicio para testar as funionalidades da funcao");
				printc(" de coloracao do C.");
				l();
				break;

			case 0:
				l();
				printc("saindo...\n");
				l();
			    PAUSE;
			    system(CLEAR);
				return 0;
			
			default:
				system(CLEAR);
				l();
				printc("AULA 5 - EXERCICIO DE COLORACAO");
				l();
				printc("Exercicio para testar as funionalidades da funcao");
				printc(" de coloracao do C.");
				l();
				printf("essa nao eh uma opcao valida!!!\n");
				l();
				break;
    	}
	}
	
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}

void mostraPaleta(){
	l();
	printf("\nPaleta de cores: \n\n");
	for (int i = 1; i < 16; i++){
		setTextColor(i);
		if(i<10)
			printf(" %i %c%c	",i,219,219);
		else
			printf("%i %c%c	",i,219,219);
			
		if (i%3 == 0) printf("\n");		
	}
	setTextColor(2);
	l();
}

void inicializaDesenho(int cor){
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++){
			desenho[i][j] = cor;
		}
	}

}

void exibir(int desenho[dim][dim]) {
	for(int i=-1; i<dim; i++) {
	  setTextColor(8);

		for(int j = -1; j < dim; j++){

			if( (i < 0) && (j < 0) ){ 
				printf("  ");
			}

			else if(i < 0){
				printf(" %d",j);
			}

			else if(j < 0){
				printf("\n%2d",i);
			}

			else { 
				setTextColor(desenho[i][j]); 
				printf("%c%c",219,219); 
			}
		}
	}
   setTextColor(15);
}

void colorir(int desenho[dim][dim], int i, int j, int novaCor) {
    Fila F = fila(dim*dim);
    int corSelecionada = desenho[i][j];
    desenho[i][j] = novaCor;
    enfileira(parOrdenado(i,j),F);
    
    if(novaCor == corSelecionada)
        return;
    
    while(!filaEstaVazia(F)) {
        int p = desenfileira(F);
        i = linha(p);
        j = coluna(p);
        
        if(cor(i-1,j) == corSelecionada ){ 
            desenho[i-1][j] = novaCor; 
            enfileira(parOrdenado(i-1,j),F); 
        }
        
        if(cor(i,j+1) == corSelecionada ){ 
            desenho[i][j+1] = novaCor; 
            enfileira(parOrdenado(i,j+1),F); 
        }
        if(cor(i+1,j) == corSelecionada ){ 
            desenho[i+1][j] = novaCor; 
            enfileira(parOrdenado(i+1,j),F); 
        }
        if(cor(i,j-1) == corSelecionada ){ 
            desenho[i][j-1] = novaCor; 
            enfileira(parOrdenado(i,j-1),F); 
        }
    }
    destroiFila(&F);
}

void abreArquivo(int desenho[dim][dim], char *string) { 
	
	FILE *arquivo = fopen(string,"r");
	
	if(!arquivo) {
		printf("Arquivo não encontrado");
		abort();
	}
	
	for(int i = 0; i < dim; i++){
		for(int j = 0; j < dim; j++){
			fscanf(arquivo,"%d", &desenho[i][j]);
		}
	}
		
	fclose(arquivo);
}


