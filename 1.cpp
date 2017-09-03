#include <iostream>
#include<string.h>
 
using namespace std;

int main(int argc, char** argv)
{
int i,n,j,c,l=1,k,t=1;
char a[100][100],b[100][100];
for(i=0;i<4;i++)
{
    cin>>a[i];
}
cout<<a[0]<<"\n";
c=strlen(a[0]);

for(i=1;i<4;i++)
{
       if(a[0][0]==a[i][c-1])
        {
           for(j=c-2;j>=0;j--)
           {
               b[l][0]=a[i][j];
               l++;
           }
           
        }
        if(a[0][c-1]==a[i][0])
        {
            for(j=1;j<=c-1;j++)
            {
                b[t][c-1]=a[i][j];
                t++;
            }
        }
}
        int y=c-2;
        for(i=1;i<4;i++)
        {
        if(b[c-1][0]==a[i][c-1] )
        {
            for(j=1;j<=c-2;j++)
            {
                
                b[c-1][j]=a[i][y];
                y--;
            }
        }
        }
       

for(i=1;i<=c-2;i++)
{
    for(j=1;j<=c-2;j++)
    {
        b[i][j]='*';
    }
}
for(i=1;i<c;i++)
{
    for(j=0;j<c;j++)
    {
        cout<<b[i][j];
    }
    cout<<"\n";
}
  
    
}


    
