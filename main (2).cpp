/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{  char ch;
    cout<<"enter a character"<<endl;
    cin>>ch;
    if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
{
    cout<<"vowel"<<endl;
}
else
{
    cout<<"consonant"<<endl;
}
    return 0;
}
