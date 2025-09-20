#include <stdio.h>

int map[101]={0,};

int find(int a){
	if(map[a]==a)return a;
	return map[a] = find(map[a]);
}

void my_union(int a, int b){
	int RootX = find(a);
	int RootY = find(b);
	if(RootX<RootY) map[RootY] = RootX;
	else map[RootX] = RootY;
}

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	for(int i=1; i<=n; i++){
		map[i] = i;
	}
	for(int i=1; i<=m; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		my_union(a, b);
	}
	int virus = 0;
	for(int i=1; i<=n; i++){
		if(find(map[i])==1)virus++;
	}
	printf("%d", virus-1);
	return 0;
}