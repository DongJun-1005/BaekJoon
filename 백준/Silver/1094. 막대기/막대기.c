#include <stdio.h>

int main()
{
	int x;
	int arr[7] = {1,2,4,8,16,32,64};
	int i;
	int cnt = 0;

	scanf("%d",&x);

	for(i = 6; i >= 0; i--)
	{
		if(arr[i] <= x)
		{
			x -= arr[i];
			cnt++;
			if(x==0) break;
		}
	}
	
		printf("%d",cnt);

	return 0;
}