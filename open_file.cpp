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
/*#include<assert.h>
#include<stdio.h>
int n, prev;
int main(){
	freopen("input/1","r",stdin);
	freopen("output/1", "w", stdout);
	assert(1 == scanf("%d", &n));
	int a[n];
	for(int i = 0; i < n; i++ ){
		assert(1 == scanf("%d", &a[i]));
	}
	
	for(int i = 1; i < n; i++ ){
		int x = a[i] + a[i-1];
		printf("%d ", x);
	}
	
  
  return 0;
}*/


/*#include<assert.h>
#include<stdio.h>
int n, prev;
int main(){
	freopen("input/2","r",stdin);
	freopen("output/2", "w", stdout);
	assert(1 == scanf("%d", &n));
	int a[n];
	for(int i = 0; i < n; i++ ){
		assert(1 == scanf("%d", &a[i]));
	}
	int x;
	for(int i = 0; i < n; i++ ){
		if(a[i]%2 == 0){
			x = a[i];
			x++;
		}
		if(a[i]%2 != 0){
			x = a[i];
			x--;
		};
		printf("%d ", x);
	}
	
  
  return 0;
}*/


/*#include<assert.h>
#include<stdio.h>
int a, b, x, n;
int main(){
	freopen("input/3","r",stdin);
	freopen("output/3", "w", stdout);
	assert(1 == scanf("%d", &n));
	for(int i = 0; i < n; i++ ){
		assert(2 == scanf("%d %d", &a, &b));
		x = a + b;
		printf("%d ", x);
	}
  return 0;
}*/


/*#include<assert.h>
#include<stdio.h>
int n, x, m;
int main(){
	freopen("input/4","r",stdin);
	freopen("output/4", "w", stdout);
	assert(1 == scanf("%d", &n));
	
	for(int i = 0; i < n; i++ ){
		assert(1 == scanf("%d", &m));
		int a[m];
		for(int e = 0; e < m; e++){
			assert(1 == scanf("%d", a[e]));
			x = x + a[e];
		}
	}
  printf("%d", x);
  return 0;
}*/
