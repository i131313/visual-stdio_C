/*�������͂��Ă��邤�N���ǂ������ׂ�v���O�����ł�*/

#include<stdio.h>
int main(void)
{
	int a;
	printf("�������͂��Ă�������:");
	scanf("%d",&a);

	if(a%4==0 && (a%100!=0  || a%400==0)){
		printf("���͂�������͂��邤�N�ł��B");
	}
	else{
		printf("���͂�������͂��邤�N�ł͂���܂���B");
	}
	return(0);
}