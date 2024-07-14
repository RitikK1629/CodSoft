#include<iostream>
using namespace std;
int main()
{
	int n;
	float n1,n2;
	cout<<"WLECOME TO THE SIMPLE CALCULATOR"<<endl;
	cout<<"ENTER FIRST NUMBER"<<endl;
	cin>>n1;
	cout<<"ENTER SECOND NUMBER"<<endl;
	cin>>n2;
	cout<<endl;	
	cout<<"PRESS 1 FOR ADDITION '+' " <<endl;
	cout<<"PRESS 2 FOR SUBTRACTION'-' " <<endl;
	cout<<"PRESS 3 FOR MULTIPLICATION'*' " <<endl;
	cout<<"PRESS 4 FOR DIVISION'/' " <<endl;
	cin>>n;
	switch(n)
	{
		case 1:
			cout<<n1 << "+" << n2 <<" = "<<(n1+n2)<<endl;
			break;
		case 2:
			cout<<n1 <<"-"<< n2<<" = "<<(n1-n2)<<endl;
			break;
		case 3:
			cout<<n1 <<"*"<< n2<<" = "<<(n1*n2)<<endl;
			break;	
		case 4:
			if (n2 != 0)
			{
		        cout<<n1<<" / "<< n2<<" = "<<(n1/n2)<<endl;
		    }
            else
            {
			    cout<<"ERROR DIVISION BY ZERO IS NOT ALLOWED"<<endl;
			}
            break;
        default:
            cout<<"PLEASE ENTER A VALID RESPONSE"<<endl;
	}
}
