#include<stdio.h>
int main(void)
{
	double x=1.2,y=3.4;
	char sel;

	printf("�Q�̎���1.2�C3.4�̘a�C���C�ρC���̂����ꂩ�����߂܂��B\n");
	printf("�ǂ̉��Z���s����a,s,p,d�̕����őI�����Ă��������B\n");
	printf("�a�ia�j�@���is�j�@�ρip�j�@���id�j�F");
	scanf("%c",&sel);
    
    switch (sel){
	case 'a' : printf("x+y=%f\n",x+y);
		break;
	case 's' : printf("x-y=%f\n",x-y);
		break;
	case 'p'  : printf("x�~y=%f\n",x*y);
		break;
	case 'd' : printf("x��y=%f\n",x/y);
		break;
	default :
		printf("a,s,p,d�̂����ꂩ�̐����őI�����Ă�������\n");
	}
	return(0);
}

