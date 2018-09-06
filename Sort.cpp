#include <cstdio> 
#include <algorithm>
using namespace std;

void selectSort(int a[], int len){
/*
ѡ������֮ǰ�ı�������ѡ��֮����С�Ĳ������򲿷�֮�� 
selectSort, keep the former is orderd, and find the minimun element from the latter insert orderd part
*/
	int n = sizeof(a)/sizeof(int);
	printf("%d %d %d\n",sizeof(a),sizeof(a[0]),n);//The result is 8��4��2
	// The array will be regarded as pointer and miss its length of array, so the length of array(parameter len) is necesssary;
	//�����д������飬����ᱻ����ָ�룬��ʧ���鳤�� �����Ա��봫�����鳤�� 

	for(int i=0;i<len;i++){
		
		int k=i;//the index of minium element 
		for(int j=i;j<len;j++){
			if(a[k]>a[j]) k=j;
		}
		
		int tmp=a[k];
		a[k] = a[i];
		a[i] = tmp;	
	}
}

bool cmp(int a, int b){
	return a>b;
}

void insertSort(int a[], int len){
	for(int i=1;i <len; i++){
		int tmp = a[i], j=i;
		while(j>0 && tmp<a[j-1]){
			a[j] = a[j-1];
			j--;
		}
		a[j] = tmp;
	}
} 
int main(){
	int a[] = {2,54,54,657,7,43,754,5437,48};
	int len = sizeof(a)/sizeof(int);
	selectSort(a,len);
	for(int i=0; i< len; i++){
		printf("%d ",a[i]);
	}
	puts("\n");
	sort(a,a+len,cmp);
	/*if use sort funciton, pay attention to "using namespace std;", "#include <algorithm>" and cmp funciton*/ 
	for(int i=0; i< len; i++){
		printf("%d ",a[i]);
	}
	puts("\n");

	insertSort(a,len);
	for(int i=0; i< len; i++){
		printf("%d ",a[i]);
	}
	return 0;
}
