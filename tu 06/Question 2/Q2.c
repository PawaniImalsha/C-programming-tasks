#include <stdio.h>

int main(){
	
	int var = 20;
	int *ip;  
	    
    printf("Address of var - %u",&var);
    printf("\nAddress of ip - %u",ip);
    
    ip=&var;
	printf("\nAddress of ip - %u",ip);
	printf("\nValue of ip - %u",*ip);  
    
	return 0;
}
