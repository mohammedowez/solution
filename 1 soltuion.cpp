// the solution of the given program is in C++ it has been dry run the test cases



  
  
#include<bits/stdc++.h>
using namespace std;

// main function of the program
int main()
{
	// taking the input
	cout<<"Enter the input :" ;
	int number;
	cin>>number;
	
	
	// performing the operation
	
	int sum=0;
	int count=0;
	int remainder=0;
	
	// base condition
	if(number<9 && number!=1)
		{
			cout<<"-1";
			return 0;
		}
		
	
	while(number>0)
	{
		int m=number;
		while(m>0)
		{
			
		remainder=m%10;
		remainder=remainder*remainder;
		m=m/10;
		sum+=remainder;
		}
		
		count++;
		if(m==0)
		{
			if(sum==1)
			{
				cout<<count;
				return 0;
			} 
			else
			{
				number=sum;
				sum=0;
			}
		}
	} 
	
	// return if its not possible
	cout<<"-1\n";
	return 0;
	
}


Input: 13

Output: 2

Explanation: 
1*1 + 3*3 = 10
1*1 + 0*0 = 1
Sample Input 2

Input: 2

Output: -1

Explanation: 
You can't acheive 1 after doing these operation.
Sample Input 3

Input: 28

Output: 3

Explanation: 
2*2 + 8*8 = 68
6*6 + 8*8 = 100
1*1 + 0*0 + 0*0 = 1
