#include <stdio.h>
void board(char cells[3][3]){
    printf("\t %c | %c | %c \n",cells[0][0],cells[0][1],cells[0][2]);
    printf("\t-----------\n");
    printf("\t %c | %c | %c \n",cells[1][0],cells[1][1],cells[1][2]);
    printf("\t-----------\n");
    printf("\t %c | %c | %c \n",cells[2][0],cells[2][1],cells[2][2]);
}
int main(){
    char gameRows[3][3] = { {'1','2','3'},
                            {'4','5','6'},
                            {'7','8','9'} };
    board(gameRows);
}