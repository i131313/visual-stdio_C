#include<stdio.h>
void main (void)
{
	int i,n,point[100];

	printf("�f�[�^����͂��Ă�������\n");
	n=0;
	while(scanf("%d",&point[n])!=EOF)
		n++;
	for(i=0;i<n;i++)
		printf("%d ",point[i]);
}