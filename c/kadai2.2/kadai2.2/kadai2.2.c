#include<stdio.h>
int main(void)
{
	int wararerusuu, warusuu,i,sentaku;

	for(;;){
		printf("�����l��2���͂��Ă��������D\n��");
		scanf("%d",&wararerusuu);
		printf("��");
		scanf("%d",&warusuu);
		if(warusuu==0){
			printf("0�Ŋ���Z�͂ł��܂���D\n");
			continue;
		}
		printf("%d �� %d = %d�@�]�� %d\n",wararerusuu,warusuu,wararerusuu/warusuu,wararerusuu%warusuu);
		printf("�����܂����H�i1:yes 2:no�j��");
		scanf("%d",&sentaku);
		if(sentaku==1){
			continue;
		}
		else{
			break;
		}
	}
	return 0;
}