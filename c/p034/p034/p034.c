#include<stdio.h>
int main(void)
{
	double x=1.2, y=3.4;
	int sel;

	printf("�Q�̎���1.2�C3.4�̘a�C���C�ρC���̂����ꂩ�����߂܂��B\n");
	printf("�ǂ̉��Z���s����1�`�S�̐����őI�����Ă��������B\n");
	printf("�a�i1�j�@���i2�j�@�ρi3�j�@���i4�j�F");
	scanf("%d",&sel);

	if(sel==1){
		printf("x+y=%f\n",x+y);
	}
	else if (sel==2){
		printf("x-y=%f\n",x-y);
	}
	else if(sel==3){
		printf("x�~y=%f",x*y);
	}
	else if(sel==4){
		printf("x��y=%f",x/y);
	}
	else{
		printf("1�`�S�̂����ꂩ�̐����őI�����Ă�������\n");
	}
	return(0);
}