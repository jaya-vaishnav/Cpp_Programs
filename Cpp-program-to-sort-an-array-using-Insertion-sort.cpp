      #include<iostream.h>
       #include<conio.h>
       void main()
       {
              int arr[10],i,j,num;
              clrscr();

              for(i=0;i<10;i++)
              {
                 cout<<"Enter any number : "; 
                 cin>>arr[i]; 
              }
              
              cout<<"\n\tUnsorted array : ";
              for(i=0;i<size;i++)
              cout<<arr[i]<<", ";
              
              for(i=0;i<10;i++)	
              {
		              num = arr[i];
		              j = i -1;
	
		              while(j>=0 && num<arr[j])
		              {
			                 arr[j+1] = arr[j];
			                 j--;
		              }

		              arr[j+1]=num;
              }

              cout<<"\n\tSorted   array : ";
              for(i=0;i<size;i++)
              cout<<arr[i]<<", ";

              getch();
}
