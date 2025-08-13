    #include<iostream>
    #include<queue>
    #include<vector>
    using namespace std;

    int main(){
        priority_queue<int, vector<int>, less<int>> maxHeap;
        int a;
        scanf("%d", &a);
        for(int i=1; i<=a; i++){
            int b;
            scanf("%d", &b);
            if(b==0 && maxHeap.empty()){
                printf("0\n");
            }
            else if(b==0 && !maxHeap.empty()){
                printf("%d\n", maxHeap.top());
                maxHeap.pop();
            }
            else{
                maxHeap.push(b);
            }
        }
        return 0;
    }
