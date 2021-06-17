#include <stdio.h>

int main(void){
    int N;
    scanf("%d", &N);
    
    int a,b,c,d;
    int n = N;
    int sum = 0;
    
    while(1){
        a = n / 10;
        b = n % 10;
        c = (a + b) %10;
        d = (b*10) + c;
        n = d;
        
        sum++;
        
        if(n==N){
            break;
        }
    }
    printf("%d\n", sum);
    return 0;
}