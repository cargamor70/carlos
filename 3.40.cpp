#include<stdio.h>
int main()
{
	int i = 8, j = 5 ;
	float x = 0.005, Y = -0.01;
	char c = 'c', d = 'd';
	
	printf("\n a.-%i",(3 * i - 2 * j) % (2 * d - c));
	printf("\n b.-%i",2 * (( i / 5) + (4 * (j - 3)) % (i + j - 2)));
	printf("\n c.-%f",(i - 3 * j) % (c + 2 * d) / (x - Y));
	printf("\n a.-%i",(2 * x + Y) == 0);
	return 0;
	
}
