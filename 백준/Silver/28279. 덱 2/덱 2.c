#include <stdio.h>

int daque[10000001]={0,}, b_p = 5000001, f_p = 5000000;

void push_front(){
    int value;
    scanf("%d", &value);
    daque[f_p--] = value;
}

void push_back(){
    int value;
    scanf("%d", &value);
    daque[b_p++] = value;
}

void pop_front(){
    if(b_p-f_p-1==0){
        printf("%d\n", -1);
        return;
    }
    printf("%d\n", daque[++f_p]);
}

void pop_back(){
    if(b_p-f_p-1==0){
        printf("%d\n",-1);
        return;
    }
    printf("%d\n", daque[--b_p]);
}

void size(){
    printf("%d\n", b_p-f_p-1);
}

void empty(){
    if(b_p-f_p-1==0){
        printf("%d\n", 1);
        return;
    }
    printf("%d\n", 0);
}

void front(){
    if(b_p - f_p - 1 == 0){
        printf("-1\n");
        return;
    }    
    printf("%d\n", daque[f_p+1]);
}

void back(){
    if(b_p - f_p - 1 == 0){
        printf("-1\n");
        return;
    }    
    printf("%d\n", daque[b_p-1]);
}
int main(){
    int N;
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        int a;
        scanf("%d", &a);
        if(a==1)push_front();
        else if(a==2)push_back();
        else if(a==3)pop_front();
        else if(a==4)pop_back();
        else if(a==5)size();
        else if(a==6)empty();
        else if(a==7)front();
        else back();
    }
    return 0;
}