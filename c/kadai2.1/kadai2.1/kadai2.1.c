#include<stdio.h>
int main(void)
{
	int i,kaimono,okodukai;

	okodukai=0;

	printf("������������͂��Ă��������D�F");
	scanf("%d",&okodukai);

	printf("����������%d�~�����Ă��܂��D\n",okodukai);
	for(i=1;i<=3;i++){
		printf("������g���܂����H���@");
		scanf("%d",&kaimono);
		
		okodukai=okodukai-kaimono;

		if(okodukai<=0)
			break;
	
	}
	if(i<=3 && okodukai<0)
	printf("����������%d�~����Ȃ��Ȃ�܂����D\n",-okodukai);

	else if(i==3 && okodukai==0){
		printf("�������������傤�ǎg������܂���\n");
	}
	else if(i<=2 && okodukai==0){
		printf("�����������g������܂����D\n");
	}
	else{
		printf("����������%d�~�]��܂����D\n",okodukai);
	}
	return 0;
}