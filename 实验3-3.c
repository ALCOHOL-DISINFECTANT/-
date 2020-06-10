#include  <stdlib.h>
#include  <stdio.h>
#include  <time.h>
int main()
{
	int magic,guess,i=10;
	srand(time(NULL));
	magic=rand()%100+1;
	printf("我这有一个数字(1-100)，你猜猜是多少\n");
	scanf("%d",&guess);
	while(guess!=magic)
	{			
		printf("wrong!\n");
		if(guess>magic)
			printf("你猜的数比正确的大。\n");
		else
			printf("你猜的数比正确的小。\n");
		i--;
		if(i==0)
		{
			printf("您的机会已用完\n"); 
			break;
		}
		printf("您还有%d次机会\n",i);
		scanf("%d",&guess);
		
	}
	if(guess==magic)
		printf("right!\n");
	return 0; 
}

