#include <stdio.h>

int main(void){
    
    int N,X;
    scanf("%d %d", &N, &X);
    
    int a;
    for(int i=0; i<N; i++){
        scanf("%d", &a);
        if(a<X){
            printf("%d", a);
            printf(" ");
        }
    }
    return 0;
}