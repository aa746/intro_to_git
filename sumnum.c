#include <stdio.h>
int main()
{
    int n1, n2, sumOfTwoNumbers;
    
    printf("Enter two integers: ");

    // two integers entered by user are stored using scanf()
    scanf("%d %d", &n1, &n2);

    // store sum in variable Sum
    sumOfTwoNumbers = n1 + n2;

    // display output     
    printf("%d + %d = %d", n1, n2, sumOfTwoNumbers);
	
	 // check if the sum is even or odd, 
    // and print result to screen
    if(sumOfTwoNumbers % 2 == 0) printf("%d is even\n", sumOfTwoNumbers);
    else printf(" %d is odd\n", sumOfTwoNumbers);

    return 0;
}