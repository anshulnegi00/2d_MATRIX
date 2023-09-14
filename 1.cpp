#include<iostream>
using namespace std;
int main ()
{
    string city[4]={"Delhi","Mumbai","Chennai","Kolkata"};
    string cars[4]={"LAborginoi","Bugati","Rower","GTR"};
    int number[4][4];
    cout<<"Enter cars present in this area"<<endl;
    for(int i=0;i<4;i++)
    {   cout<<city[i]<<"--->"<<endl;

         for(int j=0;j<4;j++)
        {
            cout<<cars[j]<<endl;
            cin>>number[i][j];
        }
    }
    cout<<"cities ";
    for(int i=0;i<4;i++)
    {   cout<<cars[i]<<" ";}
    cout<<endl;

    for(int i=0;i<4;i++)
    {   cout<<city[i];

         for(int j=0;j<4;j++)
        {
            cout<<"\t"<<number[i][j]<<" ";
        }
        cout<<endl;
    }
}
