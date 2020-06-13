#include  <stdlib.h>
#include  <stdio.h>
#include  <time.h>
void test(int,int);//声明函数 

int main()
{
	int first,second;
	
	while(1)//无限做题 
	{
		srand(time(NULL));
		first=rand()%10+1;
		second=rand()%10+1;//产生两个随机数 
		test(first,second);
		printf("Right！\n");
	}
	return 0;
}
void test(int first,int second)
{
	int input,num;
	printf("%d × %d = ",first,second);
	scanf("%d",&input);
	num=first*second;//两数相乘
	while(input!=num)//不做对不退出 
	{
		printf("Wrong! Please try again.\n");
		scanf("%d",&input);
	}
	
}

