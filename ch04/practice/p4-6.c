#include<stdio.h>
int main(void){
	int no;
	int i=2;
	printf("请输入一个整数:");
	scanf("%d",&no);
	while(i<=no&&no>0){
		printf("%d ",i);
		i+=2;
		if(i==no+2){
			printf("\n");
		}
	}
}