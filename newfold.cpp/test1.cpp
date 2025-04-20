#include<iostream>
using namespace std;

//print the ten natural number ?
int main(){
    for(int i=1;i<=10;i++)
    cout<<i<<endl;
}

 // calculate the factoril ?

int main(){
    int num,ans=1;
    cout<<"enter num";
    cin>>num;

    for(int i=1;i<=num;i++)
    ans=ans*i;
    cout<<ans;
}

int main(){
    int num,sum=0;
    cout<<"enter num";
    cin>>num;

    while(num>0){
        sum=sum+num;
        num--;
    }
    cout<<sum;
}

int main(){
int range;
cin>>range;
for(int i=1;i<range;i++)
{
    if(i%3==0 && i%5==0){
        cout<<i;
    }
}
}

int main(){
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=sum+(i*i);
    }
    cout<<sum;
    }

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=10;i++)
    {
        cout<<i*n<<endl;
    }
    }

int main(){
    int n,count=0;
    cout<<"enter num";
    cin>>n;
    if(n%1==0){
        count++;
    }
    for(int i=2;i<=n;i++)
    {
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<"prime";
    }
    else{
        cout<<"not";
    }
    }

int main(){
    int n,last,rev=0;
    cout<<"entr num";
    cin>>n;
    while(n>0)
    {
        last=n%10;
        rev=rev*10+last;
        n/=10;
    }
    cout<<rev;
    }

int main(){
    int n,num1=0,num2=1,ans=0;
    cout<<"enter the num";
    cin>>n;
    if(n==1)
    {
        cout<<num1;
    }
    if(n>1){
        cout<<num1<<num2;
    }
    for(int i=1;i<n-1;i++)
    {
        ans=num1+num2;
        num1=num2;
        num2=ans;
        cout<<ans;
    }
    }

int main(){
    int n,even=0,odd=0;
    cin>>n;
    for(int i=1;i<n;i++)
    {
       if(i%2==0){
        even=even+i;
       }
       else{
        odd=odd+i;
       }
    }
    cout<<"even"<<even<<endl;
    cout<<"odd"<<odd<<endl;
}
int main (){
  int r,c,n;
  for(r=1;r<=n;r++){
    for(c=1;c<=n;c++){
      if(c<=r){
      cout<<"char(c+64)";
    }
    else{
      cout<<" ";
    }
    }
    cout<<endl;
  }
}