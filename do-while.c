#include <stdio.h>

int main()
{
	int x;
	int n;
	scanf("%d", &x);
	do{
		printf("loop here");
		x /= 10;
		n++;
		printf(" x=%d,n=%d ", x, n);
	} while ( x>0 );
	printf("%d", n);
	return 0;
}