#include<iostream>
using namespace std;
class Rectangle
{
	private:
		int length;
		int breadth;
	public:
		Rectangle()
		{
			cout<<"\nEnter length of rectangle 1 : ";
			cin>>length;
			cout<<"\nEnter breadth of rectangle 2 : ";
			cin>>breadth;
		}
		Rectangle(int l,int b)
		{
			length=l;
			breadth=b;			
		}
		int area()
		{
			return length*breadth;
		}
};

int main()
{
	Rectangle b;
	int area2=b.area();
	cout<<"\nArea of rectangle 1 is:"<<area2;
	Rectangle a(4,5);
	int area1=a.area();
	cout<<"\n\nArea of rectangle 2 is:"<<area1;
	return 0;
}
