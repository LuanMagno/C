#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   int opcao=0;
    setlocale(LC_ALL, "Portuguese");//definindo linguagem

    printf("\t###Cartório da Ebac###\n\n");
    printf(" Opcao 1 - Registrar nomes\n");
    printf(" Opcao 2 - Pesquisar nomes\n");
    printf(" Opcao 3 - Deletar nomes\n\n");
    printf("Opção:");
    
    scanf("%d", &opcao);//para ler a opção utilizada

    if (opcao==1)//caso a leitura seja o numero um
    {
       printf("Você escolheu registrar nomes\n");
    }
     if (opcao==2)
    {
       printf("Você escolheu pesquisar nomes\n");
    }
     if (opcao==3)
    {
       printf("Você escolheu deletar nomes\n");
    }
    if (opcao<=0 || opcao>=4)//o || se equivale ao "ou"
    {
      printf("Escolha uma opção válida\n");
    }
   return 0;//não é essencial porém é uma "boa prática"
}