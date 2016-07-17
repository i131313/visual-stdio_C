#include<stdio.h>

int main(void)
{
	FILE *fp;
	FILE *fp_copy;
	
	char c[200];
	
	fp = fopen("kadai3_1.txt","r");

	if(fp == NULL) 
	{
		printf("ファイルが開けません\n");
		return -1;
	}

	fp_copy = fopen("kadai3_1Copy.txt","w");

	if(fp_copy == NULL) 
	{
		printf("ファイルが開けません\n");
		return -1;
	}
	
    while(fscanf(fp,"%s",c) != EOF)
	{
        fprintf(fp_copy,"%s\n",c);
	}
	
	fclose(fp);
	fclose(fp_copy);

	return 0;

}