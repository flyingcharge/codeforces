#include<stdio.h>

int main ()
{
	long long int n, m ,a;
	scanf("%lld %lld %lld", &n , &m, &a);

	long long int flag;
	long long int f1, f2;
	if ((n%a==0) && (m%a==0))
	{
		 f1 = n/a;
		 f2 = m/a;
	}
	else if ((n%a==0) && ((m%a)!=0))
	{
		f1 = n/a;
		f2 = (m/a) + 1;
	}
	else if (((n%a)!=0) && ((m%a)==0))
	{
		f1 = (n/a) + 1;
		f2 = m/a;
	}
	else
	{
		f1 = (n/a) + 1;
		f2 = (m/a) + 1;
	}
	flag = f1*f2;

	printf("%lld\n", flag);
	return 0;
}
