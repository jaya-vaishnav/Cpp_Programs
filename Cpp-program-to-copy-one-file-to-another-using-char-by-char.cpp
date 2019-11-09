       #include<fstream.h>
       #include<conio.h>

       void main()
       {

              fstream f1,f2;
              char ch;              
              clrscr();

              f1.open("file1.txt",ios::in);
              f2.open("file2.txt",ios::in|ios::out);
                            
              while(!f1.eof())
              {
                     f1.get(ch);
                     f2.put(ch);                     
              }
              
              f2.seekg(0);
              
              cout<<"\nAfter copying, data in file2.txt\n";

              while(!f2.eof())
              {
                     f2.get(ch);
                     cout<< ch;
              }

              f1.close();
              f2.close();

              getch();
    }
