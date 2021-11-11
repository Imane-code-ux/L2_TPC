#include<stdlib.h>
#include<stdio.h>

float **summ_m(float **A,float **B,int n)
{ 
	float ** C=malloc(n*sizeof(float *));
	for(int i=0;i<n;i++)
	{
		C[i]=(float *)malloc(n*sizeof(float));
		for(int j=0;j<n;j++)
		{
			printf("| ");
			C[i][j]=A[i][j]+B[i][j];
			printf("%f",C[i][j]);
		printf(" |\n");
		}
	}
	return C;	
}


float **mult_m(float **A,float **B,int n)
{
	float ** C=malloc(n*sizeof(float *));
	for (int i=0;i<n;i++)
	{
		C[i]=(float *)malloc(n*sizeof(float));
		for(int j=0;j<n;j++)
		{
			C[i][j]=0;
			printf("| ");
			for(int k=0;k<n;k++)
			{
				C[i][j]+=A[i][k] * B[k][j];		
			}
			printf("%f",C[i][j]);	
		printf(" |");
		}

	}
	
}
float **trans_m(float **A,int n)
{
	float ** C=malloc(n*sizeof(float *));
	for(int i=0;i<n;i++)
	{
		C[i]=(float*)malloc(n*sizeof(float));
		for(int j=0;j<n;j++)
		{	
			printf("| ");
			C[i][j]=A[j][i];
			printf("%f",C[i][j]);
		}
		printf(" |");
}

}



/*float **dia_m(float **A,int n)
{
	float **C=malloc(2*sizeof(float *));
	for(int i=0;i<2;i++)
	{
		C[i]=(float *)malloc(n*sizeof(float));
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<n;k++)
			{	
				if(i==k)
					C[i][j]=A[i][k]
				
		}
	}


}
*/

float **dia_m(float **A,int n)
{
	float **C=malloc(2*sizeof(float *));
	for(int i=0;i<2;i++)
	{
		C[i]=(float *)malloc(sizeof(float)*n);
		for(int j=0;j<n;j++)
		{
			printf("| ");
			if(i==0)
				C[i][j]=A[j][j]	;
	
			else
				C[i][j]=A[n-j][j];
			printf("%f",C[i][j]);
		}
		printf(" |");

	}


}

















void main()
{	
	int n;
	float **A;
	A=malloc(n*sizeof(float *));
	float **B;
	B=malloc(n*sizeof(float *));
	n = 2;
	for(int i=0;i<n;i++)
	{
		A[i]=(float *)malloc(n*sizeof(float));
		B[i]=(float *)malloc(n*sizeof(float));
		for(int j=0;j<n;j++)
		{
			scanf("%f",&(A[i][j]));
			scanf("%f",&(B[i][j]));
		}

	}
	summ_m(A,B,2);
	printf("\n\n");
	mult_m(A,B,2);
	printf("\n\n");
	trans_m(A,2);
	printf("\n\n");
	dia_m(A,2);
}
