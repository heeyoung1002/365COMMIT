#include <stdio.h>

int main(void){
    
    int input;
    int arry[42]={0}; //결과값을 카운팅 위한 배열 값을 0으로 선언
    
    for(int i=0; i<10; i++){ //10개의 숫자를 input 받으며 42로 나누어 나머지를 배열의 숫자로 정한다
        scanf("%d", &input);
        arry[input%42]++;
    }
    
    int count=0; //배열에 값이 0이 아닌 수들을 더해서 총 갯수를 구한다
    for(int i=0; i<42; i++){
        if(arry[i] != 0){
            count++;
        }
    }
    
    printf("%d", count);
    
    return 0;
}