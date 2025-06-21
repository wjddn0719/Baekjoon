#include <iostream>
using namespace std;

char len(char a[]);

int main(){
    cout.tie(NULL);
    cin.tie(NULL);
    while(true){ 
        char k[6];
        int max=0;
        cin >> k;
        if(k[0]=='0')break;
        for(int i=0; k[i]!='\0'; i++){
            max+=1;
        }
        int flag=1;
        for(int i=0; i<max/2; i++){
            if(k[i]!=k[max-1-i]){
                flag = 0;
                cout << "no\n";
                break;   
            }
        }
        if(flag==1)cout <<"yes\n";
    }
    return 0;
}