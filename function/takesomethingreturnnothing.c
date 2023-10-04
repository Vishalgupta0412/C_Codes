#include<stdio.h> 
void main( )
{
	int a, b, total ; 
	printf("\nEnter any two numbers " ) ;
	scanf("%d %d", &a, &b) ;
    sum(a, b) ;
	
}
 
void sum(x, y){
	int d ;
	d = x + y ;
	printf("\n Sum = %d \n", d ) ;
}