#ifndef HEADER
#define HEADER
#include <stdio.h>
#include<stdlib.h>
#include<math.h>

float f(float x);
float g(float x);
float dichotomie(float(*f)(float),float a,float b,int n);
float Newton(float(*f)(float),float(*g)(float),float a,int n);
float dichotomie2(float(*)(float),float a,float b,float e);

#endif

