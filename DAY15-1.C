#include <stdio.h>

int main(void){ 
    int A,B,C;
    int array[10]={0}; //배열의 값을 0으로 지정
    
    scanf("%d\n%d\n%d\n", &A, &B, &C);
    int temp = A*B*C; //A,B,C를 입력 받아서 합을 구하기

    while(temp !=0){ // 각 숫자가 몇번 쓰였는지 구하기
        array[temp%10]++;
        temp = temp/10;
    }

    for(int i=0; i<10; i++){ //출력하기
        printf("%d\n", array[i]);    
    }
    return 0;
}