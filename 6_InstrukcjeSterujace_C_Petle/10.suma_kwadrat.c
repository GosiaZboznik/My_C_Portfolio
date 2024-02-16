// 10.suma_kwadratow.c--pobiera dolna i gorna granice pewnego przedzialu
//                      i oblicza sume kwadratow liczb z tego przedzialu

#include<stdio.h>

void sumpot(int n1,int n2);

int main(void)
{
	int num1,num2;
	
	printf("Podaj dolna i gorna granice przedzialu liczb calkowitych:");
	
	for(scanf("%d %d" ,&num1,&num2);num1<num2;scanf("%d %d" ,&num1,&num2))   //pobiera dolna i gorna granice przedzialu
	{
		sumpot(num1, num2);
		printf("Podaj kolejny przedzial:\n");
	}
	printf("Koniec.");

	return 0;
}

void sumpot(int n1,int n2)													// funkcja liczaca sume poteg
{
	int n,sum;
	for (sum=0,n=n1;n<=n2;n++)
		sum=sum+n*n;
	printf("Suma kwadratow od %d do %d wynosi: %d\n", n1*n1, n2*n2, sum);
	
	return sumpot;
}


