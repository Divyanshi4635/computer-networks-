#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
	int j,keylen,msglen;
	char input[100],key[30],temp[30],quot[100],rem[30],key1[30];
	
	cout<<"Enter Data : ";
	gets(input);
	
	cout<<"Enter Key : ";
	gets(key);
	
	keylen=strlen(key);
	msglen=strlen(input);
	strcpy(key1,key);
	
	for(int i=0;i<keylen;i++)
	{
		input[msglen+i]='0';
	}
	for(int i=0;i<keylen;i++)
	{
		temp[i]=input[i];
	}
	for(int i=0;i<msglen;i++)
	{
		quot[i]=temp[0];
		if(quot[i]=='0')
		{
			for(int j=0;j<keylen;j++)
			{
				key[j]='0';
			}
		}
		else 
		{
			for(int j=0;j<keylen;j++)
			{
				key[j]=key1[j];
			}
		}
		for (int j=keylen-1;j>0;j--)
		{
			if(temp[j]==key[j])
				rem[j-1]='0';
			else
				rem[j-1]='1';
		}
		rem[keylen-1]=input[i+keylen];
		strcpy(temp,rem);
	}
	strcpy(rem,temp);
	
	cout<<"Quoteint is : ";
	for(int i=0;i<msglen;i++)
	{
		cout<<quot[i]<<"";
	}
	cout<<endl;
	
	cout<<"Remainder is : ";
	for(int i=0;i<keylen-1;i++)
	{
		cout<<rem[i]<<"";
	}
	cout<<endl;
	
	cout<<"Final data is : ";
	for(int i=0;i<msglen;i++)
	{
		cout<<input[i]<<"";
	}
	for(int i=0;i<keylen-1;i++)
	{
		input[msglen+i]=rem[i];
	}
	cout<<endl;
	return 0;
}
