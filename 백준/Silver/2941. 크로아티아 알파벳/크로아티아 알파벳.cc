#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    char s[101];
    cin >> s;
    int i, total=0, k=0;
    while(s[total]!='\0'){
        total+=1;
    }
    i=0;
    while(i<total){
        if((s[i]=='c'||s[i]=='d'||s[i]=='s'||s[i]=='z')&&(s[i+1]=='='||s[i+1]=='-')){
            k++;
            i+=2;
        }
        else if((s[i]=='n'||s[i]=='l')&&(s[i+1]=='j')){
            k++;
            i+=2;
        }
        else if(s[i]=='d'&&s[i+1]=='z'&&s[i+2]=='='){
            k++;
            i+=3;
        }
        else {
            k++;
            i++;
        }
    }
    printf("%d\n", k);
    return 0;
}