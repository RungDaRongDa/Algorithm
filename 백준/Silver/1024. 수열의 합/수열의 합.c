#include <stdio.h>
int main(){
	int N, L;
	scanf("%d %d", &N, &L);
	
	for (int l = L; l <= 100; l++)
	{
		int tg = N - l * (l + 1) / 2;
		if (tg % l == 0) 
		{
			int x = tg / l + 1;
			if (x >= 0) 
			{
				for (int len = 0; len < l; len++) 
				{
					printf("%d ", len + x);
			}
				return 0;
			} 
		}
	}
	printf("-1");
}