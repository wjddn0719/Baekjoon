#include <iostream>
using namespace std;

int La(int a[], int l);

int main(){
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int a, map[101][51], b, len[101];
    cin>> a;
    for(int i=1; i<=a; i++){
        cin >> b;
        len[i]=b;
        for(int j=1; j<=b; j++){
            cin >> map[i][j];
        }
    }
    for(int i=1; i<=a; i++){
        int max = map[i][1];
        int min = map[i][1];
        for(int j=1; j<=len[i]; j++){
            if(max<map[i][j]){
                max = map[i][j];
            }
        }
        for(int j=1; j<=len[i]; j++){
            if(min>map[i][j]){
            min = map[i][j];
            }
        }
        int asd = La(map[i],len[i]); 
        printf("Class %d\nMax %d, Min %d, Largest gap %d\n",i, max, min, asd);
    }
}

int La(int a[], int l){
    for(int i=1; i<l; i++){
        for(int j=i+1; j<=l; j++){
            if(a[i]<a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j]=temp; 
            }
        }
    }
    int total = a[1]-a[2];
    for(int i=1; i<l; i++){
        if(total<a[i]-a[i+1])total = a[i]-a[i+1];
    }
    return total;
}