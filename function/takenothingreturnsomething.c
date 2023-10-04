#include<stdio.h> 
void main( )
{
    int return_sum;
	
    return_sum=sum() ;
    
    printf("\n Sum = %d \n", return_sum ) ;
	
}
 
int sum(){
	int a, b, total ; 
	printf("\nEnter any two numbers " ) ;
	scanf("%d %d", &a, &b) ; 
	total = a + b ;
	return total;
	
}