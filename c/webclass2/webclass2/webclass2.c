#include <stdio.h>

int main(void)
{
	double x,y,z;

	printf("‚P‚Â–Ú‚ÌÀ”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf("%lf",&x);
	
	printf("‚Q‚Â–Ú‚ÌÀ”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf("%lf",&y);

	z=(-3*x+y)/8*y;
	
	printf("z=%9.3f",z);
	return(0);
}