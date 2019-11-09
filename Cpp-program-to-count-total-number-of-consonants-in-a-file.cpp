       #include<fstream.h>
       #include<conio.h>

       void main()
       {
              fstream f;
              char ch;              
              int tot=0;
              clrscr();

              f.open("file1.txt",ios::in);
                            
              while(!f.eof())
              {
                     f.get(ch);
                     
                     if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
                     {
                                          
                             if(ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U' && ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
                             tot++;                                                 
                     }
              }

              f.close();

              cout << "\nTotal consonants : " << tot;

              getch();
    }
