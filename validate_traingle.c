#include<stdio.h>

float valid_traingle(float a, float b, float c);

int main(void)
{
	float a,b,c;
	printf("Enter the three sides of the traingle:");
	scanf("%f %f %f",&a,&b,&c);
	valid_traingle(a,b,c);
	return 0;
}

float valid_traingle(float a, float b, float c)
{
	if (a<0||b<0||c<0)
	{
		printf("Sides cannot be Negative.");
	}
	else if ((a+b)<c||(a+c)<b||(b+c)<a)
	{
		printf("Sum of two sides should be grater than the third");
	}
	else
		printf("These sides can make a Traingle.");
	return 0;

}