#include <stdio.h>
    int main() {
        int n, rev = 0, remainder, c;
        scanf("%d", &n);
        c=n;
        while (n != 0) {
            remainder = n % 10;
            rev = rev * 10 + remainder;
            n /= 10;
        }
        printf("%d\n", rev);
        if(rev==c)
        {
        	printf("YES");
		}else
		{
			printf("NO");
		}
        return 0;
    }

