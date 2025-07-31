#include <stdio.h>

int map[2000001]={0,}, is_prime[2000001]={0,};

int end_point(int a, int *arr) {
    int left = 1, right = 200000;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] < a) left = mid + 1;
        else right = mid - 1;
    }
    return right; 
}

int main(){
    int a;
    for(int i=2; i<=1000; i++){
        for(int j = i * i; j<=2000001; j+=i){
            map[j] = 1;
        }
    }
    int j = 1;
    for(int i=2; i<=2000001; i++){
        if(map[i]==0){
            is_prime[j] = i;
            j++;
        }
    }
    while(1){
        scanf("%d", &a);
        if(a!=0){
            int s_p = 1, e_p = end_point(a,is_prime), s1, s2;
            while(s_p<=e_p){
                if(is_prime[s_p] + is_prime[e_p] > a){
                    e_p--;
                }
                else if(is_prime[s_p] + is_prime[e_p] < a){
                    s_p++;
                }
                else{
                    s1 = is_prime[s_p];
                    s2 = is_prime[e_p];
                    printf("%d = %d + %d\n", a, s1, s2);
                    break;
                }
            }
        }
        else return 0;
    }
    return 0;
}