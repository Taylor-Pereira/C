#include <stdio.h>
#include <stdlib.h>

void zeratabuleiro(char tabuleiro[3][3])
{
    int i;
    int j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            tabuleiro[i][j] = ' ';
        }
    }
}

void exibeTabuleiro (char tabuleiro[3][3])
{
    int i;
    int j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%c |", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}

void jogada(char tabuleiro[3][3], char player)
{
    int X, Y;
    while(1)
    {
        printf("Entre com as cordenadas: ");
        scanf("%d %d", &X, &Y);

        if((X > 2 || Y > 2) || ( X < 0 || Y < 0))
        {
            printf("Cordenada invalida!! \n");
        }
        else if(tabuleiro[X][Y] == ' ')
        {
            tabuleiro[X][Y] = player;
            break;
        }
        else
        {
            printf("Essa posicao ja foi utilizada\n");
        }
    }
}
int validaTabuleiro(char tabuleiro[3][3], char player)
{
    int i;
    int j;

    //validando linha

    for(i = 0; i < 3; i++)
    {
        if(tabuleiro[i][0] != ' '
                &&tabuleiro[i][0] == tabuleiro[i][1]
                &&tabuleiro[i][1] == tabuleiro[i][2])
        {
            return 1;
        }
    }

    //validando as colunas
    for(j = 0; j < 3; j++)
    {
        if(tabuleiro[0][j] != ' '
                &&tabuleiro[0][j] == tabuleiro[1][j]
                &&tabuleiro[1][j] == tabuleiro[2][j])
        {
            return 1;
        }
    }

    //validar diagonais

    if(tabuleiro[0][0] != ' '
            && tabuleiro[0][0] == tabuleiro[1][1]
            && tabuleiro[1][1] == tabuleiro[2][2])
    {
        return 1;
    }
    if(tabuleiro[0][2] != ' '
            && tabuleiro[0][2] == tabuleiro[1][1]
            && tabuleiro[1][1] == tabuleiro[2][0])
    {
        return 1;
    }
    return 0;
}

int verificaEmpate(char tabuleiro[3][3])
{
    int i;
    int j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(tabuleiro[i][j] == ' '){
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    char tabuleiro[3] [3];
    char p1 = 'X';
    char p2 = 'O';
    char player = p1;

    zeratabuleiro(tabuleiro);
    exibeTabuleiro(tabuleiro);

    while(1)
    {
        jogada(tabuleiro, player);
        exibeTabuleiro(tabuleiro);
        if(validaTabuleiro(tabuleiro, player) == 1)
        {
            printf("O jogador %c VENCEU\n", player);
            break;
        }
        else
        {
            if(verificaEmpate(tabuleiro) == 1){
                printf("Empate - Fim de jogo!!\n");
                break;
            }
            else if(player == p1) player = p2;
            else player = p1;
        }
    }
    printf("FIM DE JOGO!!");
    return 0;
}
