#include<stdio.h>

int get_max(int, int);

int main(void)
{
	int seisuu1,seisuu2;

	printf("2つの整数値の大小を判定します．\n");
	printf("1つめの整数値＞");
	scanf("%d",&seisuu1);
	printf("2つめの整数値＞");
	scanf("%d",&seisuu2);

	printf("大きい方の値は%dです．\n",get_max(seisuu1,seisuu2));

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
		printf("同じ値です．");
		max = 0;
	}

	return max;
}