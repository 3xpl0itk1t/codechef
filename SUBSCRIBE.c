#include <stdio.h>

int main(void) {
	int x,y;
	scanf("%d",&y);
	for (int i ; i<y ; i++) {
	    scanf("%d",&x);
	    (x>30)? printf("YES\n"):printf("NO\n");
	}
	return 0;
}

