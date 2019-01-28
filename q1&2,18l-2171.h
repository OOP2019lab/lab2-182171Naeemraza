#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
struct githubuser
{
	string firstname;
	string username;
	string password;
	string email;
	int count;
};
bool comparison(githubuser a,githubuser b)//compare attributes of two users
{
	if( a.firstname == b.firstname)
		return true;
	if( a.username == b.username)
		return true;
	if( a.password == b.password)
		return true;
	if ( a.email == b.email)
		return true;
	if ( a.count == b.count)
		return true;
	else
	return false;
}
void inputfromuser(githubuser *arr,int size)//input the github user's attribute from the user
{
	int a,b;
	for(int i=0;i<size-1;i++)
	{
		cout<<"enter firstname of githubuser "<<i<<endl;
	    cin>>arr[i].firstname;
	}
	for(int i=0;i<size-1;i++)
	{
		cout<<"enter username of githubuser "<<i<<endl;
	    cin>>arr[i].username;
		for(int j=0;j<size-1;j++)
		{
			if( arr[i].username==arr[j].username && j!=i)
			{
				cout<<"This username already exists,enter another username:";
				cin>>arr[i].username;
			}
		}
	}
	for(int i=0;i<size-1;i++)
	{
		cout<<"enter password of githubuser "<<i<<endl;
	    cin>>arr[i].password;
	}
	for(int i=0;i<size-1;i++)
	{
		cout<<"enter email of githubuser "<<i<<endl;
	    cin>>arr[i].email;
	}
	
}

bool exists(githubuser *arr,int size,string username)//check the username already exist or not
{
	int breaker=1;
	for(int i=0;i<size-1&&breaker==1;i++)
	{
		if(arr[i].username==arr[i+1].username)
		{
			breaker=0;
			return true;
		}
		else 
			return false;

	}
}
githubuser*searchuser(githubuser*users,int size,string username)//gave the data of the user according to their name
{
	int*ptr;
	int flag=0;
	for(int i=0;i<size-1&&flag==0;i++)
	{
	   if(username==users[i].username)
	   {
		   flag=1;
		  ptr=*&(users[i]);
	   }
	}
	if(flag=0)
		return ptr;

	 else
	   {
 		ptr=NULL;
  		return ptr;
	   }
}