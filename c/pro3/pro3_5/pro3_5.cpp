#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int a, b, i;

	srand(time(NULL));
	b = rand()%10+1;
	//printf("%d\n",b);
	
	for( i=1; i<=5; i++)
	{
		printf("1�`10�̐�������͂��Ă��������D�� ");
		scanf("%d",&a);
		if( a == b )
		{
			printf("%d��ڂœ�����ł��I\n",i);
			break;
		}
		if( i == 5)
		{
			printf("������%d�ł��D\n",b);
		}
		
	}
	return 0;
}