//Note : For binary search array must be in order, asecnding or decending. 
                   For the following program, enter numbers in ascending order.
              
       #include<iostream.h>
       #include<conio.h>
       void main()
       {
              int arr[10],i,num,mid,lb=0,ub=9; 
              char found='n';
              clrscr();

              for(i=0;i<10;i++)
              {
                 cout<<"Enter any number : "; 
                 cin>>arr[i]; 
              }

              cout<<"\nEnter any number for search : "; 
              cin>>num; 
              
              while(lb<=ub)
              {
                     mid = (lb + ub)/2;
                     
                     if(num == arr[mid])
                     {
                           found='y';
                           break;
                     }
                     else if(num>arr[mid])
                           lb = mid + 1;
                      else
                           ub = mid - 1;
              }
              
              if(found=='y')
                     cout<<"\nMatch found at "<<midl
              else
                     cout<<"\nNo match found.";              

              getch();
       }
