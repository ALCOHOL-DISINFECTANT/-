#include  <stdlib.h>
#include  <stdio.h>
#include  <time.h>
int main()
{
	int magic,guess,i=10;
	srand(time(NULL));
	magic=rand()%100+1;
	printf("������һ������(1-100)����²��Ƕ���\n");
	scanf("%d",&guess);
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
			printf("���Ļ���������\n"); 
			break;
		}
		printf("������%d�λ���\n",i);
		scanf("%d",&guess);
		
	}
	if(guess==magic)
		printf("right!\n");
	return 0; 
}

