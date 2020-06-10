#include  <stdlib.h>
#include  <stdio.h>
#include  <time.h>
int main()
{
	int first,second,input,num;
	
	while(1)//????
	{
		srand(time(NULL));
		first=rand()%10+1;
		second=rand()%10+1;//???????
		printf("%d ¡Á %d = ",first,second);
		scanf("%d",&input);
		num=first*second;//????
		while(input!=num)//????????
		{
			printf("Wrong! Please try again.\n");
			scanf("%d",&input);
		}
		printf("Right£¡\n");
	}
}

