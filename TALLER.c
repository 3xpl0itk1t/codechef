#include <stdio.h>

int main(void) {
	int t,a,b;
	scanf("%d",&t);
	for (int i ; i<t;i++) {
	    scanf("%d %d",&a,&b);
	    (a>b)? printf("A\n"):printf("B\n");
	}
	return 0;
}

