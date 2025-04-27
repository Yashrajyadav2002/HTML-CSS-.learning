#include<iostream>
using namespace std;
int main()
{
    string web;
    int num;
    cout<<"enter the compny name";
    cin>>web;

    if(web=="realme"){
      cout<<"enter your salary amount";
      cin>>num;
      
      if(num>0&&num<30000){
         cout<<" select realme 12 or realme 12 pro";
         cin>>web;

          if(web=="12pro"){
            cout<<"realme12";
            cout<<"with 5 % intrest"<<endl;
            cout<<"final amount is "<<(20000+(20000*5/100));
            cout<<"24 months EMI is "<<(20000+(20000*5/100)/24);
          }
        
      
              //  if(num>=30000&&num<=70000){
              //    cout<<"select realme 13 or 13 pro";
              //    cin>>web;
              //    cout<<"realme13";
              //    cout<<"with 5 % intrest"<<endl;
              //    cout<<"final amount is "<<(40000+(40000*5/100));
              //    cout<<"12 months EMI is "<<(40000+(40000*5/100))/12;
              //   }
              //    if{
              //       cout<<"realme 13 pro";
              //       cout<<"with 10 % intrest"<<endl;
              //       cout<<"final amount is "<<(50000+(50000*10/100));
              //       cout<<"24 months EMI is "<<(50000+(50000*10/100))/24;
              //   }
            

            else {
            cout<<" 12pro max";
            cout<<"realme12";
            cout<<"with 5 % intrest"<<endl;
            cout<<"final amount is "<<(30000+(30000*5/100));
            cout<<"24 months EMI is "<<(30000+(30000*5/100)/24);
            }
        
    
        }
        
    else{
        cout<<"invalid ";
    }
}
}