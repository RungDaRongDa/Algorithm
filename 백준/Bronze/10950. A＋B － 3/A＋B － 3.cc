#include<stdio.h>
int main(){
	int a,i,s,d;
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		scanf("%d %d",&s,&d);
		printf("%d\n",s+d);
	}
	return 0;
}