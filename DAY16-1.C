#include<stdio.h>

int main(void){
    
    int N;
    double scores[1000]; //과목의 점수들이 저장된 배열의 선언
    double sum=0, M=0;  // 총합과 최댓값 0으로 설정
    
    scanf("%d\n", &N); //사용자로 부터 시험본 과목의 개수 N 입력
    
    for(int i=0; i<N; i++){ //주어진 점수중에 최댓값 구하기
        scanf("%lf", &scores[i]); //시험점수 입력받기 
        
        if(scores[i] > M){
            M = scores[i]; 
        }
    }
    
    for(int i=0; i<N; i++){ //점수의 조작
        sum += (scores[i]/M)*100;
    }
    
    printf("%.2lf", sum/(double)N); //평균값 출력
    
    return 0;
}