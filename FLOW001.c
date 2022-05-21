#include <stdio.h> 

int main() {
    int t,x,y;
    scanf("%d",&t);
    for (int i; i<t;i++) {
        scanf("%d %d",&x,&y);
        int sum = x+y;
        printf("%d\n",sum);
    }
}