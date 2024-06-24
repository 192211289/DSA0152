#include<iostream>
class floydTraingle
{
	public:
		floydTriangle(int rows)
		{
			int number=1;
			for(int i=1;i<=rows;++i)
			{
				for(int j=1;j<=1;++j)
				{
					cout<< number << " ";
					++number;
				}
				cout<< endl ;
			}
		}
		floydTraingle(){
			cout<<"\n destructor called" ;
		}
	};
	int main()
	{
		int numRows;
		cout<< "enter the no of rows:";
		cin>>numRows;
		floydTraingle traingle(numRows);
		return 0;
	}
		
