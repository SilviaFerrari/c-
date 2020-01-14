#include<assert.h>
#include<stdio.h>
int N, S;
int main(){
	freopen("input.txt","r",stdin);
	//freopen("output.txt", "w", stdout);
	assert(1 == scanf("%d", &N));
	int A[N];
	for(int i = 0; i < N; i++ ){
		assert(1 == scanf("%d", &A[i]));
	}
	
	for(int i = 0; i < N; i++ ){
		 S += A[i];
	}
	
  printf("%d\n", S);
  return 0;
}
