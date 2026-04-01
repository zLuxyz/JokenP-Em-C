#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

int Escolha_Jogador, Escolhar_Maquina;
srand (time(0));

printf("\t---JOKEN PO---\n");
printf("\tEscolha uma Opção:\n");
printf("1. Pedra\n");
printf("2. Papel\n");
printf("3. Tesoura\n");
scanf("%d", &Escolha_Jogador);

Escolhar_Maquina = rand () % 3 + 1;

switch (Escolha_Jogador)
{
case 1:
    printf("Jogador: Pedra - ");
    break;
case 2:
     printf("Jogador: Papel - ");
     break;
case 3:
     printf("Jogador: Tesoura - ");
     break;
default:
printf("Opção Invalida!");
    break;
}


switch (Escolhar_Maquina)
{
case 1:
    printf("Máquina: Pedra\n");
    break;
case 2:
     printf("Máquina: Papel\n");
     break;
case 3:
     printf("Máquina: Tesoura\n");
     break;
}

if (Escolhar_Maquina == Escolha_Jogador)
{
    printf("\t\n1EMPATE!!!\n");

    
} else if ((Escolha_Jogador == 1) && (Escolhar_Maquina == 3) || 
            (Escolha_Jogador == 2) && (Escolhar_Maquina == 1) ||
            (Escolha_Jogador == 3) && (Escolhar_Maquina == 2))    

printf ("\t\nVOCÊ GANHOU!!!\n");

else
printf ("\t\nVOCÊ PERDEU!!!\n");



return 0;
}