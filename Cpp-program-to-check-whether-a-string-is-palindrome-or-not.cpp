       #include<iostream.h>
       #include<conio.h>

       void main()
       {
              char str[50],rev[50];
              char found='y';
              int i,len=0;
              clrscr();

              cout<<"\nEnter any string : ";
              gets(str);
              
              for(i=0;str[i];i++)
                     len++;

              for(i=0;i<len;i++)
                     rev[i] = str[len -1 -i];
              rev[i] = '\0';

              for(i=0;i<str[i];i++)
              {
                     if(str[i] != rev[i])
                     {
                             found='n';
                             break;
                      }
               }
              
               if(found=='y')
                        cout<<"\n%s is palindrome",str);
               else
                        cout<<"\n%s is not palindrome",str);

              getch();
    }
