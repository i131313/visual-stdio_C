#include<stdio.h>
int main(void)
{
	double x,v,t;
	int m;

	printf("��������͂��Ă�������");

	scanf("%lf",&x);

	printf("�����i�����j����͂��Ă�������");

	scanf("%lf",&v);

	t=x/v;
	m=(int)(60.0*t+0.5);


	

	
	printf("%f[km]�̓��̂������%f[km/h]�̑����ŕ�����%d[����]%d[��]������B",x,v,m/60,m%60);

	return(0);
}
