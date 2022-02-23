#include<stdio.h>
#include<math.h>

void input(float *x1, float *y1, float *x2, float *y2)
{
 printf("Input x1: ");
	scanf("%f", x1);
	printf("Input y1: ");-
	scanf("%f", y1);
  printf("Input x2: ");
	scanf("%f", x2);
	printf("Input y2: ");
	scanf("%f", y2);
}

float find_distance(float x1, float y1, float x2, float y2, float *area)
{
 *area= sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

  return *area;
}

void output(float x1, float y1,float x2, float y2, float area)
{
  printf("the distance between %.1f %.1f and %.1f %.1f is %.1f",x1,y1,x2,y2,area);
}

void main()
{
  float a,b,c,d;
  float *e;
  input(&a,&b,&c,&d);
  float ans = find_distance(a,b,c,d,&e);
  output(a,b,c,d, ans);
}