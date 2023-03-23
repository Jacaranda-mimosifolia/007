#include<stdio.h>
int main()
{
	float x,y;
	printf("当x>=5时,y=x-10;当x>=0,x<5时,y=3x+5;当x<0时,y=2x+3\n");
	for(;;)
	{
		printf("\nx=");
		scanf("%f",&x);
		if (x>=5)
			printf("y=%.2f\n",y=x-10);
		else if ((x>=0)&&(x<5))
			printf("y=%.2f\n",y=3*x+5);
		else if (x<0)
			printf("y=%.2f\n",y=2*x+3); 
		else
			break;
	}
	return 0;
}
