#include<stdio.h>

int get_max(int, int);

int main(void)
{
	int seisuu1,seisuu2;

	printf("2�̐����l�̑召�𔻒肵�܂��D\n");
	printf("1�߂̐����l��");
	scanf("%d",&seisuu1);
	printf("2�߂̐����l��");
	scanf("%d",&seisuu2);

	printf("�傫�����̒l��%d�ł��D\n",get_max(seisuu1,seisuu2));

	return 0;
}

int get_max(int seisuu1, int seisuu2)
{
	int max;

	if(seisuu1 > seisuu2)
	{
		max = seisuu1;
	}
	else if(seisuu2 > seisuu1)
	{
		max = seisuu2;
	}
	else 
	{
		printf("�����l�ł��D");
		max = 0;
	}

	return max;
}