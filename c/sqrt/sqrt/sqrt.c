#include<stdint.h>
#include<math.h>
int main(void)
{
	double x,y,z;

	printf("�ׂ�����v�Z���܂��B\n�����͂��Ă��������F");
	scanf("%lf",&x);

	printf("�w������͂��Ă��������F");
	scanf("%lf",&y);

	z=pow(x,y);

	printf("%g��%g���%g�ł��B",x,y,z);

    return(0);
}