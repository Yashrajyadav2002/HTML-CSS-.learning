#include<iostream>
using namespace std;

int main(){

    int num,first=0,second=1,next;
    cout<<"enter the num";
    cin>>num;

    for(int i=1;i<num;i++){

        if(i=1){
            cout<<first<<"\t";
            continue;
        }
        if(i=2){
            cout<<second<<"\t";
            continue;
        } 
        next=first+second;
        first=second;
        second=next;
        cout<<next<<"\t";
    } 
    return 0;
}

   

          
        


    


