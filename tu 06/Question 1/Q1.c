#include <stdio.h>
int i;
int main(){
	
	int var1;
    char var2[10];
    
    printf("Address of var1 - %u",&var1);
    for(i=0;i<10;i++){
    	printf("\nAddress of the element %d in var2 - %u",i+1,&var2[i]);
	}
    return 0;
}
