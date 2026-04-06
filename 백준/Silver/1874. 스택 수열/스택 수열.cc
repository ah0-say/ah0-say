#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int s[100001];
char res[200010];
int top= -1;
int push_num=1;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int res_idx=0;
    for (int i=0; i<n;i++)
    {
        int now;
        cin>>now;
        
        while (push_num <= now)
        {
            s[++top]=push_num++;
            res[res_idx++]='+';
        }
        if (top >=0&&s[top]==now)
        {
            top--;
            res[res_idx++]='-';
        }    
        else 
        {
            cout <<"NO"<<endl;
            return 0;
        }
    }
    for (int i=0; i<res_idx;i++)
    {
        cout<<res[i]<<"\n";
    }
    return 0;
}
