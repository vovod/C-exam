#include<stdio.h>
#include<math.h>
#include<string.h>
int b[100000]={0};
int c[100000]={0};
int main(){
	int n, m;
	scanf("%d%d",&n,&m);
	int a[n*m];
	for(int i=0; i<n*m; i++) {
		scanf("%d",&a[i]);
		b[a[i]]++;
		c[a[i]]++;
		}
	for(int i=0; i<n*m; i++) {
		for(int j=0;j<n*m;j++){
			if(a[i] < a[j]){
				int x = a[i];
				a[i] = a[j];
				a[j] = x;
			}
		}
		}
	for(int i=0; i<n*m; i++){
		if(b[a[i]]!=0) {
			printf ("%d ",a[i]);
			b[a[i]]=0;
		}
	}
	printf("\n");
	for(int i=0; i<n*m; i++){
		if(c[a[i]]!=0) {
			printf ("%d ",c[a[i]]);
			c[a[i]]=0;
		}
	}
	return 0;
}
