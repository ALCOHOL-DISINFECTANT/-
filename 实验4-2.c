#include  <stdlib.h>
#include  <stdio.h>
#include  <time.h>
int main()
{
	int first,second,input,num,i;
	i=3;
	
	while(1)
	{
		srand(time(NULL));
		first=rand()%10+1;
		second=rand()%10+1;//产生两个随机数 
		printf("%d * %d = ",first,second);
		scanf("%d",&input);
		num=first*second;
		if(input!=num)
			while(i>1)//三次机会答题 
			{
				printf("Wrong! Please try again.\n");
				scanf("%d",&input);
				if(input==num)//三次机会中答对跳出循环 
					break;
				i--;
			}
			if(input==num)
				printf("Right！\n");
			else
			{
				printf("Wrong! You have tried three times! Test over!\n");	
				break;
			}
	}
	return 0;
}

