#include <cstdio> //忘记头文件
int main(){
  int n,cnt=0;
  scanf("%d",&n);
  while(n!=1){
    if(n%2){
      //n=3*n+1;//应该是n=(3*n+1)/2;
        n=(3*n+1)/2;
    }else{
        //n/=2;//n/=2失败,n=n/2;通过编译
        n=n/2;
    }
    //n++;//本该是cnt++，写成了n++
    cnt++;
  }
  //计算完成后忘记写printf输出结果
  printf("%d\n",cnt);
  return 0;
}