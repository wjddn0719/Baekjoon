#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    switch(b){
        case 1:
        {
            int i;
            for(i=1; i<=a; i++){
                printf("%d\n", i);
            }
        }
        break;
        case 2:
        {
            int i=1, j=1;
            for(i=1; i<=a; i++){
                for(j=1; j<=a; j++){
                    printf("%d %d\n", i, j);
                }
            }
        }
        break;
        case 3:
        {
            int i=1, j=1;
            for(i=1; i<=a; i++){
                for(j=1; j<=a; j++){
                    for(int k=1; k<=a; k++){
                        printf("%d %d %d\n", i, j, k);
                    }
                }
            }
        }
        break;
        case 4:
        {
            int i=1, j=1;
            for(i=1; i<=a; i++){
                for(j=1; j<=a; j++){
                    for(int k=1; k<=a; k++){
                        for(int l=1; l<=a; l++){
                            printf("%d %d %d %d\n", i, j, k, l);
                        }
                    }
                }
            }
        }
        break;
        case 5:
        {
            int i=1, j=1;
            for(i=1; i<=a; i++){
                for(j=1; j<=a; j++){
                    for(int k=1; k<=a; k++){
                        for(int l=1; l<=a; l++){
                            for(int o=1; o<=a; o++){
                                printf("%d %d %d %d %d\n", i, j, k, l, o);
                            }
                        }
                    }
                }
            }
        }
        break;
        case 6:
        {
            {
                int i=1, j=1;
                for(i=1; i<=a; i++){
                    for(j=1; j<=a; j++){
                        for(int k=1; k<=a; k++){
                            for(int l=1; l<=a; l++){
                                for(int o=1; o<=a; o++){
                                    for(int p=1; p<=a; p++){
                                        printf("%d %d %d %d %d %d\n", i, j, k, l, o, p);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        break;
        case 7:
        {
            {
                int i=1, j=1;
                for(i=1; i<=a; i++){
                    for(j=1; j<=a; j++){
                        for(int k=1; k<=a; k++){
                            for(int l=1; l<=a; l++){
                                for(int o=1; o<=a; o++){
                                    for(int p=1; p<=a; p++){
                                        for(int u=1; u<=a; u++){
                                            printf("%d %d %d %d %d %d %d\n", i, j, k, l, o, p, u);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        break;
    }
    return 0;
}