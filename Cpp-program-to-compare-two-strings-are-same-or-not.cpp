       #include<iostream.h>
       #include<conio.h>

       void main()
       {
              char str1[50],str2[50];
              char found='y';
              int i;
              clrscr();

              cout<<"\nEnter 1st string : ";
              gets(str1);
              
              cout<<"\nEnter 2nd string : ";
              gets(str2);

              for(i=0;str1[i];i++)
              {
                     if(str1[i] != str2[i])
                     {
                           found='n';
                           break;
                     }              
              }
              
              if(found=='y')       
              cout<<"\nBoth strings are same.";
              else
              cout<<"\nBoth strings are not same.";

              getch();    
    }
