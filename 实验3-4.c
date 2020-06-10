#include  <stdlib.h>
#include  <stdio.h>
#include  <time.h>
int main()
{
	int magic,i=10;
	char guess='2';
	srand(time(NULL));
	magic=rand()%100+1;
	printf("我这有一个数字(1-100)，你猜猜是多少\n");
	printf("输入任意非数字字符退出猜数游戏\n"); 
	while(guess>='0'&&guess<='9')
	{
	scanf("%c",&guess);
	fflush(stdin);
	i=10;
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
			printf("您的机会已用完,换一个数来猜猜吧\n"); 
			break;
		}
		printf("您还有%d次机会\n",i);
		scanf("%c",&guess);
		fflush(stdin);
		if(guess<='0'||guess>='9')
		break;
		
	}
	if(guess==magic)
	{
		printf("right!\n");
		break;
	}
	}
	printf("您已退出猜数游戏\n");
	return 0; 
}

