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
	printf("�����������һ����λ�������λ��\n�������²�����ֵ������¼��Σ�");
	scanf("%d",&guessnum);
	printf("�������ʱ�һ����ʾ��xAyB��\n");
	printf("���У�Aǰ������ֱ�ʾ�м�λ���ֲ������ֲ¶��ˣ�����λ��Ҳ��ȷ��Bǰ������ֱ�ʾ�м�λ���ֲ¶��ˣ�����λ�ò���ȷ��\n");
	printf("��������Ĳ²⣺");
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
		printf("��ʾ��%dA%dB\n",A,B);
		if(A==4)
		{
			printf("Congratulation!\n");
			break;
		}
	}
	if(A!=4)
		printf("Sorry,you haven't guess the right number!\n");
	
	printf("��ȷ����Ϊ:");
	for(n=0;n<4;n++)
		printf("%d",num[n]);

	return 0;
	
} 
