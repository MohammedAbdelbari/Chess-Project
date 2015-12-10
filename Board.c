#include <stdio.h>
#include "Board.h"
void printBoard(void)
{
    int i,j;
    for(i = 0 ; i < 8 ; i++)
    {
        printf("\t%c",'A' + i);
    }

    for(i = 0 ; i < 8 ; i++)
    {
        printf("\n\n\n%d",8 - i);
        for(j = 0 ; j < 8 ; j++)
        {
           printf("\t%c",board[i][j]);
        }
        if(i == 1)
        {
            printf("\t\t ****Graveyard****");
        }
        if(i == 2)
        {
            for(j = 0 ; j < graveyard1Size ; j++)
            {
                if(j == 0)
                    printf("\t\t%c",player1Graveyard[j]);
                else
                    printf("  %c",player1Graveyard[j]);
            }
        }
        if(i == 4)
        {
            for(j = 0 ; j < graveyard2Size ; j++)
            {
                if(j == 0)
                    printf("\t\t%c",player2Graveyard[j]);
                else
                    printf("  %c",player2Graveyard[j]);
            }
        }
    }
    printf("\n");
}

void resetBoard(void)
{
    int i,j;
    graveyard1Size = 0;
    graveyard2Size = 0;
    for(i = 0 ; i < 8 ; i++)
    {
        for(j = 0 ; j < 8 ; j++)
        {
            if(i > 1 && i < 6)
            {
                    if( (i + j) % 2 == 0 )
                            board[i][j] = '#';
                    else
                            board[i][j] = '-';
            }
            else if ( i == 6)
                    board[i][j] = 'P';
            else if ( i == 1)
                    board[i][j] = 'p';
            else if(i == 7)
            {
                if(j == 0 || j == 7)
                    board[i][j] = 'R';
                else if(j == 1 || j == 6)
                    board[i][j] = 'N';
                else if(j == 2 || j == 5)
                    board[i][j] = 'B';
                else if(j == 3)
                    board[i][j] = 'Q';
                else
                    board[i][j] = 'K';
            }
            else
            {
                if(j == 0 || j == 7)
                    board[i][j] = 'r';
                else if(j == 1 || j == 6)
                    board[i][j] = 'n';
                else if(j == 2 || j == 5)
                    board[i][j] = 'b';
                else if(j == 3)
                    board[i][j] = 'q';
                else
                    board[i][j] = 'k';
            }

        }
    }
}
