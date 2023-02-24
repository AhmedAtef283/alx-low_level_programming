#include <stdlib.h>
#include <time.h>
<<<<<<< HEAD
=======
#include <stdio.h>
>>>>>>> adf589e92c7dba1ec08e5ef02e43573f36025e05
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
<<<<<<< HEAD
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>0){
	printf("%d is positive",n);
									}							else if(n<0){
	printf("%d is negative" , n) ;
									}																else{
 	printf("%d is zero" , n) ;   
																}
	return (0);
}
=======

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>0)
	{
		printf("%d is positive",n);
	}
	else if(n<0)
	{
		printf("%d is negative",n);
	}
	else
	{
		printf("%d is zero",n);
	}
	return (0);
}
>>>>>>> adf589e92c7dba1ec08e5ef02e43573f36025e05
