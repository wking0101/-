#include"iostream" 
#include"cmath"     //调用求绝对值函数  fabs();
#include"cstdio"    //使用格式化输出printf();
using namespace std;
 
int main(){
    double x,b,c;
    cin>>x;
    b=x/2;
    while(1){
        c=(b+x/b)/2;
        if(fabs(c-b)<0.00001)
            break;
        b=c;
    }
    printf("%.3lf\n",c);
    return 0;
}

