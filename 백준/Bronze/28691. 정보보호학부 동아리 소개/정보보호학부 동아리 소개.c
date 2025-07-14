#include <stdio.h>

int main(){
    char a;
    scanf("%c", &a);
    if(a=='M')printf("MatKor");
    else if(a=='W')printf("WiCys");
    else if(a=='C')printf("CyKor");
    else if(a=='A')printf("AlKor");
    else printf("$clear");
    return 0;
}