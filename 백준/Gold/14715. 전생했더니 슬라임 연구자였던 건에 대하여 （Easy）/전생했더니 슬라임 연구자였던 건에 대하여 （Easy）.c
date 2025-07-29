#include <stdio.h>

int log_2(int j){
    int a = 2;
    int count = 0;
    int op = 1;
    while(a<=j){
        a*=2;
        count++;
        op*=2;
    }
    if(j>op){
        return count+1;
    }
    return count;
    
}

int main(){
	int a, i=2;
	int count=0;
	scanf("%d", &a);
	while(a!=1){
		if(a%i==0){
			a/=i;
			count++;
		}
		else i++;
	}
	if(count == 1){
        printf("0");
        return 0;
    }
    else{
        int k = log_2(count);
        printf("%d", k);
        return 0;
    }
}