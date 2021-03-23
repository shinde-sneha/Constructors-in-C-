#include<iostream>
using namespace std;
class Prime
{
	private:
		int n,i,count=0;
	public:
		Prime()
		{
			cout<<"\nEnter a number";
			cin>>n;
		}
		void process()
		{
			for(i=1;i<=n;i++)
    		{
        		if(n%i==0)
        		{
            		count++;
        		}
        
    	    }

		}
		void display()
		{
			if(count==2)
        		cout<<n <<" is a prime number";
    		else
        		cout<<n <<" is not prime number";
		}
};
int main()
{
	Prime a;
	a.process();
	a.display();
	return 0;
}
