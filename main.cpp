#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

int main () {

    
    string name2read, ext2read, pla2read, total2read;
    string name2write, ext2write, pla2write, total2write;
    string trash, open;
    string text_to_write;
    vector<string> line_vec;
    string line;
    int choice1,choice2,choice3,choice4;
    
    cout<<"What do you want to do:\n-write a new file type 1\n-read a file type 2"<<endl;
    
    cin>>choice1;
    
    if (choice1 == 1)
    {
        cout<<"WRITTING A NEW FILE\n\nenter the name of your new file:"<<endl;
        cin>> name2write;
        cout<<"enter the extension of your new file"<<endl;
        cin>> ext2write;
        cout<<"where do you want to write this file ?"<<endl;
        cin>> pla2write;
        
        total2write =  pla2write + name2write + ext2write;
        cout<<"Is this the file you want to create :\n"<<total2write<<endl;

        cout<<"validate 1\nCANCEL 2"<<endl;
        cin>>choice2;
        if(choice2 ==1)
        {
            cout<<"what do you want to wrtie in this file (to retrun to the line type\"\\n\") ?"<<endl;
            cin>>text_to_write;
            cout<<"is this the text you want ?"<<text_to_write<<endl;
            cout<<"\nvalidate 1\nCANCEL 2"<<endl;
            cin>>choice3;
            if(choice3 ==1)
            {
                ofstream new_file_written (total2write);
                new_file_written<<text_to_write;
            }
            else
                return 0;
        }
        else
            return 0;
        
    }
    
    if (choice1 == 2)
       {
           cout<<"READING A FILE\n\nenter the name of your file:"<<endl;
           cin>> name2read;
           cout<<"enter the extension of your file"<<endl;
           cin>> ext2read;
           cout<<"where is this this file ?"<<endl;
           cin>> pla2read;
           
           total2read =  pla2read + name2read + ext2read;
           cout<<"Is this the file you want to read :\n"<<total2read<<endl;

           cout<<"\nvalidate 1\nCANCEL 2"<<endl;
           cin>>choice4;
           if(choice4 ==1)
           {
               ifstream new_file_red (total2read);
               while ( getline (new_file_red, line, '<') )
               {
                 
                   istringstream ss(line);
                   getline(ss ,open,'>');
                       cout<<open<<endl;
                   
               }
               new_file_red.close();
           }
           else
               return 0;
           
       }
    
}
