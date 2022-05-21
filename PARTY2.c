#include <stdio.h>

int main(void) {
	int n,x,k,a;
	scanf("%d",&a);
	for (int i; i<a;i++) {
	    /* code */
	    scanf("%d %d %d",&n, &x, &k);
	    (n*x>k)? printf("No\n"):printf("Yes\n");
	}
	return 0;
}

