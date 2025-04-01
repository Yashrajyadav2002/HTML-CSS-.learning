#include<iostream>
using namespace std;
int main()
{
  string web;
  cout<<"enter the website name";
  cin>>web;

  if(web=="amazon"){
    cout<<"please enter cloth or mobile";
    cin>>web;

       if(web=="cloth"){
       cout<<"cloths are not available in my store chose another option";
       }
       else if(web=="mobile"){
        int budget;
        cout<<"enter your budget";
        cin>>budget;

          if(budget>0&&budget<=25000){
          cout<<"you have two options first is !!!.iquee z9.!!! and second is !!!.motorola edge 50 pro.!!!"; 
          cout<<"we provide !! 12 % of EMI !! in this models";
          cin>>budget;
          }   
          else if(budget>25000&&budget<=50000){
          cout<<"you have two options first is !!!.iphone14 pro max.!!! and second is !!!.iphone 15 pro max.!!!";
          cout<<"we provide !! 24 % of EMI !! in this models";
          }
          else if(budget>50000&&budget<=100000){
          cout<<"you have two options first is !!!.iphone14 pro max.!!! and second is !!!.iphone 15 pro max.!!!";
          cout<<"we provide !! 28 % of EMI !! in this models";
          }
          else{
           cout<<"enter your budget brother";
          }

          }
         else{
         cout<<"please enter cloth or mobile";
       }
     }
  
  else{
    cout<<"invalid website name";
  }
  return 0;
}