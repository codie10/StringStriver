#include<iostream>
#include <algorithm> 
using namespace std;
void palindrome(string str)
{
    string rev = str;
    reverse(rev.begin(),rev.end());
    if(rev==str)
    {
        cout<<"string is palindrome"<<endl;
    }
    else
    {
        cout<<"String is not palindrome"<<endl;
    }
    
}
int main()
{
   palindrome("AABAA");
   palindrome("aabbaa");
   palindrome("abcd");

    return 0;
}
