#include"header.h"
float f(float x)
{
	float c;
	c=(x*x)-2;
	return c;
} 


float g(float x)
{
	float c;
	c=2*x;
	return c;

}



float dichotomie(float(*f)(float),float a ,float b,int n)
{
	float c;
	for(int i=0;i<n;i++)
	{
		if(f(a) *f(b)<0)
			c=(a+b)/2;
		if(f(c)*f(a)<0)
			b=c;
		else
			a=c;
	

	}
	printf("%f",c);



}


float Newton(float(*f)(float),float(*g)(float),float a,int n)
{
	
	for(int i=0;i<n;i++)
	{
		a=a-f(a)/g(a);

	}
	printf("%f",a);
}

