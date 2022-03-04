#include<stdio.h>
struct _fraction
{
	int num,den;
};
typedef struct _fraction Fraction;
Fraction input_fraction()
{
	Fraction x;
	printf("enter the numerator and denomenator of first fraction\n");
	scanf("%d %d",&x.num,&x.den);
	return x;
}

Fraction Smallest_fraction(Fraction f1,Fraction f2,Fraction f3)
{
	Fraction F1,F2,F3;
	F1=f1;
	F2=f2;
	F3=f3;
	f1.num = (f1.num)*(f2.den)*(f3.den);
	f2.num = (f2.num)*(f1.den)*(f3.den);
	f3.num = (f3.num)*(f1.den)*(f2.den);
	if(f1.num>f2.num)
	{
		if(f2.num>f3.num)
			return F3;
		else
			return F2;
	}
	else if(f1.num>f3.num)
		return F3;
	else
		return F1;
}
void output(Fraction f1,Fraction f2,Fraction f3,Fraction smallest)
{
	printf(" %d/%d is smallest fraction all\n",smallest.num,smallest.den);
}
int main()
{
	Fraction f1,f2,f3,smallest;
	f1=input_fraction();
	f2=input_fraction();
	f3=input_fraction();
	smallest = Smallest_fraction(f1,f2,f3);
	output(f1,f2,f3,smallest);
	return 0;
}