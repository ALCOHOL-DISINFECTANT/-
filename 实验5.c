#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int i,n,judge,guessnum,A,B,dei,think,ghs;
	int num[4],guess[4];
	i=0;
	
	srand(time(NULL));
	while(i<4)
	{	
		judge=0;	
		num[i]=rand()%10;
		for(n=0;n<i;n++)
			if(num[n]==num[i])
				judge=1;
		if(judge)
			continue;
		i++;			
	}
	printf("我随机生成了一个各位相异的四位数\n请你来猜测它的值，你想猜几次？");
	scanf("%d",&guessnum);
	printf("当你猜数时我会给提示，xAyB。\n");
	printf("其中，A前面的数字表示有几位数字不仅数字猜对了，而且位置也正确，B前面的数字表示有几位数字猜对了，但是位置不正确。\n");
	printf("请输入你的猜测：");
	for(n=0;n<guessnum;n++)
	{
		A=B=0;
		ghs=1000;
		scanf("%d",&think);
		for(i=0;i<4;i++)
		{
			guess[i]=(int)think/ghs;
			think-=guess[i]*ghs;
			ghs/=10;
				
		}
		for(i=0;i<4;i++)
		{
			if(guess[i]==num[i])
				A++;
			for(dei=0;dei<4;dei++)
				if(guess[i]==num[dei])
					B++;
		}
		printf("提示：%dA%dB\n",A,B);
		if(A==4)
		{
			printf("Congratulation!\n");
			break;
		}
	}
	if(A!=4)
		printf("Sorry,you haven't guess the right number!\n");
	
	printf("正确的数为:");
	for(n=0;n<4;n++)
		printf("%d",num[n]);

	return 0;
	
} 
