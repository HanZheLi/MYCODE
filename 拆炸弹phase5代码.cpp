#include <iostream>
using namespace std;
int main()
{
	int ecx=0;
	int edx=0;
	int i,j;
	int a[]={10,2,14,7,8,12,15,11,0,4,1,13,3,9,6,5};
	for(i=2;i<=14;i++)
	{
		for(j=i;j!=15;j=a[j])
		{
			edx++;
			ecx+=a[j];
		}
		if(edx==15)
		{
		cout<<i<<" "<<ecx<<endl;
		}
		else
		{
		edx=0;
		ecx=0;
		}
	}
	return 0;
 } 
