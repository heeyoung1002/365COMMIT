#include <stdio.h>

int main(void){
    
    int N;
    scanf("%d\n", &N);
    
    int num[N];
    for(int i=0; i<N ; i++){
        scanf("%d ", &num[i]);
    }
    
    int min=1000001;
    int max=-1000001;

    for(int i=0; i<N; i++){
        if(num[i]<min){
            min = num[i];
        }
        if(max<num[i]){
            max = num[i];
        }
    }
    printf("%d %d\n", min, max);
    return 0;
}