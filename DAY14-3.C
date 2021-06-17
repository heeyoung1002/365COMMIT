#include <stdio.h>

const int N = 9;

int main(void){
    
    int num[N], index;
    int max= 0;
    
    for(int i=1; i<=N; i++){
        scanf("%d\n", &num[i]);
        
        if(max<num[i]){
            max = num[i];
            index = i;
        }
    }
    printf("%d\n%d", max, index);
    
    return 0;
}