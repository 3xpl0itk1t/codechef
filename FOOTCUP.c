#include <stdio.h>
#include <string.h>
struct foot{
    char chef[4];
}ft[4];
int main(){
    int t,x,y;
    scanf("%d",&t);
    for (int i =0 ; i<t;i++){
        scanf("%d %d", &x ,&y);
        (x==y && (x>0) && (y>0))? strcat(ft[i].chef , "Yes"):strcat(ft[i].chef, "No");      
    }
    for (int i=0;i<t;i++){
        printf("%s\n",ft[i].chef);
    }
}