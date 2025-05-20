#include <stdio.h>

int main(){
   int i, total=0,k;
   for (i=1; i<=5; i++){
        scanf("%d", &k);
        total+=k;
   }
   printf("%d", total);
   return 0;
}