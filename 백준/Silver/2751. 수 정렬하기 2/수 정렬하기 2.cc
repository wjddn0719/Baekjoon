#include <stdio.h>
int ma[1000001]={0,};
void merge_sort(int *arr ,int left, int right, int mid){
    int start = left, end = mid+1, k = left;
    while(start<=mid && end <= right){
        if(arr[start]<arr[end]){
            ma[k++] = arr[start++];
        }
        else{
            ma[k++] = arr[end++]; 
        }
    }
    while(start<=mid){
        ma[k++] = arr[start++];
    }
    while(end<=right){
        ma[k++] = arr[end++];
    }
    for(int i=left; i<=right; i++){
        arr[i] = ma[i];
    }
}

void merge(int *arr, int left, int right){
    if (left>=right)return;
    int middle = (left+right)/2;
    merge(arr, left, middle);
    merge(arr, middle+1, right);
    merge_sort(arr, left, right, middle);
}

int main(){
    int N, map[1000001]={0,};
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        scanf("%d", &map[i]);
    }
    merge(map, 1, N);
    for(int i=1; i<=N; i++){
        printf("%d\n", map[i]);
    }
}