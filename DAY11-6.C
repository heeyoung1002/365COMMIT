#include <stdio.h>

int main(void){
    
    int N;
    scanf("%d", &N);
    
    for(int i=1; i<=N; i++){
        printf("%d\n", N-i+1);
    }
    
    return 0;
}