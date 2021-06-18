#include <stdio.h>

int main(void){ 
    
    int input, sum=1;
    for(int i=0; i<3; i++){
        scanf("%d\n", &input);
        sum *= input;
    }

    int temp = sum;
    int array[10]={0};
    
    while(temp !=0){
        array[temp%10]++;
        temp = temp/10;
    }

    for(int i=0; i<10; i++){
        printf("%d\n", array[i]);    
    }
    return 0;
}