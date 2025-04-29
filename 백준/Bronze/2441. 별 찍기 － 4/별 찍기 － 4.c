#include <stdio.h>
int main(){
	int a,b,c;
	int i;
	scanf("%d", &a);
	
	for(i=a; i>0; i--){
		for(b=(a-i); b>0; b--){
			printf(" ");
		}
		for(c=0; c<i; c++){
			printf("*");
		}
	
	printf("\n");
	
	}
	return 0;

}