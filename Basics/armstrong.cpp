#include<iostream>
#include<math.h>
using namespace std;
int finddigit(int num){
    int count=0;
    while(num>0){
        num=num/10;
        ++count;
    }

    return count;
}
bool isArmstrong(int number){
    int digits=finddigit(number);
    int temp_no=number;
    int ans=0;
    while(number>0){
        int rem=number%10;
        // pow() return double value
        // round() make it to int value
        ans+=round(pow(rem,digits));
        number=number/10;
    }
    if(temp_no==ans){return true;}
    else{
        return false;
    }
}
int main(){
    int num;
    cout<<"Enter a number ";
    cin>>num;

    if(isArmstrong(num)){
        cout<<"given "<<num<<" is an Armstorng Number"<<endl;
    }
    else{
        cout<<"given "<<num<<" is not an Armstorng Number"<<endl;
    }
    return 0;
}
