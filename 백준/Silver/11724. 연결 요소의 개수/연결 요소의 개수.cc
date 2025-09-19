#include <iostream>
#include <set>
using namespace std;
int ma[1001]={0,};
set<int> p;
int find(int a){
	if(ma[a]==a)return a;
	return ma[a] = find(ma[a]);
}

void my_union(int a, int b){
	int RootX = find(a);
	int RootY = find(b);
	if(RootX < RootY) ma[RootY] = RootX;
	else ma[RootX] = RootY;
}

int main(){
	int N, M;
	scanf("%d %d", &N, &M);
	for(int i=1; i<=N; i++){
		ma[i] = i;
	}
	for(int i=1; i<=M; i++){
		int a, b;
		scanf("%d %d",&a, &b);
		my_union(a, b);
	}
	for(int i=1; i<=N; i++){
		p.insert(find(ma[i]));
	}
	printf("%d", p.size());
	return 0;
}