#include<iostream>
using namespace std;

// /(1.0) check the student pass or fail in exam.
 int main (){
     

     int num=33;

     cout<<"enter the num";
     cin>>num;
     (num>=33)? cout<<"pass in exam": cout<<"fail in exam";

     return 0;
}




// (2.0) chek the number is diviable by 5 or 10.?

//    int num=20;

//      cout<<"enter the num";
//      cin>>num;
//      (num%2==0 && num%10==0)? cout<<"divisable":cout<<"not divisable";

//      return 0;

     
// }
     //chek the number is less than 100;
/*int num=100;

cout<<"enter the number";
cin>>num;

(num<100)?cout<<"this value is less than  number 100": cout<<"this value is grater than  number 100";

return 0;
}*/

   // check the person can he do voting;
// int num=18;
// cout<<"enter the number";
// cin>>num;
// (num>=18)? cout<<"come in voting": cout<<" out for voting";

// return 0;
// }

//check the number between 50 to 100 ?

/*int num=60;
cout<<"enter the num";
cin>>num;
(num>50&&num<100)? cout<< "num between":cout<<"num is not between";

return 0;
}*/

//check the number is divisable by 5 or 10 ?

/*int num=30;
cout<<"enter the number";
cin>>num;
(num%5==0 && num%10==0)?cout<<"divisable":cout<<"not divisable";
return 0;
}*/

// create the password type condition ?
/*int num=8250;
cout<<"enter the num";
cin>>num;
(num==8250)? cout<<"come in": cout<<"go out";
return 0;
}*/

//check the number is divisable by 9 ?
/*int num=36;
cout<<"enter a valid number";
cin>>num;
(num%9==0)? cout<<"your welcome": cout<<"get lost";
return 0;
}*/

//check the number is equal to 60 ?
/*int num=60;
cout<<"enter the valid value";
cin>>num;
(num==60)? cout<<"this is valid": cout<<"this is not valid";
return 0;
}*/


// solve the questions with the help of into or divisiable values ?

/*int a=40;
int b=30;

a=a*b;
b=a/b;
a=a/b;
cout<<"a="<<a<<"b="<<b;
return 0;
}*/

// solve the question with the help of using variable ?

/*int a=30;
int b=50;

a=a+b;
b=a-b;
a=a-b;

cout<<"a="<<a<<"b="<<b;
return 0;
}*/

// solve the question without the help of using variable ?

// int a=40;
// int b=36;
// int c;
// c=a;
// a=b;
// b=c;

// cout<<"a="<<a<<"b="<<b;
// return 0;
// }  


/*int a=30;
int b=45;
int c;

c=a;
a=b;
b=c;

cout<<"a="<<a<<"b="<<b;
return 0;
}



// check the  number is divisable by 3 or 7  ?

// int a;
// int b;
// cout<<"enter the value of a and b:";
// cin>>a>>b;
// if(a%3==0){
//      cout<<"number is divisable by 3"<<endl;
// } else{
//      cout<<" number is not divisable by 3"<<endl;
// }
// if(b%7==0){
//      cout<<"number is divisable by 7"<<endl;
// } else{
//      cout<<"number is not divisable by 7"<<endl;
// }
// return 0;
// }


// int a=180;
// int b=15000;
// int c=2000;

//  (a>b&&a>c)?cout<<a:(b>a&&b>c)?cout<<b:cout<<c;

//find the gratest number?
 int a=2;
int b=7;
int c=1;

 (a>b&&a>c)?cout<<a:(b>a&&b>c)?cout<<b:cout<<c;

//find the value nagative or positive or zero?

 int a=180;

 (a==0)?cout<<"the value is zero":(a<0)?cout<<"the value is nagitive":cout<<"the value is posative";

// find the sum of numbers?
int main(){
int num1,num2,num3,sum;

cout<<"enter the number";
cin>>num1>>num2>>num3;

sum=num1+num2+num3;

cout<<"number of sum is"<<sum;
return 0;
}

// find the sum of the variable?
  
int main(){
int a=8965;
int num1=(a%10);
a=(a/10);

int num2=(a%10);
a=(a/10);

int num3=(a%10);
a=(a/10);

int num4=(a%10);
a=(a/10);

a+=num1+num2+num3+num4;

cout<<a;

return 0;
}

// find the grater value?

int main(){
     cout<<"this";

     int a=659,b,c,d;
     b=a%10;
     a=a%10;
     c=a%10;
     a=a%10;

     (a>b&&a>c)?cout<<"is grater"<<a:(b>a&&b>c)?cout<<" is  grater"<<b:cout<<" is grater"<<c;
     return 0;
}

int main(){

     cout<<"enter your pass.";
     
     int password=1234;
     int attempts=3;
     cin>>password;
     
    (attempts<3);
    
    
     (password==1234)?cout<<"welcome your account":(password!=1234)?cout<<"plese try again":cout<<"your account is blocked";
     

     return 0;

}
int main(){
     cout<<"enter the char";

     int c='i';
     cout<<"enter the char";
(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')?cout<<"vovel":cout<<"constent";




     return 0;
}

//chek the password is correct

int main(){

int num=1234;
cout<<"enter the num";
cin>>num;
(num==1234)? cout<<"come in": cout<<"go out";
return 0;

}












