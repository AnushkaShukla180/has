/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int fact,n;
    cout<<"enter the number";
    cin>>n;
    fact=n;
    for(int i=1;i<n;i++)
    {
    fact=fact*i;
    }
    
        
    
    cout<<fact;
    

    return 0;
}
