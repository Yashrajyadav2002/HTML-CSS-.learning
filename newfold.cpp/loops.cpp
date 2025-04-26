#include<iostream>
using namespace std;

//find the greatest num ?
int main(){
    int num,rev=0;
    cout<<"enter the num";
    cin>>num;

    while(num>0){
        int digit=num%10;
        if(digit>rev){
            rev=digit; 
        }
        num=num/10;
    }
    cout<<"largest digit is"<<rev;
    return 0;
}

//find the smalest number ?

int main(){
    int num,rev=9;
    cout<<"enter the num";
    cin>>num;

    while(num>0){
        int digit=num%10;
        if(digit<rev){
            rev=digit; 
        }
        num=num/10;
    }
    cout<<"smallest digit is"<<rev;
    return 0;
}

// find the number of digit ?
int main(){
    int num,i=0;
    cout<<"entre the num";
    cin>>num;

    while(num>0){
        i++;
        num=num/10;
    }
    cout<<"number of digit is "<<i;
    return 0;
}
   
//find the LCM ?
 
int main() {

    int num1,num2,i;
    cout<<"enter the num";
    cin>>num1;
    cout<<"enter the 2 num";
    cin>>num2;

    int mx=(num1>num2)?num1:num2;

    i=mx;
    while(1){

        if(i%num1==0 && i%num2==0){
            break;
        }
        i=mx+i;

    }
    cout<<i;

    return 0;

    

    
}

