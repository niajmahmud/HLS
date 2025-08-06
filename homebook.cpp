#include <iostream>
#include <string>
#include<limits>


using namespace std;

class Reader
{
    string name;
    int age;

public:
    void addreader()
    {
        cout << "Reader name: ";
        getline(cin, name);
        

        cout << "Reader age: ";
        cin >> age;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // after reading age

        cout << "Reader is added" << endl;
    }

    void remreader();

    void callreader()
    {
        cout << "Reader Name: " << name << endl;
        cout << "Reader age: " << age << endl;
        cout << "Currently reading: "<<endl;
    }
};

class Books
{
    string BookName;

public:
    void addbook()
    {
        cout << "Book Name: ";
        getline(cin, BookName);
    };
    void rembook();
    void borrowbook(){
        cout<<"Enter book name: "; 
        getline(cin, BookName); 
        cout<<"Book borrowed"<<endl; 
    };
};

int main()
{
    int i = 0, j = 0, d;
    Reader r[10];
    Books b[100]; 

    string command;

    while(1)
    {
        cout << "Write command: ";
        getline(cin, command);

        if (command == "addreader")
        {
            r[i].addreader();
            cout << "ID: " << i<<endl;
             i++;
        }
        else if (command == "callreader")
        {
            cout << " Enter ID : ";
            cin >> d;
            cin.ignore(); 
            r[d].callreader();
        }
        else if(command == "addbook"){
            b[j].addbook(); 
            j++; 
        }
        else if(command == "borrowbook"){
            cout<<"Enter ID: ";
            cin>>d; 
            r[d].callreader();  
        
            
            
            
        }
        else if(command == "exit"){
            break; 
        }
    }
}