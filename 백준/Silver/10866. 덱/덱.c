#include <stdio.h>

int daque[10001]={0,}, b_p = 5001, f_p = 5000;

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
        char word[10]={0,};
        scanf("%s", word);
        if(word[0]=='p' && word[5]=='f')push_front();
        else if(word[0]=='p' && word[5]=='b')push_back();
        else if(word[0]=='p' && word[4] == 'f')pop_front();
        else if(word[0]=='p' && word[4]=='b')pop_back();
        else if(word[0]=='s')size();
        else if(word[0]=='e')empty();
        else if(word[0]=='f')front();
        else back();
    }
    return 0;
}