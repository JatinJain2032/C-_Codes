#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int l, n, m, sum;
    cout << "Enter the values for n and m for row and column:";
    cin >> l >> m >> n;

    int a[l][m]; int b[m][n]; int ans[l][n];
    //matrix 1
    cout << "Enter the element of the first matrix" << endl;
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < m; j++)
        {

            cin >> a[i][j];
        }
    }
    //matrix 2
    cout << "Enter the element of the second matrix" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            cin >> b[i][j];
        }
    }

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < n; j++)
        {
            //result calculation
            for (int k = 0; k < m; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            ans[i][j]=sum;
            sum=0;
                
        }
    }
      // Resultant matrix
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}