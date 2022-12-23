#include<iostream>
#include<cmath>
using namespace std;
int sum(int exp1,int exp2)
{
	return exp1+exp2;
}
int sub(int exp1,int exp2)
{
	return exp1-exp2;
}
int mul(int exp1,int exp2)
{
	return exp1*exp2;
}
int div(int exp1,int exp2)
{
	return exp1/exp2;
}
int mod(int exp1,int exp2)
{
	return exp1%exp2;
}
int main()
{
	int exp1,exp2,case1,case2,case3,case4,case5,case6,case7;
	
	cin>>exp1>>exp2;
	
    case1=sum(exp1,exp2);
  	cout<<"sum="<<case1<<endl;
	
	case2=sub(exp1,exp2);
	cout<<"subtraction="<<case2<<endl;
	
	case3=mul(exp1,exp2);
	cout<<"multiplication="<<case3<<endl;
	
	case4=div(exp1,exp2);
	cout<<"division="<<case4<<endl;
	
	case5=mod(exp1,exp2);
	cout<<"remainder="<<case5<<endl;
	
	case6=sqrt(exp1); 
	cout<<"square root="<<case6<<endl;
	
	case7=log(exp1);
	cout<<"logarthim="<<case7<<endl;
	
	return 0;
}
