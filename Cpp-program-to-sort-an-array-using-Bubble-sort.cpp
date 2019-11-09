       #include<iostream.h>
       #include<conio.h>
       void main()
       {
              int arr[10],i,j,temp,size=10;
              clrscr();

              for(i=0;i<10;i++)
              {
                 cout<<"Enter any number : "; 
                 cin>>arr[i]; 
              }
              
              cout<<"\n\tUnsorted array : ";
              for(i=0;i<size;i++)
              cout<<arr[i]<<", ";
              
                for(j=0;j<size;j++)
              {
		              for(i=0;i<size-1-j;i++)
		              {
			                 if(arr[i]>arr[i+1])
			                 {
				                     temp=arr[i];
				                     arr[i]=arr[i+1];
				                     arr[i+1]=temp;
			                  }
		              }
              }

              cout<<"\n\tSorted   array : ";
              for(i=0;i<size;i++)
              cout<<arr[i]<<", ";

              getch();
}
