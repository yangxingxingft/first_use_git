#include <stdio.h>

int main()
{       int a;
	//以下代码，在dev1 分支上进行修改
	for(a = 0; a < 5; a++)
	{
	
		printf("nihao yanglaoshi \n");
		printf("dev1 \n");
		printf("git branch\n");
	}

	//下面代码内容，为在master主线分支上对代码的修改
	int b;
	for(b = 0; b < 5; b++)
	{
		printf("%d -",b);
		putchar(10);
	}
	return 0;
	
}
