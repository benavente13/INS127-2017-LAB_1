#include<stdio.h>
int main(){
    int x[10];
    int i;
    for(i=0;i<10;i++){
        printf("\ningrese un numero:");
        scanf("%d\n", &x[i]);
        if (x[i]%2==0){
            printf("este numero es par: %d",x[i]);
        }
    }
}
