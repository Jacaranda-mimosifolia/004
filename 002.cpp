#include<math.h>
#include<stdio.h>
int main()
{
	int n=0,i=5;
	for(;;)
	{
		n++;
		float a,b,c,s,area;
		printf("请输入三角形三边:");
		scanf("%f%f%f",&a,&b,&c);
		if (((a+b)>=c)&&((a+c)>=b)&&((b+c)>=a)){
			s=(a+b+c)/2;
			area=sqrt(s*(s-a*((s-b)*(s-c))));
			if ((a==b)&&(b==c))
				printf("等边三角形\n\n");
			else if ((a==b)||(a==c)||(b==c))
				printf("等腰三角形\n\n");
			else if (((a*a+b*b)==(c*c))||((a*a+c*c)==(c*c))||((b*b+c*c)==(a*a)))
				printf("直角三角形\n\n");
			else
				printf("一般三角形\n\n");}
		else printf("不能构成三角形\n\n");
		if(n==i)
		{
			printf("结束循环");
			break; 
		}
	}
	return 0; 
}

