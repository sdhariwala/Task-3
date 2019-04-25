#include<stdio.h>
main()
{
	int sub1,sub2,sub3;
	float avg;
	printf("Enter 3 subject mark:");
	scanf("%d%d%d",&sub1,&sub2,&sub3);
	avg=(sub1+sub2+sub3)/3;
	printf("Mark in subject");
	printf("\n math=%d \n english=%d \n marathi=%d",sub1,sub2,sub3);
	printf("\n Average=%f",avg);
}
