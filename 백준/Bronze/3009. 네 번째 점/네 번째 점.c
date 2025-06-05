#include <stdio.h>

int main(){
    int A[5]={0,}, B[5]={0,},i, AA=0, BA=0, AAA=0, BBA=0,k=0,l=0;
    for(i=1; i<=3; i++){
        scanf("%d %d", &A[i], &B[i]);
    } 
    AA=A[1];
    BA=B[1];
    for(i=1; i<=3; i++){
        if(AA!=A[i]){
            AAA=A[i];
        }
        if(BA!=B[i]){
            BBA=B[i];
        }
    }
    for(i=1; i<=3; i++){
        if(A[i]==AA)k+=1;
        if(B[i]==BA)l+=1;
    }
    if(k==2)printf("%d ", AAA);
    else printf("%d ", AA);
    if(l==2)printf("%d\n", BBA);
    else printf("%d\n", BA);
    return 0;
}