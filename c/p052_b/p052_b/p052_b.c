/*���ȏ�p�D71�@���12
�@10�l�̓��_�f�[�^���z��a[]�ɓ����Ă���Ƃ�
  ���v�ƕ��ς����߂ĕ\��
 */
#include<stdio.h>
int main (void)
{
	int a[10]={56,67,63,45,80,56,78,99,45,66};
	int sum,heikin,i;
	sum=0;
	for(i=0;i<10;i++){
		sum=sum+a[i];
	}
	heikin=sum/10;
	printf("���v=%d\n",sum);
	printf("����=%d\n",heikin);
	printf("����=%f\n",(double)sum/10);
	return 0;
}
