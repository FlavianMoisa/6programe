// Programul 1.3: COMBINARI RECURSIVE

#include<iostream>
using namespace std;
int ST[100];
int n,vf,k;
int init(int S[],int top)
{  if (top==1) { S[top]=0;}
    else {
            S[top]=S[top-1];
            }
}
int tipar(int S[],int top)
{
 cout<<endl;
 for(int i=1;i<top;i++) cout<<S[i]<<" ";
}
int solutie(int S[],int top)
{
if (top==(k+1) ) return 1;
else return  0;
}
int succesor(int S[],int top)
{
if (S[top]<n-top+k)  {
                        S[top]++;
                        return 1;
                    }
else return 0;
}
int valid(int S[],int top)
{
if (top==1) return 1;
else
        for(int i=1;i<top;i++)
        {
            if (S[i]==S[top])  return 0;
        }
        return 1;
}
int BKTR_rec(int S[],int top)
{
 if (solutie(S,top)) { tipar(S,top);}
 while (succesor(S,top))
    {
      if ( valid(S,top) ) {
                                 init(S,top+1);
                                 BKTR_rec(S,top+1);
                               }
    }
 return 0; }
 int main()
 {
 cout<<"n=";cin>>n;
 cout<<"k=";cin>>k;
 init(ST,1);
 BKTR_rec(ST,1);
 }
