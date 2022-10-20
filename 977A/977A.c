#include <stdio.h>

int main()
{
    long n, a;
    scanf("%ld%ld", &n, &a);
    while(1){
      if(n%10<a){
          a-=n%10;
          a--;
          n/=10;
      }else{
          n-=a;
          printf("\n%ld",n);
          return 0;
      }
    }
    return 0;
}
