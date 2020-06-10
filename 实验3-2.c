#include  <stdlib.h>
#include  <stdio.h>
#include  <time.h>
int main()
{
	int magic,guess;
	srand(time(NULL));
	magic=rand()%100+1;//产生1-100的随机数
	printf("我这有一个数字(1-100)，你猜猜是多少\n");
	scanf("%d",&guess);
	while(guess!=magic)
	{		
		printf("wrong!\n");
		if(guess>magic)
			printf("你猜的数比正确的大。\n");
		else
			printf("你猜的数比正确的小。\n");
		scanf("%d",&guess);
	}
	printf("right!\n");
	return 0; 
}

