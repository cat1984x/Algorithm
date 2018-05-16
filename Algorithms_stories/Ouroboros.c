#include <stdio.h>
#include <stdlib.h>

static int result = 1;  

int main()
{
	int n;
	printf("Enter n.\n");
	scanf("%d",&n);
//    n = 3;
	foo(n);
    printf("2's %d power is %d",n,result);
	system("pause");
	return 0;
}

void foo(int n)
{
	if( n == 0)
		return;
    result *= 2;
    foo(n-1);//Î²µÝ¹é
    return;         
}
