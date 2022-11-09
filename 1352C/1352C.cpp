#include <iostream>

using namespace std;
long long res(int n, int k){
    long long l = 1, r=100000000000, x=(l+r)/2,res=-1;
    while(l<=r){
        if(x-(x/n)>k){
            r=x-1;
            x=(l+r)/2;
        }else if(x-(x/n)==k){
            if(res==-1||res>x)
                res=x;
            r=x-1;
            x=(l+r)/2;
        }
        else {
            l=x+1;
            x=(l+r)/2;
        }
    }
    return res;
}
int main()
{
   int t;
   cin>>t;
   while(t--){
        int n, k;
        cin>>n>>k;
        cout<<res(n,k)<<endl;
   }
   return 0;
}

