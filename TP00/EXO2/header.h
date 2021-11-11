#ifndef HEADER
#define HEADER
#include <stdio.h>
#include<stdlib.h>

float f(float x);
float g(float x);
float dichotomie(float(*f)(float),float a,float b,int n);
float Newton(float(*f)(float),float(*g)(float),float a,int n);

#endif

