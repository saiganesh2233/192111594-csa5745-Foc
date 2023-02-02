#include<stdio.h>
int main()
{
	int r1,r2,remainder,i;
	printf("start");
	scanf("%d",&r1);
	printf("end");
	scanf("%d",&r2);
	printf("the odd number between %d and %d are:",r1,r2);
	for(i=r1;i<=r2;++i)
	{
		remainder=i%2;
		if(remainder==1)
		printf("n%d",i);
	}
	return 0;
}
