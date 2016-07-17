#include<stdio.h>
int main(void)
{
	double x,v,t;
	int m;

	printf("‹——£‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");

	scanf("%lf",&x);

	printf("‘¬‚³i‘¬j‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");

	scanf("%lf",&v);

	t=x/v;
	m=(int)(60.0*t+0.5);


	

	
	printf("%f[km]‚Ì“¹‚Ì‚è‚ğ‘¬%f[km/h]‚Ì‘¬‚³‚Å•à‚­‚Æ%d[ŠÔ]%d[•ª]‚©‚©‚éB",x,v,m/60,m%60);

	return(0);
}
