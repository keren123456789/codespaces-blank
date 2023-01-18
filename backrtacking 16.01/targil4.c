//בעיית שמונה המלכות 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    
    return 0;
}

void queens_wrapper(int)
    {
        int* board = malloc(n*sizeof(int));
        if(!board)
            return;
        
    }

void binary( int board[], int n , int col){ //כל תא בלוח מייצג עמודה בלוח
    if(indew == n){
        print(board,n);
        return;
    }
    for( int i = 0; i<n; i++){
        if(!legal(board,n,col,i)) //בודקים שזה חוקי
            return;
        board[col] = i;
        binary(board,n,col+1);
    }
}