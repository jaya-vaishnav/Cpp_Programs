       #include<iostream.h>
       #include<conio.h>
       void main()
       {

              const int s=3;
              int arr1[s][s],arr2[s][s],sum[s][s],i,j;
              clrscr();

              cout<<"\nEnter Values for Matrix 1 \n";
              for(i=0;i<s;i++)
              {
                     for(j=0;j<s;j++)
                     {
                            cout<<"\n\tEnter any number : ";
                            cin>>arr1[i][j];
                     }
           }

              cout<<"\nEnter Values for Matrix 2 \n";
              for(i=0;i<s;i++)
              {
                     for(j=0;j<s;j++)
                     {
                            cout<<"\n\tEnter any number : ";
                            cin>>arr2[i][j];
                     }
           }

              cout<<"\nValues in Matrix 1 \n";
              for(i=0;i<s;i++)
              {
                     cout<<"\n";
                     for(j=0;j<s;j++)
                     {
                            cout<<"\t"<<arr1[i][j];
                     }
           }

              cout<<"\nValues in Matrix 2 \n";
              for(i=0;i<s;i++)
              {
                     cout<<"\n";
                     for(j=0;j<s;j++)
                     {
                            cout<<"\t"<<arr2[i][j];
                     }
           }

              cout<<"\nSum of Matrix 1 and 2 \n";
              for(i=0;i<s;i++)
              {
                     cout<<"\n";
                     for(j=0;j<s;j++)
                     {
                            sum[i][j] = arr1[i][j] + arr2[i][j];
                            cout<<"\t"<<sum[i][j];
                     }
           }

              getch();
    }
