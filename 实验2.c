#include<stdio.h>
#include<conio.h>
int main()
{
	char sex,sports,diet;
	float faHeight,moHeight,height;
	
	
	printf("\n请输入你的性别(M表示男性，F表示女性):");
	fflush(stdin);
	sex=getche();
	while(sex!='M'&&sex!='F')
	{
		printf("\n请输入M或F："); 
		sex=getche();
	}
	
	printf("\n请输入你的父亲的身高(cm):");
	scanf("%f",&faHeight);
	printf("\n请输入你的母亲的身高(cm):");
	scanf("%f",&moHeight);
	printf("\n请问你平时喜欢锻炼吗?(Y/N)");
	fflush(stdin);
	sports=getche();
	while(sports!='Y'&&sports!='N')
	{
		printf("\n请输入Y或N："); 
		sports=getche();
	}
	printf("\n请问你是否有良好的饮食习惯?(Y/N)");
	fflush(stdin);
	diet=getche();
	while(diet!='Y'&&diet!='N')
	{
		printf("\n请输入Y或N："); 
		diet=getche();
	}
	if(sex=='M')
		height=(faHeight+moHeight)*0.54;
	else
		height=(faHeight*0,923+moHeight)/2.0;
	
	if(sports=='Y')
		height*=1.02;
	if(diet=='Y')
		height*=1.015;
	printf("\n经过科学计算，预计你的身高为:%.2f CM",height);
	return 0;
	
 } 
