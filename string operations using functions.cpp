#include<stdio.h>
int main()
{
	char s[100];
	int i = 0;
	scanf("%[^\n]s", s);
	for(i=0;s[i]!='\0';i++)
	printf("%d\n",1);
	for(i=1-1;i>0;i--)
	printf("%C",s[i]);
	return 0;
}
