       #include<iostream.h>
       #include<conio.h>
       void main()
       {
              int arr[10],i,j,temp,small,pos;
              clrscr();

              for(i=0;i<10;i++)
              {
                 cout<<"Enter any number : "; 
                 cin>>arr[i]; 
              }
              
              cout<<"\n\tUnsorted array : ";
              for(i=0;i<size;i++)
              cout<<arr[i]<<", ";
              
              for(j=0;j<10;j++)	
              {
		              small = arr[j];
		              pos=j;
	
		              for(i=j;i<10;i++)
		              {
			                 if(small>=arr[i])
			                 {
				                     small=arr[i];
				                     pos=i;
			                 }				
		              }

		              temp = arr[j];
		              arr[j]=small;
		              arr[pos]=temp;
              }

              cout<<"\n\tSorted   array : ";
              for(i=0;i<size;i++)
              cout<<arr[i]<<", ";

              getch();
}
