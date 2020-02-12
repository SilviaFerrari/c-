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
#include<iostream>
#define MAXlist 100
using namespace std;

int n, high, low;
int a[MAXlist];

void open_file(){
	int temp;
	freopen("input_pesi","r",stdin);
	freopen("output_pesi", "w", stdout);
	for(n = 0; n < MAXlist && scanf("%d", &temp)!=EOF; n++){
		a[n] = temp;
	}
}

void max(){
	high = a[0];
	for(int i = 0; i < n; i++){
		if(high < a[i]) high = a[i];	
	}
	cout << "massimo: " << high << endl;
}

void min(){
	low = a[0];
	for(int i = 0; i < n; i++){
		if(low > a[i]){
			low = a[i];
		}	
	}
	cout << "minimo: " << low << endl;
}

void sort(){
	for(int i = 0; i < n; i++){
		for(int e = 0; e < n; e++){
			if(a[i] < a[e]){
				high = a[e];
				a[e] = a[i];
				a[i] = high;
			}
		}
	}
	cout << "array: " << endl;
	for(int i = 0; i < n; i++){
		cout << a[i] << endl;
	}
}
int main(){
	open_file();
	max();
	min();
	sort();
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


/*#include<assert.h>
#include<stdio.h>
int n;
int main(){
	freopen("input5","r",stdin);
	freopen("output5", "w", stdout);
	assert(1 == scanf("%d", &n));
	
	for(int i = 0; i<n; i++){
		int a[3];
		int x = 0;
		for(int e = 0; e<3; e++){
			assert(1 == scanf("%d", &a[e]));
			x = x + a[e];
		}
		x = x/3;
		printf("%d\n", x);
	}
	return 0;
}*/
