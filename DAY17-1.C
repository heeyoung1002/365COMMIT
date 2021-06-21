#include <stdio.h>
#include <string.h>

int main(void){

    int N;
    scanf("%d", &N); //사용자로부터 테스트 갯수 받기

    char arry[80]; //크기가 80인 문자열 배열 선언

    for(int i=0; i<N; i++){
        scanf("%s", arry);
        int sum =0; //한바퀴 돌고나면 총합의 초기화가 필요합다
        int add =1;

        for(int j=0; j<strlen(arry); j++){
            if(arry[j] == 'O'){
                sum +=add;
                add++;
            }
            else{
                add = 1;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}