#include <stdio.h>

int sorted[200000]={0};

void merger(int *a, int n, int middle, int m){
    int i = n;
    int j = middle+1;
    int k = n;
    while(i<=middle && j<=m){
        if(a[i] > a[j]){
            sorted[k++] = a[j++];
        }
        else {
            sorted[k++] = a[i++];
        }
    }
    if(i<=middle){
        for(int t=i; t<=middle; t++){
            sorted[k++] = a[t];
        }
    }
    if(j<=m){
        for(int t=j; t<=m; t++){
            sorted[k++] = a[t];
        }
    }
    for(int t=n; t<=m; t++){
        a[t] = sorted[t];
    }
}

void merge(int *a, int n, int m){
    if(n<m){
        int middle = (n+m)/2;

        merge(a, n, middle);
        merge(a, middle+1, m);

        merger(a, n, middle, m);
    }
}

char binary_search(int *a,int key, int n, int m){
    if(n==m){
        if(a[n] == key) return 1;
        else return 0;
    }   
    int mid = (n+m)/2;
    
    if(key < a[mid]) return binary_search(a, key, n, mid);
    else if(key > a[mid])return binary_search(a, key, mid+1, m);
    else return 1;
} 

int main(){
    int N, M, N_map[200000]={0}, M_map[200000]={0};
    scanf("%d %d", &N, &M);
    for(int i=0; i<N; i++){
        scanf("%d", &N_map[i]);
    }
    for(int i=0; i<M; i++){
        scanf("%d", &M_map[i]);
    }
    
    merge(N_map, 0, N-1);
    merge(M_map, 0, M-1);
    
    int o=0;
    for(int i=0; i<N; i++){
        if(!binary_search(M_map, N_map[i], 0, M-1)){
            o++;
        }
    }
    for(int i=0; i<M; i++){
        if(!binary_search(N_map, M_map[i], 0, N-1)){
            o++;
        }
    }
    printf("%d\n", o);
    return 0;
}