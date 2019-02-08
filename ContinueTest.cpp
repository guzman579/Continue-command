//ContinueTest.cpp
// continue statement terminating an iteration of a for statement
#include <cmath>
using namespace std;

int main()
{

			for (int count = 1; count <= 10; count++) // loop 10 times
			{
				if (count == 7)
					continue; // skip remaining code in loop body if count is 7

				cout<<" "<<count<<endl;
			}

			cout<<"Used continue to skip printing "<<endl;
	
	system("pause");
}
