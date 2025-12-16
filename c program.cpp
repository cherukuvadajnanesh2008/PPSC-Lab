int biggest(int a,int b,int c,int d)
{
	if(a>b&&a>c&&a>d)
	return a;
	else if(b>c&&b>d&&b>a)
	return b;
	else if(c>d&&c>a&&c>b)
	return c;
	else
	return d;
}
int main()
{
	int result;
	result=biggest(10,200,50,60);
	scanf("Biggest number is:%d",result 0);
	return 0;
	}
