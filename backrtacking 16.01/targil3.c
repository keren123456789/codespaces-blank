#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define K 3
/*שאלה 3 
יש להדפיס את כל המילים באורך אן מעל האלפבית 
אבל צריך להדפיס רק את כל האותיות ששונות זו מזו
*/
int main(){
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
    int used[K] = {0};
    binary(word,n,0, used);
    free(word);
}
void binary (int word[], int n, int index,  int used[]){
      if(index==n){
        print(word,n);
        return;
    }
    for(int i=0;i<K;i++){
        //if(!legal(word,infex,i))
        //  COUNTINUE //היה אפשר לשים פונקצייה כזאת 
        if(used[i] == 1) continue;
        used[i] = 1;
        word[index]=i;
        binary(word,n,index + 1, used);
        used[i] = 0; //בשביל האיטרציה הבאה בעץ 
    }
}
//אם אפדר להחליף לולאה במערך עזר מומלץ 

