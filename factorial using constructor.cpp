#include<iostream>
using namespace std;
class Fact
{
	private:
		int n,fact;
	public:
		Fact()
		{
			cout<<"\nEnter a number to find its factorial:";
			cin>>n;
		}
		void process()
		{
			int i;
			int fact=1;
			for(i=1; i<n; i++)
			{
				fact=fact*i;
			}
		}
		void show()
		{
			cout<<"factorial of "<<n<< " is "<<fact;
		}
};
int main()
{
	Fact a;
	a.process();
	a.show();
	return 0;
}
