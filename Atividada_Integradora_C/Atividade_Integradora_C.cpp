// Atividade Integradora
// Desenvolvido por:Alessandro Klein

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <dos.h>

int main()
{
    int computador;
    char jogador;
    char nome[20];
    char desejaJogarDeNovo = '1';

    printf("\n\n**  **BEM VINDO AO PEDRA - PAPEL - TESOURA** \n");
    printf("     **VOCE JOGARA CONTRA O COMPUTADOR!!** **");
    printf("\n\n   Regras do jogo:\n 1. Vence o melhor de 3 jogadas!\n 2. Pedra ganha de tesoura!\n 3. Papel vence de  pedra!\n 4. Tesoura vence de papel\n");
    printf("\n\nDigite seu nome:");
    scanf("%s", nome);

    system("cls");

    while (desejaJogarDeNovo == '1')
    {
        int pontos_jogador = 0, pontos_computador = 0; // toda vez que for jogar de novo zera os pontos

        while ((pontos_jogador + pontos_computador) < 3)
        {

            system("cls");
            printf("\n-------------------------PLACAR ATUAL DE PEDRA - PAPEL - TESOURA---------------------------\n\n");
            printf("                   %d %s X Computador %d\n", pontos_jogador, nome, pontos_computador);
            printf("\n-----------------------------------------------------------\n");
            printf("1. Pedra\n");
            printf("2. Papel\n");
            printf("3. Tesoura\n");
            jogador = getch();
            srand(time(NULL));
            computador = rand() % 3; // gera um numero aleatorio
            switch (computador)
            {
            case 1:
                printf("\n\n computador = Pedra");
                break;
            case 2:
                printf("\n\ncomputador = Papel");
                break;
            case 3:
                printf("\n\ncomputador = Tesoura");
            }
            switch (jogador)
            {
            case '1':
                printf("\n%s = Pedra\n", nome);
                break;
            case '2':
                printf("\n%s = Papel\n", nome);
                break;
            case '3':
                printf("\n%s = Tesoura\n", nome);
                break;
            }

            if (jogador > '3')
            {
                printf("\n\n  Voce escolheu uma opcao invalida, escolha novamente!\n\n");

                switch (jogador)
                {
                case '1':
                    printf("\n%s = Pedra\n", nome);
                    break;
                case '2':
                    printf("\n%s = Papel\n", nome);
                    break;
                case '3':
                    printf("\n%s = Tesoura\n", nome);
                    break;
                }
            }
            else
            {

                if ((jogador == '1' && computador == 2) || (jogador == '1' && computador == 3) || (jogador == '2' && computador == 1)) // verifica se o jogador venceu
                {
                    printf("\n\n     %s venceu!\n\n", nome);

                    pontos_jogador++;
                }
                else
                {
                    if ((jogador == '1' && computador == 1) || (jogador == '2' && computador == 2) || (jogador == '3' && computador == 3)) // verifica se houve empate
                    {
                        printf("\n\n   Empate!\n\n");
                        printf("\n\n   Placar atualiza na proxima rodada, aperte qualquer tecla para continuar jogando ou x, alt+f4 para fechar!\n\n");
                        pontos_jogador++;
                        pontos_computador++;
                    }
                    else
                    {
                        printf("\n\n   Computador venceu!\n\n");
                        printf("\n\n   Placar atualiza na proxima rodada, aperte qualquer tecla para continuar jogando ou x, alt+f4 para fechar!\n\n");
                        pontos_computador++;
                    }
                }
            }
            getch();
        }
        system("cls"); // LIMPA A TELA, EXIBE A PONTUACAO ATUALIZADA E O VENCEDOR
        printf("\n-------------------------PLACAR ATUAL DO PEDRA - PAPEL - TESOURA---------------------------\n\n");
        printf("                   %d %s X Computador %d\n", pontos_jogador, nome, pontos_computador);
        printf("\n-----------------------------------------------------------\n");
        if (pontos_jogador > pontos_computador)
            printf("\n\n     %s venceu a melhor de 3!", nome);
        else
            printf("\n\n     Computador venceu a melhor de 3!");

        printf("\n\nDeseja jogar de novo?");
        printf("\n\n1 - SIM\n2 - NAO");
        desejaJogarDeNovo = getch();
    }
}

// Atividade Integradora
// Desenvolvido por:Alessandro Klein
