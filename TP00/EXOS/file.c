#include"header.h"

///EXO2///

float f(float x)
{
	float c;
	c=pow(x,3)-x-3;
	return c;
} 


float g(float x)
{
	float c;
	c=3*pow(x,2)-1;
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


///Exo3///


float Newton(float(*f)(float),float(*g)(float),float a,int n)
{
	
	for(int i=0;i<n;i++)
	{
		a=a-f(a)/g(a);

	}
	printf("%f",a);
}

/// EXO4///


float dichotomie2(float(*f)(float),float a,float b,float e)
{
	float c;
	c=dichotomie(f,a,b, floor(log2((b-a)/e))+1);
	printf("%f",c);

}



///Exo6///

float Newton2(float(*f)(float),float(*g)(float),float a,int k)
{
	//l=[];
	float c;
	for(int m=0,m<k,n++)
	{
		c=Newton(f,g,a,m);

	}
	//l+=[c];
	

}



