#include  <stdlib.h>
#include  <stdio.h>
#include  <time.h>
int main()
{
	int first,second,input,num,i,n,right;
	n=10;
	i=3;
	right=0;
	
	while(n>0)//��ʮ���˳����� 
	{
		srand(time(NULL));
		first=rand()%10+1;
		second=rand()%10+1;//������������� 
		printf("%d * %d = ",first,second);
		scanf("%d",&input);
		num=first*second;
		if(input==num)
		{
			right++;
			printf("Right��\n");
		}
		else
			printf("Wrong!\n");	
		
		n--;
	}
	printf("\n��ĵ÷���%d,��ȷ��Ϊ%d%%",right*10,right*10);
	return 0;
}

