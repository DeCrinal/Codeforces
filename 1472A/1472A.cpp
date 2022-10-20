#include <iostream>
#include <cmath>
int how_much_twos(int val){
    int res = 1;
    while(val%2==0){
        val/=2;
        res*=2;
    }
    return res;
}
int main()
{
    int t;
    std::cin>>t;
    while(t--){
       int res1=1, res2=1;
       int n, h, w;
       std::cin>>w>>h>>n;
       if(h%2==0){
          res1=how_much_twos(h);
       }
       if(w%2==0){
          res2=how_much_twos(w);
       }
       if(res1*(long long)res2>=n)
            std::cout<<"YES"<<std::endl;
       else
           std::cout<<"NO"<<std::endl;
    }
    return 0;
}
