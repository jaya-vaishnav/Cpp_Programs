       #include<iostream.h>
       #include<conio.h>

       void main()
       {
              char str[50],rev[50];
              int i,len=0;
              clrscr();

              cout<<"\nEnter any string : ";
              gets(str);
              
              for(i=0;str[i];i++)
                     len++;

              for(i=0;i<len;i++)
                     rev[i] = str[len -1 -i];
                     
              rev[i] = '\0';
              
              cout<<"\nString after reverse : "<<rev;

              getch();
    }
