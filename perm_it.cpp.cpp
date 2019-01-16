// Programul 1: PERMUTARI ITERATIVE

#include<iostream>
using namespace std;
int n;
int ST[100];
int vf;
int init(int S[],int top)
{S[top]=0;}
int tipar(int S[],int top)
{cout<<endl;
for(int i=1;i<=top;i++) cout<<S[i]<<" "; }
int solutie(int S[],int top)
{if (top==n) return 1;
          else return 0;}
int succesor(int S[],int top)
{ if (S[top]<n)  { S[top]++;return 1;}
                else return 0;  }
int valid(int S[],int top)
{if (top==1)  return 1;
else {
        for(int i=1;i<top;i++)
        {if (S[i]==S[top]) return 0;}
        return 1;} }
 int bktr_it()
 {
 vf=1;
init(ST,vf);
while (vf>=1) {
                        int am;
                        int este;
                       do {
                             am=succesor(ST,vf);
                             este=valid(ST,vf);
                            } while(!((am&&este)||(!am)));
                       if (am) { if (solutie(ST,vf)) tipar(ST,vf);
                                                        else { vf++;
                                                                  init(ST,vf);}
                                  }
                           else vf--;
                   }
return 0;}
int main()
{cout<<"n=";cin>>n;
  bktr_it();
return 0;}
