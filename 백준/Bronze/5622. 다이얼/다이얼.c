#include <stdio.h>

int main(){
    char a[15]={0,};
    int i, total=0;
    scanf("%s", a);
    for(i=0; a[i]!=0; i++){
        if(a[i]>='A' && a[i]<='C')total+=3;
        else if(a[i]>='D' && a[i]<='F')total+=4;
        else if(a[i]>='G' && a[i]<='I')total+=5;
        else if(a[i]>='J' && a[i]<='L')total+=6;
        else if(a[i]>='M' && a[i]<='O')total+=7;
        else if(a[i]>='P' && a[i]<='S')total+=8;
        else if(a[i]>='T' && a[i]<='V')total+=9;
        else if(a[i]>='W' && a[i]<='Z')total+=10;
    }
    printf("%d\n", total);
    return 0;
}