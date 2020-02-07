/*
  	By : Neeraj Sharma
   	Roll no. : 19HCS4037
   	Description : To generate all possible permutations of a string 
*/
#include<iostream>
using namespace std;
void swap(char ar[],int k)
{
	char temp=ar[k];
	ar[k]=ar[k+1];
	ar[k+1]=temp;
}
void newswap(char ar[],int newk)
{
	char temp=ar[newk+1];
	ar[newk+1]=ar[0];
	ar[0]=temp;
}
int main()
{
	int i,j,prdct=1,counter=0,sum=1,newk=0,k=0,flag=0,bit=1;
	long count=0;
	char ar[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','w','x','y','z'};
	int size;
	cout<<"\nEnter the no. upto how many alphabets you want to find out their permutations : ";
	cin>>size;
	for(i=1;i<=size-1;i++)
	{
		sum*=i;
	}
	while(bit<size)
	{
		//this statement performs swaping between first and the inducated letter of your alphabet string
		if(flag==size*sum)
		{
			newswap(ar,newk);
			newk++;
			counter=0;
			flag=0;
			bit++;
			cout<<"\n";
		}
		//this statement prints all the possible permutations of each letter of your alphabet string
		if(counter<=sum)
		{
			for(i=0;flag<(sum*size);i++,flag++)
			{
				cout<<ar[i]<<" ";
				if(i==size-1&&k<size-1)
				{
					++k;
					i=-1;
					if(k==size-1)
					{
						k=1;
						swap(ar,k);
						counter++;
						count++;
						cout<<"\n";	
					}	
					else
					{
						swap(ar,k);
						counter++;
						count++;
						cout<<"\n";
					}
				}	
			}	
		} 
	}
	cout<<"\n\nTotal number of permutations are : "<<count;
	return 0;
}

