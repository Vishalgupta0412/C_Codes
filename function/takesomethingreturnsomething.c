#include<stdio.h> 
void main( )
{
	int a, b, total ; 
	printf("\nEnter any two numbers " ) ;
	scanf("%d %d", &a, &b) ;
	total = sum(a, b) ;
	printf("\n Sum = %d \n", total ) ;
}
 
int sum(x, y){
	int d ;
	d = x + y ;
	return d;
}