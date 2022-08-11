#include<iostream>
#include<string>
using namespace std;


class binary
{
    private:
    string s;
    void binary_check(void);/* code */


   public:

   void read(void);
  
   void ones_complement(void);
   void display(void);
};

void binary ::read(void)
{
    cout<<"Enter the binary number"<<endl;
    cin>>s;

}

void binary::binary_check(void)
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)!='1' && s.at(i)!='0')//s[i]
        {
            cout<<"Incorrect binary number"<<endl;
            exit(0);
            
            

        }
    }
}

void binary::display(void)

{
    
    
    cout<<"display binary number"<<endl;

    for(int i=0;i<s.length();i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}

void binary ::ones_complement(void)
{
     binary_check();
   
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='1')
        {
            s.at(i)='0';
        }
        else
        {
            s.at(i)='1';
        }
        
    }
}

int main()
{
    binary b;
    b.read();
    //b.binary_check();
    b.ones_complement();
    b.display();
    


    return 0;
}

