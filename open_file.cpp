#include<assert.h>
#include<stdio.h>
int n, sum;
int main(){
	freopen("input/1","r",stdin);
	freopen("output/1", "w", stdout);
	assert(1 == scanf("%d", &n));
	int a[n];
	for(int i = 0; i < n; i++ ){
		assert(1 == scanf("%d", &a[i]));
	}
	
	for(int i = 0; i < n; i++ ){
		 sum += a[i];
	}
	
  printf("%d\n", sum);
  return 0;
}
