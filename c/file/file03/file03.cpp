#include<stdio.h>
int main(void)
{
	FILE *fp;
	int a[3];

	fp = fopen("mybinary.b","rb");

	if(fp == NULL)
	{
		perror("ファイルがオープンできません\n");
		return -1;
	}

	fread(a, sizeof(int), 3, fp);
	fclose(fp);

	printf("%d, %d, %d\n",a[0], a[1], a[2]);

	return 0;
}