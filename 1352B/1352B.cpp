#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(k>n)
            cout<<"NO"<<endl;
        else if(k%2==0&&n%2==0){
            cout<<"YES"<<endl;
            for(int i = 0; i+1<k;i++)
                cout<<"1 ";
            if(n-k+1!=0)
                cout<<n-k+1<<endl<<endl;
        }else if(k%2==0&&n%2==1)
            cout<<"NO"<<endl;
        else if(k%2==1&&n%2==0){
            if(k*2<=n){
                cout<<"YES"<<endl;
                for(int i = 0; i+1<k;i++)
                    cout<<2<<" ";
                if((n-(k-1)*2)!=0)
                    cout<<n-(k-1)*2<<endl;
            }else
                cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            for(int i =0; i+1<k;i++)
                cout<<1<<" ";
            if(n-k+1!=0)
                cout<<n-k+1<<endl<<endl;
        }
    }
    return 0;
}

