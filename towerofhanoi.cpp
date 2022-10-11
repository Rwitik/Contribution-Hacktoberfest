#include <bits/stdc++.h>
using namespace std;

void tower(int n ,char beg,char aux,char end)
{
    if(n<=0) printf("wrong entry\n");
    else if(n==1) 
    {
        printf("\nmove disc from %c to %c\n",beg,end);
    }
    else{
        tower(n-1,beg,end,aux);
        tower(1,beg,aux,end);
        tower(n-1,aux,beg,end);
    }

    
}
int main()
{
    int n;
    char a,b,c;
    printf("enter the number of disc\n");
    scanf("%d",&n);
    printf("tower of hanoi of %d disc",n);
    tower(n,'a','b','c');
}