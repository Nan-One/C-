// 列出所有子集，{1,2,..,n} 的所有子集

#include <stdio.h>

#include <stdlib.h>

#define MAXSIZE 20
#define LOOP 1

void main(void)
{
	char digit[MAXSIZE];
	int i,j;
	int n;
	char line[1000];
	
	printf("\nDirect Generation of ALl Subsets of a Set");
	printf("\n=========================================");
	printf("\n\nNUmber of Elements in the Given Set -->");
	gets(line);
	n = atoi(line);
	
	for(i=0;i<n;i++)
		digit[i] = '0';
	
	printf("\n{}");  //空集
	while(LOOP)
	{
		for(i=0;i<n&&digit[i]=='1';digit[i]='0',i++)
		;
		if(i==n)
			break;
		else
			digit[i] = '1';
		
		for(i=0;i<n&&digit[i]=='0';i++)
		;
		printf("\n{%d",i+1);
		for(j = i+1;j<n;j++)
			if(digit[j] == '1')
				printf("，%d",j+1);
		printf("}"); 
	 } 
}
