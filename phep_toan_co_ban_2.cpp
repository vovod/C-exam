#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	long long a, b;
	scanf("%lld %lld", &a, &b);
	if( b == 0 ){
		printf("0");
	}
	else{
		printf("%lld\n%lld\n%lld\n%lld\n%lld\n%.2lf", a+b, a-b, a*b, a/b, a%b, (double)a/b);
	}
}

