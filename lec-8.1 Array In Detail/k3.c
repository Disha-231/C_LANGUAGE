 main(){
	int i, n, count=0, sum=0;
	int a[100];
	int b[100];
	int c[100];
	
	 printf("Enter size of array:- ");
	 scanf("%d",&n);
	for(i=0; i<n; i++){
		printf("Enter a[%d]:- ",i);
		scanf("%d",& a[i]);
		count++;
		}
		
		
		 printf("Enter size of array:- ");
		 scanf("%d",&n);
		for(i=0; i<n; i++){
		printf("Enter b[%d]:- ",i);
		scanf("%d",& b[i]);
		count++;
		}
	
			printf("array c is:- ");
	for(i=0; i<n; i++){
		c[i]=a[i]+b[i];
	
		printf("%d,",c[i]);
		}
	

	
}
