#include<stdio.h>
#include <stdlib.h>
int s[1000000];
int compare(const void *a, const void *b){
    int num1 = *(int *)a;
    int num2 = *(int *)b;
    if (num1 < num2)
        return -1;
    if (num1 > num2)
        return 1;
    return 0;
}
int main(){
	int a;
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		scanf("%d",&s[i]);
	}
	qsort(s, a, sizeof(int), compare);
	for(int i=0;i<a;i++){
		printf("%d\n",s[i]);
	}
}