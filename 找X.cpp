#include <cstdio>

const int maxN = 201;

int main(){
	int n, x;
	int a[maxN];
	while(scanf("%d", &n) != EOF) {
		int flag = -1;
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
		}

		scanf("%d", &x);
		for(int i=0; i<n; i++){
			if(x == a[i]){
				flag = i;
				break;
			}
		}
	
		printf("%d\n", flag);
	}
	
	return 0;
}
