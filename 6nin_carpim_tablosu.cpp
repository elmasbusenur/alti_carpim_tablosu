/*Write C code
to print the multiplication table for 6's*/
#include<stdio.h>
int main ()
{
	int a=6;
	int sonuc=0;
	printf("6 sayisinin carpim tablosu\n");
	
    for(int i=1;i<11;i++){
    	
    	 sonuc=i*a;
    
    printf("%d\n", sonuc);
    
	}

	return 0;
	}
