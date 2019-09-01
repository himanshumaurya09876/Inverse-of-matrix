#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int i,j,k=1,n,m=0;
    cout << "Enter the size of matrix A" << endl;
    cin >> n;
    float A[n][n];
    float B[n][2*n];
    cout << "Enter the elements of matrix A" << endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin >> A[i][j];
        }
    }
    /*for augmented matrix*/
    for(i=0;i<n;i++)
    {
        for(j=0;j<2*n;j++)
        {
            if(j>=n)
            {
                if(i+n==j)
                    B[i][j]=1;
                else
                    B[i][j]=0;
            }
            else
                B[i][j]=A[i][j];
        }
    }
    cout << "Matrix A is" << endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Augmented matrix of matrix A is" << endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<2*n;j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    for(m=0;m!=n;m++)
    {
    cout << "Step-" << k <<endl;
    k++;
    for(i=m;i<n;i++)
    {
        for(j=2*n-1;j>=m;j--)
        {
            if(B[i][m]<0.000001)
            {
                cout << "Inverse doesnot exist" << endl;
                exit(1);
            }
            else
                B[i][j]=B[i][j]/B[i][m];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<2*n;j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Step-" << k <<endl;
    k++;
    for(i=n-1;i>m;i--)
    {
        for(j=m;j<2*n;j++)
        {
            B[i][j]=B[i][j]-B[m][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<2*n;j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    }
    for(m=0;m!=n-1;m++)
    {
    cout << "Step-" << k <<endl;
    k++;
    for(i=m;i<n-1;i++)
    {
        for(j=2*n-1;j!=m;j--)
        {
            B[m][j]=B[m][j]-B[m][i+1]*B[i+1][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<2*n;j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    }
    cout << "Inverse of matrix A is" << endl;
    for(i=0;i<n;i++)
    {
        for(j=n;j<2*n;j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
