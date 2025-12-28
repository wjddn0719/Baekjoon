#include <stdio.h>

int main(void){
    int N, L;
    scanf("%d %d", &N, &L);

    for(int len = L; len <= 100; len++){
        
        if((N - len*(len-1)/2) % len != 0) continue; 
        
        int x = (N - len*(len-1)/2) / len;
        
        if(x < 0) continue; 
        
        for(int i = 0; i < len; i++){
            printf("%d ", x + i);
        }
        return 0;
    }
    
    printf("-1\n"); 
    return 0;
}