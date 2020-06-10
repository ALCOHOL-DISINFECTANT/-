#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int main()
{
	int first,second,choice,input,i,n,right;
	float num,input1;
	n=10;
	i=3;
	right=0;
	
	while(n>0)
	{
		srand(time(NULL));
		first=rand()%10+1;
		second=rand()%10+1;
		choice=rand()%4+1;
		if(choice==1)
		{			
			printf("%d × %d = ",first,second);
			scanf("%d",&input);
		}
		else if(choice==2)
		{			
			printf("%d + %d = ",first,second);
			scanf("%d",&input);
		}
		else if(choice==3)
		{			
			printf("%d - %d = ",first,second);
			scanf("%d",&input);
		}
		else
		{			
			printf("%d ÷ %d = ",first,second);
			scanf("%f",&input1);
		}
		switch(choice)
		{
			case 1:
				num=first*second;
				break;
			case 2:
				num=first+second;
				break;
			case 3:
				num=first-second;
				break;
			case 4:
				num=(float)first/second;
				break;
		}
		
		if(input==num||input1==num)
		{
			right++;
			printf("Right！\n");
		}
		else
			printf("Wrong!\n");	
		
		n--;
	}
	printf("\n你的得分是%d,正确率为%d%%",right*10,right*10);
	return 0;
}


