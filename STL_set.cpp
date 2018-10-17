#include <iostream>
#include <set>
using namespace std;


int main(){
    set<int> a;

    // iteratot is only allowed to access elements
    set<int>::iterator it;

    //insert
    a.insert(1);
    for(int i=0;i<5;i++){
        a.insert(i);
    }

    //output
    for(it=a.begin();it!=a.end();it++){
        printf("%d ",*it);
    }
    cout<<"\n"<<endl;

    //find
    it = a.find(3);

    //delete
    // a.delete(1); //incorrect
    a.erase(2);
    a.erase(a.find(1));
    a.earse(it,a.end());


    //output
    for(it=a.begin();it!=a.end();it++){
        printf("%d ",*it);
    }
    cout<<"\n"<<endl;


    //size
    cout<<"size"<<a.size()<<endl;


    return 0;
}