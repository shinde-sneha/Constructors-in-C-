#include<iostream>
using namespace std;
class Armstrong
{
	private:
		int n,num,r,result=0;
	public:
		Armstrong()
		{
			cout<<"\nEnter a number:";
			cin>>n;
		}
		void process()
		{
			num=n;
			while(n!=0)
			{
				r=n%10;
				result+=r*r*r;
				n=n/10;	
			}	
	
		
		}
		void show()
		{
			if(result==num)
			{
				cout<<"\n";
				cout<<num <<" is an Armstrong number\n";
			}
		
			else
				cout<<num <<" is not an Armstrong number";
		}
};
int main()
{
	Armstrong a;
	a.process();
	a.show();
	return 0;
}
