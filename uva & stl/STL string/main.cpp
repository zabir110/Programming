#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s1="This is a string";
    string::iterator it;
    cout<<s1<<endl;
    cout<<"Size is same as length:"<<s1.length()<<endl;
    cout<<"Concatenated strings:"<<endl;
    string s2="New string ";
    string s3=s1+s2;
    cout<<s3<<endl;

    cout<<"Compare them:"<<endl;
    if(s1==s2) cout<<"yes equal"<<endl;
    else cout<<"Not equal"<<endl;

    cout<<"print by iterator:"<<endl;
    for(it=s1.begin(); it!=s1.end(); it++) cout<<*it<< " ";

    cout<<endl<<"after insert"<<endl;
    it=s1.begin()+5;
    s1.insert(it,'l');
    cout<<s1<<endl;

    cout<<"After erase:"<<endl;
    it=s1.begin()+5;
    s1.erase(it);
    cout<<s1<<endl;

    //Replace 0=start position,4=koita replace, string=ki dara replace
    s1.replace(0,4,"ain't");
    cout<<endl;
    cout<<"After replace:"<<s1<<endl;

    //substring 0=start position, 5=koita letter niba
    cout<<"Substring:"<<s1.substr(0,5)<<endl;

    //Find
    size_t pos=s1.find("s");
    cout<<"Position of s:"<<pos<<endl;

    //find ar position theke akta substring
    cout<<"substring at position:"<<s1.substr(pos)<<endl;

    //reverse/shesh theke  find
    pos=s1.rfind("s");
    cout<<"Position of s:"<<pos<<endl;

    //reverse/shesh theke find ar position theke akta substring
    cout<<"substring at position:"<<s1.substr(pos)<<endl;

    string s="Goodbye";
    s.front();//G
   s.back();//e
   s.push_back('z');//goodbyez
   string::iterator ii=s.begin();//return the pointer of the first element
   cout<<s<<endl;
   s.pop_back();//goodbye
    cout<<s.front()<<endl;
     cout<<s.back()<<endl;
      cout<<s<<endl;
      cout<<*ii<<endl;
      ii=s.end();//return the pointer of the last+1 element
      --ii;
      cout<<*ii<<endl;
      //Like vector string doesn't have push_front and pop_front()
//Initialize a string with a constructor
string s4(s.begin(),s.begin()+3);//s3:Goo
cout<<s4<<endl;
//assign,append,insert,replace
string s5="Ideal home";
s.assign(s5);//s=s5
cout<<s<<endl;
s.assign(s5,2,4);//s=eal ,2=start,4=length
cout<<s<<endl;
s.assign("wisdom");//s=wisdom
cout<<s<<endl;
s.assign("wisdom",3);//s=wis
cout<<s<<endl;
s.assign(3,'z');//s=zzz
cout<<s<<endl;
//last a add kore
s.append(" abc");//s=zzz abc
cout<<s<<endl;
s.insert(2,"mountain",4);//s=zzmoun abc
cout<<s<<endl;
string ss="plane land";
s.replace(2,5,  ss,0,4);//2=start.5=replace of length s string,ss=cut from ss string,0=insert start,5=length of ss string,
cout<<s<<endl;
s.erase(1,5);//1=erase start position,5=erase length
cout<<s<<endl;
string n=ss.substr(2,4);//n=ane[substring of ss]
cout<<n<<endl;
s.swap(n);
cout<<s<<endl;
cout<<n<<endl;
    return 0;
}
