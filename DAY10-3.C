#include <stdio.h>

int main(void){
    
    int a,b;
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    
    int c,d,e;
    c= a*(b%10);
    d= a*(b%100/10);
    e= a*(b/100);
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);
    
    int f;
    f=c+(d*10)+(e*100);
    printf("%d",f);
    
    return 0;
}