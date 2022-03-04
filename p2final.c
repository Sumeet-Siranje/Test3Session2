#include<stdio.h>
struct _fraction{
int num,den;
};
typedef struct _fraction Fraction;

Fraction input_fraction()
{
	Fraction x;
	printf("enter the numerator and denomenator of the fraction\n");
	scanf("%d %d",&x.num,&x.den);
	return x;
}
Fraction Largest_fraction(Fraction f1,Fraction f2,Fraction f3)
{
	Fraction F1,F2,F3;
	F1=f1;
	F2=f2;
	F3=f3;
	f1.num = (f1.num)*(f2.den)*(f3.den) ;
	f2.num = (f2.num)*(f1.den)*(f3.den) ;
	f3.num = (f3.num)*(f1.den)*(f2.den) ;
	if(f1.num>f2.num)
	{
		if(f1.num>f3.num)
			return F1;
		else
			return F3;
	}
	else if(f2.num>f3.num)
		return F2;
	else
		return F3;
}
void output(Fraction largest)
{
	printf("%d/%d is greatest fraction of all",largest.num,largest.den);
}
int main()
{
	Fraction f1,f2,f3,largest;
	f1=input_fraction();
	f2=input_fraction();
	f3=input_fraction();
	largest=Largest_fraction(f1,f2,f3);
	output(largest);
	return 0;	
}