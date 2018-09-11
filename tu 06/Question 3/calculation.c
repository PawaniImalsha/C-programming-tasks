#include <stdio.h>
#include "writetable.h"
#include "findchar.h"
#include "fibo.h"

int x;

void write_table(int);
void find_char(char *, char);
int fibo(int n);

int main(void)
{
    int num;
    char ch = 'l';
    char str[] = "Hello, What are you doing these days?";
        
    printf("Wanna create Table of some number, enter number: ");
    scanf("%d", &num);
    x = fibo(num);
    
	/*write_table(num);*/
    write_table(num);
    
    /*find_char(str, ch); */    
    find_char(str, ch);     /* str, a string, is an address */
 
 	//Displaying the fibonacci number of the input number
 	printf("fibonacci number of %d is %d",num,x);
    
	return 0;
}
