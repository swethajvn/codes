#include<stdio.h>
int main()
{   
    int n,i;
	scanf("%d",&n);
	int arr[n],high=n-1,mid,low=0,key;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
    scanf("%d",&key);
	while(high>=low)
	{	mid=(high+low)/2;
		if(arr[mid]==key)
		{
			printf("key found!! at index:%d",mid);
						break;
		}     
		else if(arr[mid]>key)
		high=mid-1;
		else
		low =mid+1;
	}
	if(high<low)
	{
		printf("key not found");
	}
return 0;	
}
