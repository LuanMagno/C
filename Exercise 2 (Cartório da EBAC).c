#include <stdio.h> //Comunicação de usuario
#include <stdlib.h> //Alocamento de espaço na memória 
#include <locale.h> //Acentuação por região
int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Cartório da EBAC \n\n");
    printf("Escolha a opção do menu:\n");
    printf("1-Registrar nomes\n");
    printf("2-Consultar nomes\n");
    printf("3-Deletar nomes\n");
    
}