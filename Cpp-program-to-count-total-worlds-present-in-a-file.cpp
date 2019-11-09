       #include<fstream.h>
       #include<conio.h>

       void main()
       {
              fstream f;
              char wrd[20];
              int count=0;
              clrscr();

              f.open("file1.txt",ios::in);
                            
              while(!f.eof())
              {
                     f>>wrd;
                     count++;
              }
              
              cout<<"\nTotal words : "<< count;

              f.close();

              getch();
    }
