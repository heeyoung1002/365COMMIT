#include <stdio.h>

int main(void){
    
    int H,M;
    scanf("%d %d", &H, &M);
    
    if(H>=1 && M<45){
        printf("%d %d", H-1, M+60-45);
    }
    else if(H>=1 && M>=45){
        printf("%d %d", H, M-45);
    }
    else if (H<1 && M>=45){
        printf("%d %d", H, M-45);
    }
    else{
        printf("%d %d", 23, M+60-45);
    }
            
    return 0;
}