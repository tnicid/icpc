//#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int judge(char s){
    if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u') return 1;
    else return 0;
}
int main()
{
    int n,cas;
    char s[1111];
    scanf("%d",&n);
    while(scanf("%s",s)!=EOF){
        getchar();
        int flag=0;
        for(int i=0;i<strlen(s)-2;i++){
            if(judge(s[i])==0 && judge(s[i+1])==0 && s[i]!='n')
                {flag=1;break;}
        }
        //if(judges[len(s)-1]=='n')
        //cout<<judge(s[strlen(s)-1])<<endl;
        int len=strlen(s);
        if(s[len-1]!='n'&& judge(s[len-1])!=1) flag=1;
        if(strlen(s)==1 && (judge(s[0])==1 || s[0]=='n')) flag=0;
        if(flag==0) puts("YES");
        else puts("NO");
    }
    return 0;
}
