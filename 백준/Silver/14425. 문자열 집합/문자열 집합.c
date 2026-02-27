#include <stdio.h>

typedef struct{
    char word[501];
    short length;
} words;

words sorted[20000]={0};

char alphabetical(words a, words b){
    for(short i=0; i < a.length; i++){
        if(a.word[i] < b.word[i]) return 1;
        else if(a.word[i] > b.word[i]) return 0;
    }
    return -1;
}

void merger(words *a, short n, short middle, short m){
    short i = n;
    short j = middle+1;
    short k = n;
    while(i<=middle && j<=m){
        if(a[i].length < a[j].length){
            sorted[k++] = a[i++];
        }
        else if(a[i].length > a[j].length) {
            sorted[k++] = a[j++];
        }
        else {
            if(alphabetical(a[i], a[j])==1){
                sorted[k++] = a[i++];
            }
            else if(alphabetical(a[i], a[j])==0){
                sorted[k++] = a[j++];
            }
            else{
                sorted[k++] = a[i++];
            }
        }
    }
    if(i<=middle){
        for(short t=i; t<=middle; t++){
            sorted[k++] = a[t];
        }
    }
    if(j<=m){
        for(short t=j; t<=m; t++){
            sorted[k++] = a[t];
        }
    }
    for(short t=n; t<=m; t++){
        a[t] = sorted[t];
    }
}

void merge(words *a, short n, short m){
    if(n < m){
        short middle = (n+m)/2;

        merge(a, n, middle);
        merge(a, middle + 1, m);

        merger(a, n, middle, m);
    }
}

char exist(words a, words b){
    if(a.length != b.length) return 1;
    for(short i=0; i<a.length; i++){
        if(a.word[i] != b.word[i]) return 1;
    }
    return 0;
}
words list[10000]={0};
words sub_list[10000]={0};

char binary_search(words key, short n, short m){
    if(n==m){
        if(!exist(list[n], key)){
            return 1;
        }
        else return 0;
    }
    short mid = (n+m)/2;
    if(key.length < list[mid].length){
        return binary_search(key, n, mid);
    }
    else if(key.length > list[mid].length){
        return binary_search(key, mid+1, m);
    }
    else{
        if(alphabetical(key, list[mid]) == 1){
            return binary_search(key, n, mid);
        }
        else if(alphabetical(key, list[mid]) == 0){
            return binary_search(key, mid+1, m);
        }
        else return 1;  
    }
    
}

int main(){
    short N, M;
    scanf("%hd %hd", &N, &M);

    for(short i=0; i<N; i++){
        scanf("%s", list[i].word);
        short k=0;
        while(list[i].word[k]!='\0')k++;
        list[i].length = k;
    }
    for(short i=0; i<M; i++){
        scanf("%s", sub_list[i].word);
        short k=0;
        while(sub_list[i].word[k]!='\0')k++;
        sub_list[i].length = k;
    }
    merge(list, 0, N-1);
    int o =0;
    for(short i=0; i<M; i++){
        o+=binary_search(sub_list[i], 0, N-1);
    }
    printf("%d", o);
    return 0;
    
}