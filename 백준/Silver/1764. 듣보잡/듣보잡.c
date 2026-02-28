#include <stdio.h>

typedef struct{
    char word[21], length;
} words;

words listen[500000]={0};
words see[500000]={0};

words sorted[500000]={0};

char alphabetical(words a, words b){
    for(short i=0; i < (a.length > b.length ? b.length : a.length); i++){
        if(a.word[i] < b.word[i]) return 1;
        else if(a.word[i] > b.word[i]) return 0;
    }
    if(a.length > b.length) return -2;
    else if(a.length < b.length) return -3;
    return -1;
}

void merger(words *a, int n, int middle, int m){
    int i = n;
    int j = middle+1;
    int k = n;
    while(i<=middle && j<=m){
        int check = alphabetical(a[i], a[j]);
        if(check==1){
           sorted[k++] = a[i++];
        }
        else if(check==0){
            sorted[k++] = a[j++];
        }
        else{
            if(check==-2){
                sorted[k++] = a[j++];
            }
            else if(check==-2){
                sorted[k++] = a[i++];
            }
            else{
                sorted[k++] = a[i++];
            }
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

void merge(words *a, int n, int m){
    if(n<m){
        int middle = (n+m)/2;

        merge(a, n, middle);
        merge(a, middle+1, m);
        merger(a, n, middle, m);
    }
}
int p = 0, sum=0;
words qwe[500000]={0};

char binary_search(words key, int n, int m){
    if(n==m){
        if(alphabetical(listen[n], key)==-1){
            return 1;
        }
        else return 0;
    }
    int middle = (n+m)/2;
    int check = alphabetical(key, listen[middle]);
    if(check==1){
        return binary_search(key, n, middle);
    }
    else if(check==0){
        return binary_search(key, middle+1, m);
    }
    else{
        if(check==-1) return 1;
        else if(check == -2) return binary_search(key, middle+1, m);
        else return binary_search(key, n, middle);
    }
}

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    for(int i=0; i<N; i++){
        scanf("%s", listen[i].word);
        char o=0;
        while(listen[i].word[o] != '\0')o++;
        listen[i].length = o;
    }
    
    for(int i=0; i<M; i++){
        scanf("%s", see[i].word);
        char o=0;
        while(see[i].word[o] != '\0')o++;
            see[i].length = o;
    }
    merge(listen, 0, N-1);
    for(int i=0; i<M; i++){
        if(binary_search(see[i], 0, N-1)){
            sum++;
            qwe[p++] = see[i];
        }
    }
    merge(qwe, 0, p-1);
    printf("%d\n", sum);
    
    for(int i=0; i<p; i++){
        printf("%s\n", qwe[i].word);    
    }
}