#include <iostream>
using namespace std;

char len(char a[]);

int main(){
    cout.tie(NULL);
    cin.tie(NULL);
        char k[101];
        int max=0;
        cin >> k;
        for(int i=0; k[i]!='\0'; i++){
            max+=1;
        }
        int flag=1;
        for(int i=0; i<max/2; i++){
            if(k[i]!=k[max-1-i]){
                flag = 0;
                cout << "0\n";
                break;   
            }
        }
        if(flag==1)cout <<"1\n";
    return 0;
}