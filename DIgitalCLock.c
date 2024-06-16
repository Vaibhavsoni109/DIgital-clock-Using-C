#include<stdio.h>
// #include<conio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	
	int h,m,s;
	//h-hour, m-minut, s- second
	printf("enter the hour");
	scanf("%d",&h);
	printf("enter the minut");
	scanf("%d",&m);
	printf("enter the sec");
	scanf("%d",&s);
	while(1)
	{
			system("clear");	
		printf("%.2d:%.2d:%.2d\n ",h,m,s);
			s++;
		sleep(1);
		if(s>59)
		{
			s=00;
			m++;
		}
		 if (m>59)
		{
			m=00;
			h++;
		}
		if (h>23)
		{
			h=00;
		}
	}
}
