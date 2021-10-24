#include <stdio.h>
#include <stdlib.h>
void board(char cells[3][3]){
    system("cls");
    printf("\t    1   2   3 \n\n");
    printf("\t1   %c | %c | %c \n",cells[0][0],cells[0][1],cells[0][2]);
    printf("\t   -----------\n");
    printf("\t2   %c | %c | %c \n",cells[1][0],cells[1][1],cells[1][2]);
    printf("\t   -----------\n");
    printf("\t3   %c | %c | %c \n",cells[2][0],cells[2][1],cells[2][2]);
}
int main(){
    char gameRows[3][3] = { {' ',' ',' '},
                            {' ',' ',' '},
                            {' ',' ',' '} };
    char answer;
    int count_play,l,c,x,y,turn = 0;
    do {
        count_play = 1;
        for(x=0;x<=2;x++){
            for(y=0;y<=2;y++){
                gameRows[x][y] = ' ';
            }
        }
        do{
            board(gameRows);
            if(turn%2==0){
                printf("Jogador X\n"); // Deste modo as jogadas registradas com números pares serão o jogador X
            }else{
                printf("Jogador O\n"); // As jogadas ímpares são o jogador O
            }
            printf("Digite a linha: ");
            scanf("%i",&l);
            printf("Digite a coluna: ");
            scanf("%i",&c);
            if(l < 1 || c < 1 || l > 3 || c > 3 ){   //validação para limitar a jogada do usuário para inserir somente a linha e a coluna que caiba na matriz do jogo
                l = 0;
                c = 0;
            }else if(gameRows[l-1][c-1] != ' '){ 
                l = 0;
                c = 0;
            }else{
                if(turn%2==0){
                    gameRows[l-1][c-1] = 'X'; 
                }else{
                    gameRows[l-1][c-1] = 'O'; 
                }
                turn++;
                count_play++;
            }
            if(gameRows[0][0] == 'X' && gameRows[0][1] == 'X' && gameRows[0][2] == 'X'){count_play = 11;};
            if(gameRows[1][0] == 'X' && gameRows[1][1] == 'X' && gameRows[1][2] == 'X'){count_play = 11;};
            if(gameRows[2][0] == 'X' && gameRows[2][1] == 'X' && gameRows[2][2] == 'X'){count_play = 11;};
            if(gameRows[0][0] == 'X' && gameRows[1][0] == 'X' && gameRows[2][0] == 'X'){count_play = 11;};
            if(gameRows[0][1] == 'X' && gameRows[1][1] == 'X' && gameRows[2][1] == 'X'){count_play = 11;};
            if(gameRows[0][2] == 'X' && gameRows[1][2] == 'X' && gameRows[2][2] == 'X'){count_play = 11;};
            if(gameRows[0][0] == 'X' && gameRows[1][1] == 'X' && gameRows[2][2] == 'X'){count_play = 11;};
            if(gameRows[0][2] == 'X' && gameRows[1][1] == 'X' && gameRows[2][0] == 'X'){count_play = 11;};

            if(gameRows[0][0] == 'O' && gameRows[0][1] == 'O' && gameRows[0][2] == 'O'){count_play = 12;};
            if(gameRows[1][0] == 'O' && gameRows[1][1] == 'O' && gameRows[1][2] == 'O'){count_play = 12;};
            if(gameRows[2][0] == 'O' && gameRows[2][1] == 'O' && gameRows[2][2] == 'O'){count_play = 12;};
            if(gameRows[0][0] == 'O' && gameRows[1][0] == 'O' && gameRows[2][0] == 'O'){count_play = 12;};
            if(gameRows[0][1] == 'O' && gameRows[1][1] == 'O' && gameRows[2][1] == 'O'){count_play = 12;};
            if(gameRows[0][2] == 'O' && gameRows[1][2] == 'O' && gameRows[2][2] == 'O'){count_play = 12;};
            if(gameRows[0][0] == 'O' && gameRows[1][1] == 'O' && gameRows[2][2] == 'O'){count_play = 12;};
            if(gameRows[0][2] == 'O' && gameRows[1][1] == 'O' && gameRows[2][0] == 'O'){count_play = 12;};
        }while(count_play <= 9);
        board(gameRows);
        if(count_play == 10){
            printf("Jogo empatado \n");
        }
        if(count_play == 11){
            printf("Vencedor X \n");
        }
        if(count_play == 12){
            printf("Vencedor O \n");
        }    
        printf("Deseja jogar novamente? [S-N]\n");
        scanf("%s",&answer);
    }while(answer == "S"); //criado o laço de repetição que continua jogando até que player responda algo diferente de S
}