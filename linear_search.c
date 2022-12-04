int main()
{
	int a[100],n,data,i;
	printf("Enter the no of elements ");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for( i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the data to search");
	scanf("%d",&data);
	for(i=0;i<n;i++)
	{
		if(a[i]==data)
		{
			printf("index=%d",i);
			break;
		}
	}
	if(i==n)
	{
		printf("Element not found");
	}
}
