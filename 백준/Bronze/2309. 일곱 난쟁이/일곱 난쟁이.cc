#include <iostream>
using namespace std;

int main(){
    int map[9]={0,}, total=0;
    for(int i=0; i<9; i++){
        scanf("%d", &map[i]);
        total+=map[i];
    }
    for(int i=0; i<8; i++){
        for(int j=i+1; j<9; j++){
            if(map[i]>map[j]){
                int temp = map[i];
                map[i] = map[j];
                map[j] = temp;
            }
        }
    }
    for(int i=0; i<8; i++){
        for(int j=i+1; j<9; j++){
            int rea = total - (map[i] + map[j]);
            if(rea==100){
                for(int k=0; k<9; k++){
                    if(k!=i && k!=j){
                    printf("%d\n", map[k]);
                    }
                }
                return 0;
            }
        }
    }
    return 0;
}