#include <cstdio> 
#include <vector>

using namespace std;

struct node{
	int data;
};

int main(){
	vector<int> a;
	vector< vector<int> >b; //pay attention to the "space" between >>(bit manipulation)
	vector<int> b2[10]; // different from  vector< vector<int> >
	vector<node> c;

	//add elements
	for(int i=0;i<5;i++){
		a.push_back(i);//add elements.
	}

	//output
	vector<int>::iterator it = a.begin();
	for(int i=0;i<5;i++){
		printf("%d ",*(it+i));
	}

	for(vector<int>::iterator it=a.begin();it!=a.end();it++){
		printf("%d ",*it);
	}

	
	//size
	printf("The size:%d\n",a.size());


	//delete the last element
	printf("pop back\n");
	a.pop_back();
	printf("size %d\n",a.size());

	//delete a element OR [first,last) 
	a.erase(a.begin());
	a.erase(a.begin(),a.begin()+1);

	//insert element
	a.insert(a.begin(),-1);
	printf("size %d\n",a.size());


	//clear
	a.clear();
	printf("size %d\n",a.size());
	return 0;
}
