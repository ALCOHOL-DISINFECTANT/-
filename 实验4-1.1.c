#include  <stdlib.h>
#include  <stdio.h>
#include  <time.h>
void test(int,int);//�������� 

int main()
{
	int first,second;
	
	while(1)//�������� 
	{
		srand(time(NULL));
		first=rand()%10+1;
		second=rand()%10+1;//������������� 
		test(first,second);
		printf("Right��\n");
	}
	return 0;
}
void test(int first,int second)
{
	int input,num;
	printf("%d �� %d = ",first,second);
	scanf("%d",&input);
	num=first*second;//�������
	while(input!=num)//�����Բ��˳� 
	{
		printf("Wrong! Please try again.\n");
		scanf("%d",&input);
	}
	
}

