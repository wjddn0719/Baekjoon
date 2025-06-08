#include <stdio.h>

int main(){
    char a, d;
    scanf("%c%c", &a,&d);
    if(a=='A' && d=='0')printf("4.0\n");
    else if(a=='A' && d == '+')printf("4.3\n");
    else if(a=='A' && d == '-')printf("3.7\n");
    else if(a=='B' && d == '+')printf("3.3\n");
    else if(a=='B' && d == '0')printf("3.0\n");
    else if(a=='B' && d == '-')printf("2.7\n");
    else if(a=='C' && d == '+')printf("2.3\n");
    else if(a=='C' && d == '0')printf("2.0\n");
    else if(a=='C' && d == '-')printf("1.7\n");
    else if(a=='D' && d == '+')printf("1.3\n");
    else if(a=='D' && d == '0')printf("1.0\n");
    else if(a=='D' && d == '-')printf("0.7\n");
    else printf("0.0\n");
    return 0;
}