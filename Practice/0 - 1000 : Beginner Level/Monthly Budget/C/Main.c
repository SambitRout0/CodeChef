#include <stdio.h>

int main(void)
	{
	// your code goes here
	
	int t;
	scanf("%d",&t);
	while(t--)
		{
		int X, Y;
		scanf("%d%d",&X,&Y);
		int ans = Y*30;
		if(X>=ans)
			{
			printf("YES\n");
			}
		else
			{
			printf("NO\n");
			}
		}
	return 0;
	}
