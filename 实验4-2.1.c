#include  <stdlib.h>
#include  <stdio.h>
#include  <time.h>
int test(int,int); 
int main()
{
	int first,second,judge;
	
	while(1)
	{
		srand(time(NULL));
		first=rand()%10+1;
		second=rand()%10+1;//������������� 
		judge=test(first,second);	
		if(judge==0)
			break;
	}
	return 0;
}
int test(int first,int second)
{
	int input,num,i;
	i=3;
	printf("%d * %d = ",first,second);
		scanf("%d",&input);
		num=first*second;
		if(input!=num)
			while(i>1)//���λ������ 
			{
				printf("Wrong! Please try again.\n");
				scanf("%d",&input);
				if(input==num)//���λ����д������ѭ�� 
					break;
				i--;
			}
	if(input==num)
	{
		printf("Right��\n");
		return 1;
	}
	else
	{
		printf("Wrong! You have tried three times! Test over!\n");	
		return 0;
	}
}
