#include  <stdlib.h>
#include  <stdio.h>
#include  <time.h>
int main()
{
	int magic,i=10;
	char guess='2';
	srand(time(NULL));
	magic=rand()%100+1;
	printf("������һ������(1-100)����²��Ƕ���\n");
	printf("��������������ַ��˳�������Ϸ\n"); 
	while(guess>='0'&&guess<='9')
	{
	scanf("%c",&guess);
	fflush(stdin);
	i=10;
	while(guess!=magic)
	{			
		printf("wrong!\n");
		if(guess>magic)
			printf("��µ�������ȷ�Ĵ�\n");
		else
			printf("��µ�������ȷ��С��\n");
		i--;
		if(i==0)
		{
			printf("���Ļ���������,��һ�������²°�\n"); 
			break;
		}
		printf("������%d�λ���\n",i);
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
	printf("�����˳�������Ϸ\n");
	return 0; 
}

