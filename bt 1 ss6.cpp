#include<stdio.h>
int main(){
	int n,m;
	printf("Bang cuu chuong\n:");
	for(n=1;n<=9;n++){
		for(m=1;m<=9;m++)
		printf("%5d",n*m);
		printf("\n");
	}
}
