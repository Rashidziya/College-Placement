#include<iostream>
using namespace std;

bool isPalindrome(int n){
    int temp=n;

    int rev=0;
    int rem;

    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev){return true;}
    else{return false;}
}

int main()
{
    int number;
    cout<<"Enter a positive NUmber :";
    cin>>number;

    if(isPalindrome(number)){
        cout<<"this number is Palindrome :"<<endl;
    }
    else{
        cout<<"this number is Not Palindrome :"<<endl;
    }
    return 0;
}