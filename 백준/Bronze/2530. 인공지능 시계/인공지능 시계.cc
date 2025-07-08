#include<iostream>
using namespace std;

int main(){
    int h=0, m=0, s=0, d=0;
    scanf("%d %d %d %d", &h, &m, &s, &d);
    int m1 = m+(d/60);
    int s1 = s+(d%60);
    if(s1>=60)m1+=s1/60;
    if(m1>=60)h+=m1/60;
    printf("%d %d %d", h%24, m1%60, s1%60);
    return 0;
}