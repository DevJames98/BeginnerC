#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

char board[3][3]; 

void initializeBoard()
{
    //init board
    for(int x=0;x<3;x++)
        for(int y=0;y<3;y++)
            board[x][y] = ' ';   
}


bool humanPlayerMove()
{
    //Get Value from player
    int row, col;
    printf("Enter Row (0 to 2): ");
    scanf("%d", &row);
    printf("Enter Column (0 to 2): ");
    scanf("%d", &col);

    //if move is within range
    if(row < 0 || row > 2 || col < 0 || col > 2){
        printf("INVALID MOVE! Enter a  valid position!\n");
        return false;
    }
    
    //board space is not empty, return false
    if(board[row][col] != ' ')
    {
        printf("INVALID MOVE! Space already taken!\n");
        return false;
    }

    if(board[row][col] == ' ')
    {
        board[row][col] = 'X'; //make move
        return true;
    }
    return false;

}

//Displays the Game Board
void displayBoard()
{
    for(int x=0;x<3;x++){
        for(int y=0;y<3;y++) {
            printf("%c|",board[x][y]);   
        }
        printf("\n");
    }
    printf("-----------\n");
}

void computerPlayerMove()
{
    srand(time(NULL)); //random seed
    int row, col;
    do
    {
        row = rand() % 3;
        col = rand() % 3;
    }while(board[row][col] != ' ');

    board[row][col] = 'O';
    gameWon();
}

char gameWon(){
    
    for(int r=0; r<3; r++){
        //horizontal winning
        if(board[r][0] == 'X' && board[r][1] == 'X' && board[r][2] == 'X'){
            printf("Player has won!");
            return 'X';
        }
        else if(board[r][0] == 'O' && board[r][1] == 'O' && board[r][2] == 'O'){
            printf("Computer has won!");
            return 'O';
        }
        //vertical winning
        else if(board[0][r] == 'X' && board[1][r] == 'X' && board[2][r] == 'X'){
            printf("Player has won!");
            return 'X';
        }
        else if(board[0][r] == 'O' && board[1][r] == 'O' && board[2][r] == 'O'){
            printf("Computer has won!");
            return 'O';
        }
        //diagonal winning
        else if(board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X'){
            printf("Player has won!");
            return 'X';
        }
        else if(board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X'){
            printf("Player has won!");
            return 'X';
        }
        else if(board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O'){
            printf("Computer has won!");
            return 'O';
        }
        else if(board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O'){
            printf("Computer has won!");
            return 'O';
        }
        else{
            
        }
    }
}

