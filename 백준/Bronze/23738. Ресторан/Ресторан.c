#include <stdio.h>

int main(){
    char a[100]={0,};
    int i=0;
    scanf("%s", a);
    while(a[i]!=0){
        if(a[i]=='B')printf("v");
        else if(a[i]=='E')printf("ye");
        else if(a[i]=='A')printf("a");
        else if(a[i]=='K')printf("k");
        else if(a[i]=='M')printf("m");
        else if(a[i]=='O')printf("o");
        else if(a[i]=='T')printf("t");
        else if(a[i]=='H')printf("n");
        else if(a[i]=='P')printf("r");
        else if(a[i]=='C')printf("s");
        else if(a[i]=='X')printf("h");
        else if(a[i]=='Y')printf("u");
        i+=1;
    }
    printf("\n");
    return 0;
}