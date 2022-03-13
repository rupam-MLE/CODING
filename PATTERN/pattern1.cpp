#include<iostream>
using namespace std;
int main()
{
    //var to determine no. of rows and columns
    int row,column;
    cout<<"enter rows and coumns";
    cin>>row>>column;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
            cout<<"*";
        cout<<endl;
    }
    return 0;
}