#include<stdio.h>
int main(void)
{
	int a;

	printf("������1���͂��Ă�������");
	scanf("%d",&a);

	if(a>=0 && a<=100){
		printf("�͈͓�\n");
	}
	else{
		printf("�͈͊O\n");
	}
	return(0);
}