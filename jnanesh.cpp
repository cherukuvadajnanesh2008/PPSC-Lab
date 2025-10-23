#include <stdio.h>
int main()
{
 int i,a,b;
 scanf("%d%d", &a, &b);
 for ( i=a;i<=b;i++)
 {
    if(i<10)
	{
		if(i==1)printf("one")
	if(i==2)printf("two")
		if(i==3)printf("three")
		if(i==4)printf("four")
		if(i==5)printf("five")
		if(i==6)printf("six")
		if(i==7)printf("seven")
		if(i==8)printf("eight")
		if(i==9)printf("nine")
		}	
 else
 {
 	if(i%2==0)printf("even")
 	else printf("odd")
 }
 printf("/n");
 }
}
