#include<stdio.h>
#include<math.h>
int prime(int n)
{
	int i;
	if(n<2)
	  return 0;
	else if(n==2)
	  return 1;
	else
	{
		for(i=2;i<=sqrt(n);i++)
		  if(n%i==0)
		    return 0;
		return 1;
	}
	  
} 
int main()
{
	int num,j;
	printf("����һ������6��ż��:\n");
	scanf("%d",&num);
	for(j=2;j<=num/2;j++)
	  if(prime(j)&&prime(num-j))
	    printf("���������ֱ�Ϊ:%d   %d\n",j,num-j);
	return 0;
}
