#include  <stdlib.h>
#include  <stdio.h>
#include  <time.h>
int main()
{
	int magic,guess;
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
		scanf("%d",&guess);
	}
	printf("right!\n");
	return 0; 
}

