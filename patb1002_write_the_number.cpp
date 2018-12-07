#include <stdio.h>
#include <stack>
using namespace std;
int main(){
    const int maxn=110;
    char s[maxn];
    int n=0;
    stack<int> st;
    scanf("%s",s);
    int i=0;
    // while(s[i]!="\0"){//注意字符串是双引号，字符是单引号
    while(s[i]!='\0'){
        n = n + s[i]-'0';
        i++;
    }
    if(n==0)printf("ling");
    while(n>0){
        st.push(n%10);
        n=n/10;
    }
    while(!st.empty()){
        //switch(st.pop())//st.pop()返回值为void
        switch(st.top()){
            case 1: printf("yi");break;
            case 2: printf("er");break;
            case 3: printf("san");break;
            case 4: printf("si");break;
            case 5: printf("wu");break;
            case 6: printf("liu");break;
            case 7: printf("qi");break;
            case 8: printf("ba");break;
            case 9: printf("jiu");break;
            case 0: printf("ling");break;
        }
        st.pop();
        if(st.size()>0)printf(" ");
    }
    //printf("\b");//要求最后不输出空格，先输出再删除行不通
    return 0;
}