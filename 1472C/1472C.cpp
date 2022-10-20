#include <iostream>
#include<vector>
 
int main()
{
    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
        int max = 0, ind_max=-1;
        std::vector<int>arr;
        std::vector<int>res;
        arr.push_back(-1);
        res.push_back(-1);
        for(int i = 1; i<=n; i++){
            int temp;
            std::cin>>temp;
            arr.push_back(temp);
            res.push_back(0);
        }
        for(int i = n; i>0; i--){
            if(arr[i]+i>n)
            {
                res[i]=arr[i];
            }
            else
            {
                res[i]+=arr[i]+res[arr[i]+i ];
 
            }
            if(res[i]>=max)
            {
                max = res[i];
            }
        }
        std::cout<<max<<std::endl;
    }
    return 0;
}
