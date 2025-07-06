#include <iostream>
using namespace std;

int main(){
    int S, P, count=0;
    char string[1000000];
    scanf("%d %d", &S, &P);
    for(int i=0; i<S; i++){
        scanf(" %c", &string[i]);
    }
    int A, C, G, T, a=0, c=0, g=0, t=0;
    cin >> A >> C >> G >> T;
    for(int i=0; i<P; i++){
        switch(string[i]){
            case 'A':
            a+=1;
            break;
            case 'C':
            c+=1;
            break;
            case 'G':
            g+=1;
            break;
            case 'T':
            t+=1; 
            break;
        }
    }
    if(A<=a && C<=c && G<=g && T<=t)count++;
    for(int i=0; i<S-P &&P+i<=S; i++){
        switch(string[i]){
            case 'A':
            a-=1;
            break;
            case 'C':
            c-=1;
            break;
            case 'G':
            g-=1;
            break;
            case 'T':
            t-=1; 
            break;
        }
        switch(string[i+P]){
            case 'A':
            a+=1;
            break;
            case 'C':
            c+=1;
            break;
            case 'G':
            g+=1;
            break;
            case 'T':
            t+=1; 
            break;
        }
        if(A<=a && C<=c && G<=g && T<=t)count++;
    }
    printf("%d", count);
    return 0;
}