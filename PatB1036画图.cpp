#include <cstdio>

int main(){
	char c;
	int row, col;
	col = row%2 ? row/2 : row/2+1;
	scanf("%d %c",&size, %c);
	for(int i=0; i<size; i++){
		putchar(c);
	}
	puchar("\n");
	for(int i=2; i<col; i++){
		putchar(c);
		for(int j=0; i<row-2; j++){
			putchar(" ");
		}
		putchar(c);
		putchar("\n");
	} 
	for(int i=0; i<size; i++){
		putchar(c);
	}
	puchar("\n");
	return 0;
}
