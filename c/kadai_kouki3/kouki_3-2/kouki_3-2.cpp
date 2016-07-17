#include<stdio.h>
int main(void)
{
	FILE *fp;
	int a[3];

	a[0] = 1;
	a[1] = 256; 
	a[2] = -256;

	fp = fopen("binary.txt","wb");

	if(fp == NULL)
	{
		perror("ファイルが開けません\n");
		return -1;
	}

	fwrite(a, sizeof(int), 3, fp);
	fclose(fp);

	return 0;
}
