#include <stdio.h>

int main(void) {
    int n_a,n_b,n_c,t;
    scanf("%d",&t);
    for (int i ;  i<t ; i++) {
        /* code */
        scanf("%d %d %d", &n_a, &n_b, &n_c);
        ((n_a>n_b+n_c)||((n_b>n_a+n_c)||(n_c>n_b+n_a)))? printf("YES\n"):printf("NO\n");
    }
	return 0;
}

