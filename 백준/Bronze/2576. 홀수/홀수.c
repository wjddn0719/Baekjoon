#include <stdio.h>

int main(void){
    int a[7]={0,}, b[7]={0,},i,j=0, total=0, min=0, even=0;
    for(i=0; i<7; i++){
        scanf("%d", &a[i]);
        if(a[i]%2!=0){
            b[j]=a[i];
            j+=1;
        }
        else even+=1;
    }
    if(even==7){
        printf("-1\n");
        return 0;
    }
    else {
        min=b[0];
        for(i=0; b[i]!=0; i++){
            total+=b[i];
            if(min>b[i])min=b[i];
        }
        printf("%d\n%d\n", total, min);
        return 0;
    }
}