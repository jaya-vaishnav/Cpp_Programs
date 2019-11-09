      #include<iostream.h>
       #include<conio.h>

       void main()
       {
              char str1[50],str2[50],str3[50];
              int i,k=0;
              clrscr();

              cout<<"\nEnter 1st string : ";
              gets(str1);
              
              cout<<"\nEnter 2nd string : ";
              gets(str2);

              for(i=0;str1[i];i++)
                     str3[k++] = str1[i];

              for(i=0;str2[i];i++)
                     str3[k++] = str2[i];

              str3[k++] = '\0';
              
              cout<<"\nThird string : "<<str3;

              getch();
    }
