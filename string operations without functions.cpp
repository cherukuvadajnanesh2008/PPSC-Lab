#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],p[100];
	scanf("%s",s);
	scanf("%s",p);
	printf("%s\n",strlwr(s));
	printf("%s\n",strupr(p));
	printf("%s",strcat(s,p));
	return 0;
}
