#include<math.h>
#include<stdio.h>
int main()
{
	int n=0,i=5;
	for(;;)
	{
		n++;
		float a,b,c,s,area;
		printf("����������������:");
		scanf("%f%f%f",&a,&b,&c);
		if (((a+b)>=c)&&((a+c)>=b)&&((b+c)>=a)){
			s=(a+b+c)/2;
			area=sqrt(s*(s-a*((s-b)*(s-c))));
			if ((a==b)&&(b==c))
				printf("�ȱ�������\n\n");
			else if ((a==b)||(a==c)||(b==c))
				printf("����������\n\n");
			else if (((a*a+b*b)==(c*c))||((a*a+c*c)==(c*c))||((b*b+c*c)==(a*a)))
				printf("ֱ��������\n\n");
			else
				printf("һ��������\n\n");}
		else printf("���ܹ���������\n\n");
		if(n==i)
		{
			printf("����ѭ��");
			break; 
		}
	}
	return 0; 
}

