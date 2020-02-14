#include <stdio.h>

int main(int argc, char **argv)
{
	int i, *pi;
	char c, *pc;
	float f, *pf;

	i = 123;
	c = 'a';
	f = 1.23;

	printf(" i = %d, c = %c, f = %f\n",i,c,f);
	pi = &i; *pi = 234;
	pc = &c; *pc = 'b';
	pf = &f; *pf = 12.3;
	printf(" i = %d, c = %c, f = %f\n",i,c,f);
	pf = (float *) 0;
	*pf = 123.4;
	printf(" i = %d, c = %c, f = %f\n",i,c,f);
	return 0;

}
