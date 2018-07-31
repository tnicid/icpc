#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int a,b;
//long long dp[11111][11111];
int n;
int main()
{
    scanf("%d",&n);
    int prev=1e9+7;
    int flag=0;
    for(int i=1;i<=n;i++){
        int a,b;
        scanf("%d%d",&a,&b);
        if(a<b) swap(a,b);
        if(a<=prev) prev=a;
        else if(b<=prev) prev=b;
        else flag=1;
    }

    if(flag) puts("NO");
    else puts("YES");
    //cout<<dp[n][0]<<" "<<dp[n][1]<<endl;
    //cout << "Hello world!" << endl;
    return 0;
}
