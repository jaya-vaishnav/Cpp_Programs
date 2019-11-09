       #include<iostream.h>
       #include<conio.h>

       void main()
       {
              char str1[50],str2[50];
              int i;
              clrscr();

              cout<<"\nEnter any string : ";
              gets(str1);
              
              for(i=0;str1[i];i++)
                     str2[i] = str1[i];

              str2[i] = '\0';
              
              cout<<"\nAfter copying string 2 is : "<<str2;

              getch();
    }

   Output : 

              Enter any string : I love my country
              After copying string 2 is : I love my country
