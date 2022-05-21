#include <stdio.h>

int main(void) {
	int t,x,h;
	scanf("%d",&t);
	for (int i ; i<t;i++) {
	    scanf("%d %d",&x,&h);
	    (x>=h)? printf("YES\n"):printf("NO\n");
	}
	return 0;
}

