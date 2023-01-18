#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define K 3
/*שאלה 2 
יש להדפיס את כל המילים באורך אן מעל האלםבית של 
{0,1,2,....,k}*/

void binary (int word[], int n, int index);
void binary_wrapper(int n);
void print(int arr[],int n);

int main(){
    binary_wrapper(3);
    return 0;
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d", arr[i]);
    }
    printf("\n");
}
void binary_wrapper(int n){
    int *word = malloc(n*sizeof(int));
    if(word != NULL)return;
    binary(word,n,0);
    free(word);
}
void binary (int word[], int n, int index){
    if(index==n){
        print(word,n);
        return;
    }
    for(int i=0;i<K;i++){
        word[index]=i;
        binary(word,n,index + 1);
    }

}