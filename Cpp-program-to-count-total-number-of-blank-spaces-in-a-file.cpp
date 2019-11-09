       #include<fstream.h>
       #include<conio.h>

       void main()
       {

              fstream f;
              char ch;              
              int count=0;
              clrscr();

              f.open("file1.txt",ios::in);
                            
              while(!f.eof())
              {
                     f.get(ch);
                     
                     if(ch == ' ')
                     count++;
              }

              f.close();
              
              cout << "\nTotal blank spaces : " << count;

              getch();
    }
