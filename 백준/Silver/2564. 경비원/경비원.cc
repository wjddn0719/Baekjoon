#include <stdio.h>

int map[405] = {0,};

int main(){
	int x, y, m, sum = 0;
	scanf("%d %d", &x, &y);
	
	int T;
	scanf("%d", &T);
	for(int i=1; i<=T+1; i++){
		int direction, index;
		scanf("%d %d", &direction, &index);
		
		if(direction == 1){
			if(i == T + 1){
				map[index + 1] = 101;
				m = index + 1;
			}
			else{
				map[index + 1] = i;
			}
		}
		else if(direction == 2){
			if(i == T + 1){
				map[2 * x + y - index + 1] = 101;
				m = 2 * x + y - index + 1;
			}
			else{
				map[2 * x + y - index + 1] = i;
			}
		}
		else if(direction == 3){
			if(i == T + 1){
				map[(x+y) * 2 - index + 1] = 101;
				m = (x+y) * 2 - index + 1;
			}
			else{
				map[(x+y) * 2 - index + 1] = i;
			}
		}
		else if(direction == 4){
			if(i == T + 1){
				map[index + x + 1] = 101;
				m = index + x + 1;
			}
			else{
				map[index + x + 1] = i;
			}
		}
	}
	int total_len = (x+y) *2 ;
	for(int i = 1; i <= T; i++){
        int lm = 0; 
        for(int j = m; j <= m + total_len; j++){
            if(map[(j - 1) % total_len + 1] == i) { 
                break;    
            }
            lm++;
        }
        
        int idx = lm;
        if (total_len - lm < idx) {
            idx = total_len - lm;
        }
        if(idx > 0)
        	sum += idx;
    }
	printf("%d", sum);
	return 0;            
	
}          
                      