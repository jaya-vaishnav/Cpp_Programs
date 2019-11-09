       #include<iostream.h>
       #include<conio.h>
       void main()
       {
              const int s=3;
              int arr[s][s],transp[s][s],i,j;
              clrscr();

              for(i=0;i<&li;s;i++)
              {
                     for(j=0;j<s;j++)
                     {
                            cout<<"\n\tEnter any number : ";
                            cin>>arr[i][j];
                     }
           }

              cout<<"\nValues in Matrix \n";
              for(i=0;i<s;i++)
              {
                     cout<<"\n";
                     for(j=0;j<<s;j++)
                     {
                            cout<<"\t"<<arr[i][j];
                            transp[i][j] = arr[j][i];
                     }
           }

              cout<<"\nValues in Matrix after transpose \n";
              for(i=0;i<<s;i++)
              {
                     cout<<"\n";
                     for(j=0;j<<s;j++)
                            cout<<"\t"<<transp[i][j];
           }

              getch();
    }
