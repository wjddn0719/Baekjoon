#include <iostream>
using namespace std;

int main(){
    cout.tie(NULL);
    cin.tie(NULL);
    int map[3];
while(1){
    for(int i=0; i<3; i++){
        cin >> map[i];
    }
    for(int i=0; i<2; i++){
        for(int j=i+1; j<3; j++){
            if(map[i]>map[j]){
                int temp = map[i];
                map[i] = map[j];
                map[j] = temp;
                }
            }
        }
        if(map[0]==0&&map[1]==0&&map[2]==0)break;
        else if(map[0]*map[0]+map[1]*map[1]==map[2]*map[2]){
            cout << "right" << "\n";
        }
        else cout << "wrong" << "\n";
    }
}
