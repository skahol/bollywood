#include<iostream>
#include<string>
#include<stdbool.h>
#include<cstdlib>			// FOR SYSTEM CALLS	
using namespace std;


int main()
{
	string mvName;
	cout<<"Enter movie name :";
	cin>>mvName;
	int size=mvName.size();
	string type;
	cout<<"type Bollywood if it is hindi movie, Hollywood if it is english movie "<<endl;
	cin>>type;
	
	// required data is saved in above variable now game begins
	system("cls");			// to clear screen	
	cout<<"\t*****************Bollywood Game*************************"<<endl;
	string originalName =mvName;
	int j;
	int count=0;
	for(j=0;j<size;j++)
	{
		if(mvName.at(j)!='a'&& mvName.at(j)!='e'&& mvName.at(j)!='i'&& mvName.at(j)!='o'&& mvName.at(j)!='u'&& mvName.at(j)!='A'&&mvName.at(j)!='E'&&mvName.at(j)!='I'&&mvName.at(j)!='O'&&mvName.at(j)!='U')
		{
			mvName.at(j)='_';
			count++;
		}
	}
	if(count==0){
		cout<<"GAME OVER";		// CASE WHEN THERE IS NO BLANK ALL ARE VOWELS
		return 0;
	}
	cout<<mvName<<endl<<type<<endl;
	char ch;			// choice
	int i=0;		// wrong guess made cross to that type
	do {
		cout<<endl<<"enter your choice"<<endl;
		cin>>ch;
		bool match=false;
		for(int i=0;i<size;i++)
		{
			if(ch==originalName.at(i))	{
				match=true;
				mvName.at(i)=ch;
				break;
			}
		}
		if(match==false){
			//	not matched
			if(type.at(i)=='d')
			{
				cout<<"Game Over"<<endl;
				system("pause");
				return 0;
			}
			cout<<"Not matched, Be carefull"<<endl;
			type.at(i)='*';
			i++;
		}
		
		cout<<mvName<<endl;
		cout<<type<<endl;
	}
	while(mvName!=originalName);
	cout<<"Congratulations, you win."<<endl;
	system("pause");
	return 0;
}
