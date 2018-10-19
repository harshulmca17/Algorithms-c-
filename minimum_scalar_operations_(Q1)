#include <iostream>
//#include <conio.h>

int min_scalar(int p[],int n)
{
    int q;
    int i,j,k,l;
    int m [n][n];
    int s [n-1][n-1];
    for(i=0;i<=n;i++){
        m[i][i]=0;
        for(l=2;l<=n;l++){
            for(i=1;i<=(n-l+1);i++){
                j=i+l-1;
                m[i][j]=999999999;
                for(k=i;k<=j-1;k++){
                    q = m[i][k] + m[k+1][j] + p[i-1] * p[k] * p[j];                    //cost function 
                    if(q<m[i][j]){
                        m[i][j]=q;
                        s[i][j-1]=k;
                    }
                }
            }
        }
    }
    std::cout<<"sdff";
    return m[1][n-1];
}
int main()
{
    int n = 5;
    int num = 0;
    int p[5] = {2,3,4,5,2};
    num = min_scalar(p,n);
    std::cout<<"\nmin scalar operations required: "<<num;
}
