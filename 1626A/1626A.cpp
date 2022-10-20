#include <iostream>
#include <map>
#include <string>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    string input;
    while(t--){
        map<char,int>alph;
        cin>>input;
        for(int i =0; i<input.size();i++){
            alph[input[i]]++;
        }
        for(auto it = alph.begin();it!=alph.end();it++){
            for(int j = 0; j<it->second;j++){
                cout<<it->first;
            }
        }
        cout<<endl;
    }
    return 0;
}
