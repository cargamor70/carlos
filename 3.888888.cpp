#include<stdio.h>
int main()
{
	char c1,c2,c3;
	c1='E';
	c2='5';
	c3='?';
	printf("\n\r a.-  %i",c1);
	printf("\n\r b.-  %i",c1-c2+c3);
	printf("\n c.-  %i",c2-2);
	printf("\n d.-  %i",c2-'2');
	printf("\n e.-  %i",c3+'#');
	printf("\n f.-  %i",c1%c3);
	printf("\n g.-  %i",'2'+'c2');
	printf("\n h.-  %i",(c1/c2)*c3);
	printf("\n h.-  %i",3*c2);
	printf("\n h.-  %i",'3'*c2);
	
	
	return 0;
}
