#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{

	int user=0;
	int comp=0;
	cout<<"ROCK PAPER SEISSORS SHOOT!"<<endl;
	cout<<"1.Rock"<<endl;
	cout<<"2.Paper"<<endl;
	cout<<"3.Scissors"<<endl;
	cin>>user;
	if(user==1)
	{
		cout<<"you choose rock"<<endl;
		
	}
	else if(user==2)
	{
		cout<<"you choose paper"<<endl;
	}
	else{
		cout<<"you choose Scissors"<<endl;
	}
	comp = rand()%3+1;
	if(comp==1)
	{
		cout<<"comp choose rock"<<endl;
		
	}
	else if(comp==2)
	{
		cout<<"comp choose paper"<<endl;
	}
	else{
		cout<<"comp choose Scissors"<<endl;
	}
	if(user==comp)
	{
		cout<<"its a tie"<<endl;
	}
	else if(user==1){
		if(comp==2)
		{
			cout<<"you lose"<<endl;
		}
		if(comp==3)
		{
			cout<<"you win"<<endl;
		}
	}
	else if (user ==2)
	{
		if(comp==1){
			cout<<"you win"<<endl;
		}
		if(comp==3){
			cout<<"you lose"<<endl;
		}
		
	}
	else if(user==3)
	{
		if(comp==1){
			cout<<"you lose"<<endl;
		}
		if(comp==2){
			cout<<"you win"<<endl;
		}
	}
	return 0;
}
