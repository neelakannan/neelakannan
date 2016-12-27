#include <iostream>
using namespace std;

char letters[27]="abcdefghijklmnopqrstuvwxyz";
int main()
{
while(true)
	{
    cout<<"Enter a letter";
		char letterin;
		cin>>letterin;
		for(int i=1;i<=26;i++)
		{
			if(letterin==letters[i-1])
			{
			cout<<"letter is "<<i<<"\r\n\r\n";
				break;
				return 0;
			}
		}
	}

}
