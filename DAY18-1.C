#include <stdio.h>

int main(void){
    
    int c, n;
    scanf("%d\n", &c); //사용자로부터 테스트 개수 입력 받음
    
    for(int i = 0; i < c; i++){
    
        int scores[1000]; //n크기만한 배열을 선언
        int sum=0;
        double average = 0.0;
        
        scanf("%d", &n); //사용자로부터 학생의 수를 입력받음
        
        for(int j = 0; j < n; j++){
            scanf("%d", &scores[j]); //입렵받은 수를 배열에 차례대로 저장
            sum += scores[j]; //입력 받은 수를 더하기
        }
        
        average = (double)sum/n; //평균값구하기
        
        int add = 0;
        for(int k = 0; k < n; k++){
            if(scores[k]>average){
                add++;
            }
        }
        printf("%.3lf%%\n", (double)(add*100)/n);//평균값 넘는 것 반올림해서 3번째자리까지 출력
    }
}                 
   