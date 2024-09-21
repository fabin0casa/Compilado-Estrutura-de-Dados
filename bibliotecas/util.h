//util.h com utilidades gerais para o projeto
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifdef _WIN32
    #define SETTITLE(title) system("title " title)
#else
    #define SETTITLE(title) printf("\033]0;%s\007", title)
#endif

//troca cor do texto pra nao ter que usar o pelles C
#ifdef _WIN32
#include <windows.h>
void setTextColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

void resetTextColor() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 15);  // Cor padrão do Windows
}

//faz funcionar no linux
#else
void setTextColor(int color) {
	//troca os codigos das cores para o padrão do linux, inseridos no meu projeto com o padrão do windows
	switch(color) {
        case 0: color = 30; break;
        case 1: color = 34; break;
        case 2: color = 32; break;
        case 3: color = 36; break;
        case 4: color = 31; break;
        case 5: color = 35; break;
        case 6: color = 33; break;
        case 7: color = 37; break;
        case 8: color = 90; break; 
        case 9: color = 94; break; 
        case 10: color = 92; break;
        case 11: color = 96; break;
        case 12: color = 91; break;
        case 13: color = 95; break;
        case 14: color = 93; break;
        case 15: color = 97; break;
        
        default: color = 37; break;
    }
    printf("\033[%dm", color);
}

void resetTextColor() {
    printf("\033[0m");
}
#endif

//define 'cls' pra windows e 'clear' pra linux
#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

//define a pausa do sistema para windows e linux
#ifdef _WIN32
#define PAUSE system("pause")
#else
#define PAUSE {printf("Pressione Enter para continuar..."); getchar();}
#endif

//imprime uma linha
void l() {
    printf("\n-----------------------------------------------------------------\n\n");
}

//imprime centralizado
//printc significa Print Centralized
void printc(char frase[]) {
    int largura = 66;
    int comprimento_frase = strlen(frase);

    // Calcula quantos espaços são necessários para centralizar
    int espacos = (largura - comprimento_frase) / 2;

    // Imprime os espaços seguidos da palavra
    for (int i = 0; i < espacos; i++) {
        printf(" ");
    }
    printf("%s\n", frase);
}

//imprime um desenho ascii com os dizeres "menu principal"
void printMenuPrincipal(){
	printc("                              _         _         _ ");
	printc(" _____ ___ ___ _ _    ___ ___|_|___ ___|_|___ ___| |");
	printc("|     | -_|   | | |  | . |  _| |   |  _| | . | .'| |");
	printc("|_|_|_|___|_|_|___|  |  _|_| |_|_|_|___|_|  _|__,|_|");
	printc("                     |_|                 |_|        ");
}

//outra função para imprimir um desenho ascii, para os dizeres "sub menu"
void printSubMenu(){
	printc("         _                        ");
	printc(" ___ _ _| |_    _____ ___ ___ _ _ ");
	printc("|_ -| | | . |  |     | -_|   | | |");
	printc("|___|___|___|  |_|_|_|___|_|_|___|");
	printf("\n");
}

// Função para limpar o buffer do teclado
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Função para garantir que o valor digitado é um número inteiro válido
// função pensada para o menu
int lerInteiro() {
    int valor;
    int resultado;

    while (1) {
        resultado = scanf("%d", &valor);

        if (resultado == 1) {
            limparBuffer();
            return valor;
        } else {
            limparBuffer(); // Limpar o buffer para evitar um loop infinito
            return -1; //retorna -1 se não for um numero
        }
    }
}

//Função que nao deixa o usuário colocar letras onde deve se por numeros
// scann significa Scan Number
double scann() {
    double valor;
    int resultado;

    while (1) {
        resultado = scanf("%lf", &valor);

        if (resultado == 1) { // Se o valor for válido (número double)
            limparBuffer(); // Limpar buffer para evitar problemas
            return valor; // Retorna o número double
        } else { // Se o valor não for um número válido (ex: uma palavra)
            limparBuffer(); // Limpa o buffer para evitar loop infinito
            printf("Nao coloque letras aqui!! Insira um numero!\n");
        }
    }
}

// Função personalizada para ler uma string com segurança e remover o '\n'
void getLine(char *buffer, int tamanho) {
    fgets(buffer, tamanho, stdin);               // Lê a string com fgets
    buffer[strcspn(buffer, "\n")] = '\0';        // Remove o '\n' se presente
}
