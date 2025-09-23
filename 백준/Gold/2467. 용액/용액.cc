#include <iostream>
#include <algorithm>
using namespace std;
int map[100001]={0,};

int absolute(int a){
	return a<0 ? a*(-1):a;
}

int main(){
	int a;
	scanf("%d", &a);
	for(int i=1; i<=a; i++){
		scanf("%d", &map[i]);
	}
	sort(map+1, map+a+1);
	int s_p = 1, e_p = a;
	int sum = map[s_p]+map[e_p];

    int ansL = map[s_p], ansR = map[e_p];   
	sum = absolute(sum);
	while(s_p<e_p){
		int s = map[s_p] + map[e_p];
		int cur = absolute(s);
		if(cur<sum){
			sum = cur;
			ansL = map[s_p];
			ansR = map[e_p];
			if(sum==0){
				printf("%d %d", ansL, ansR);
				return 0;
			}
		}
		if(s>0)e_p--;
		else s_p++;
	}
	printf("%d %d", ansL, ansR);
	return 0;
}