#include <iostream>
/*Given a nxm matrix.
Write an algorithm to find that the given values exsist in the matrix or not.
Integers in each row are sorted in ascending from lefr to right.
Integers in each column are sorted in ascending from top to bottom
*/
 using namespace std;


int main()
{
    int n,m,target;
    cin>>n>>m;
    cout<<"Enter the target elemetn you want to find:";
    cin>>target;

     int mat[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           cin>>mat[i][j];
        }
    }

    bool found=false;
    int r=0, c=n-1; //right most row element
    while(r<m && c>=0)
    {
        if(mat[r][c]==target)
        {
            found=true;
        }
        mat[r][c]>target ? c--: r++;
    }

    if(found)
    cout<<"Element Found"<<endl;

    else
    cout<<"Element does not exist"<<endl;


     return 0;
}