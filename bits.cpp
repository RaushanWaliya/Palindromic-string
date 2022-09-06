#include<bits/stdc++.h>
using namespace std;
int main()
{
/*	cout<<7/2<<endl;
	cout<<7/2.0<<endl;
	cout<<'c'+1<<endl;
	cout<<7/2*3<<endl;   //precedence order
	cout<<3*7/2<<endl;
	
	*/
/*	int,char,long int,long long int,float,double 
	
	  -10^9<int<10^9
	  -10^12<long int<10^12
	  -10^18<long long int<1-^18
	  */
	  /*int a=100000;
	  int b=100000;
	  int c=a+b;
	  int d=a*b;
	  cout<<c<<" "<<d<<endl;
	  */
	/*  long long int a=100000;
	  long long int b=100000;
	  long  long int c=a+b;
	   long long int d=a*b;
	  cout<<c<<" "<<d<<endl;
	 */
	 /* int a=100000;
	  int b=100000;
	  int c=a+b;
	  long long int d=a*1LL*b;
	  cout<<c<<" "<<d<<endl;
    */


/*
    Given a Rectangle of length l and b.Pribt area of rectangle.
    
    Constraints:
    	1<=l<=10^9
    	1<=b<=10^9
    	
    Input Format:
		2 space separated integer l and b
		
	Output Format:
		Single number which is area of Rectangle
		
	Sample In put:
		3 4
		
	Sample output:
		12
		
*/
/*
 	int l,b;
	cin>>l>>b;
	cout<<l*1LL*b<<endl;	
	
	*/	
	
  /*  Pattern Print	
  	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl; 	
	}
	*/
	
 /*    TEST CASE INCLUDE CODE	
	int t;
	cin>>t;
//	for(int test=0;test<t;test++)
    while(t--){
    			int n;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=i;j++){
				cout<<"*";
			}
			cout<<endl; 	
		}
		
	}
	*/
	
/*	while(true){
		int i;
		cin>>i;
	if(i==42){
		break;
		}
		cout<<i<<endl;
	}
		
*/
	int t;
	cin>>t;
	while(t--){45
	int n;
	cin>>n;
	int digit_sum=0;
	while(n>0){
		int last_digit=n%10;
		digit_sum=last_digit+digit_sum;
		n=n/10;	
	}
	cout<<digit_sum<<endl;		
	}
			
}
