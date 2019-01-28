#include<iostream>
#include<string>
#include<stdio.h>
#include"Header.h"
using namespace std;

int main()
{

	githubuser a,b,c,d;
	a.username = "ali raza";
	b.username = "ahmad raza";
	a.email="ali@gmail.com";
	b.email="raza@gmail.com";
	a.password="abc";
	b.password="abc";
	a.firstname="ali";
	b.firstname="ahmad";
	a.count=5;
	b.count=6;
	int output=comparison(a,b);
	if(output==true)
	cout<<"comparison working"<<endl;
	else 
	cout<<"Not working"<<endl;


	int count=5;
	githubuser *array=new githubuser[count*count];
	inputfromuser(array,count);
	delete[]array;
	


}