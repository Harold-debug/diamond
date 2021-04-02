#include<stdio.h>
#include<stdlib.h>
int main()
{   int i,c;
	int num, middle, spacecount, starcount;
	printf(" Enter an odd number greater than 2:");
	scanf("%d",&num);
	middle=(num-1)/2;
	for( i=0; i<num;i++){
		spacecount=abs(middle-i);
		starcount=num-2*abs(middle-i);
		
		for( c=0;c<spacecount;c++)
		printf(" ");
		for( c=0;c<starcount;c++)
		printf("*");
		for( c=0;c<spacecount;c++)
		printf(" ");
		printf("\n");
	}
	return 0;
}
