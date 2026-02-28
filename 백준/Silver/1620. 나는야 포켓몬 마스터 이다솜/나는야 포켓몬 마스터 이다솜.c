#include <stdio.h>

typedef struct{
    char name[21], length;
    int ranking;
} cog;

cog sorted[100000]={0};

char alphabetical(cog a, cog b){
    for(short i=0; i<a.length; i++){
        if(a.name[i] > b.name[i]) return 1;
        else if(a.name[i] < b.name[i]) return 0;
    }
    return -1;
}

void merger(cog *a, int n, int middle, int m){
    int i = n;
    int j = middle+1;
    int k = n;
    while(i <= middle && j<=m){
        char classify = alphabetical(a[i], a[j]);
        
        if(a[i].length > a[j].length){
            sorted[k++] = a[j++];
        }
        else if(a[i].length < a[j].length){
            sorted[k++] = a[i++];
        }
        else if(classify == 1){
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

void merge(cog *a, int n, int m){
    if(n<m){
        int middle = (n+m)/2;

        merge(a, n, middle);
        merge(a, middle+1, m);

        merger(a, n, middle, m);
    }
}

int distinguish(cog a){
    int op = 1;
    for(int i=1; i<a.length; i++){
        op*=10;
    }
    int sum = 0;
    for(int i=0; i<a.length; i++){
        sum+=(a.name[i])%'0'*op;
        op/=10;
    }
    return sum;
}

int binary_search(cog *a, cog key, int n, int m){
    if(n==m){
        return a[n].ranking;
    }
    
    int middle = (n+m)/2;
    char tmp = alphabetical(key, a[middle]);
    if(a[middle].length > key.length) return binary_search(a, key, n, middle);
    else if (a[middle].length < key.length) return binary_search(a, key, middle+1, m);
    else if(tmp==1) return binary_search(a, key, middle+1, m);
    else if(tmp==0) return binary_search(a, key, n, middle);
    else return a[middle].ranking;
    
}

cog list[100000]={0}, dp_list[100000]={0}, se_list[100000]={0};

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    for(int i=0; i<N; i++){
        scanf("%s", list[i].name);
        list[i].ranking = i+1;
        char tmp =0;
        while(list[i].name[tmp]!='\0')tmp++;
        list[i].length = tmp;
    }
    for(int i=0; i<N; i++){
        dp_list[i] = list[i];
    }
    merge(list, 0, N-1);

    for(int i=0; i<M; i++){
        scanf("%s", se_list[i].name);
        char o = 0;
        while(se_list[i].name[o] != '\0')o++;
        se_list[i].length = o;
        if(se_list[i].name[0]%'0' <= '9'-'0'){
            int tmp = distinguish(se_list[i]);
            printf("%s\n", dp_list[tmp == 0 ? 0 : tmp-1].name);
        }
        else{
            printf("%d\n", binary_search(list, se_list[i], 0, N-1));
        }
    }
    return 0;
}