#include<stdio.h>
int main (){
	int a,c,d=0;
	scanf("%d",&a);
	for (int i=1;i<=a;i++){
		if (a%i==0){
			c=0;
			for (int j=1;j<=a/i;j++){
				if ((a/i)%j==0)
				c++;
			}
			if (c!=2)
			d++;
		}
	}
	printf("%d",d);
}