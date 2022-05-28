#include "General.h"
string General::iTrim(string str)
{
    while (str[0] == ' ') str.erase(0,1);
    while (str[str.length()-1] == ' ') str.erase(str.length()-1,1);
    return str;
}
string General::format(string name)
{   name=General::iTrim(name);

    for(int i=0; i<name.length(); i++)
        while(name[i]==' '&& name[i+1]==' ')
            name.erase(i,1);
    for(int i=0; i<name.length(); i++)
        if(name[i-1]==' ' && name[i]!=' ')
            name[i]=toupper(name[i]);
        else name[i]=tolower(name[i]);
    name[0]=toupper(name[0]);
    return name;
}
string General::deleteAllSpace(string name){
    for(int i=0; i<name.length(); i++)
        while(name[i]==' ')
            name.erase(i,1);
    return name;
}
bool General::isWhiteSpace(string str)
{
    for (int i=0;i<str.length();i++)
        if (str[i]==' ') return true;
    return false;
}
bool General::haveCharacter(string str){
    for (int i=0;i<str.length();i++)
        if (str[i]<'0'||str[i]>'9') return true;
    return false;
}
string General::formatparagraph(string name){
    name=General::iTrim(name);
    for(int i=0; i<name.length(); i++)
        while(name[i]==' '&& name[i+1]==' ')
            name.erase(i,1);


    for(int i=0; i<name.length(); i++)
        if(!(name[i-1]==' ' && name[i]!=' '))
            name[i]=tolower(name[i]);
    name[0]=toupper(name[0]);
    return name;
}
string General::formatPhone(string Phone){
    if(haveCharacter(Phone)) cout<<"EROR: HAVE CHARACTER"<<endl;
    else {
        Phone=deleteAllSpace(Phone);
        if (Phone[0]!='0' || Phone.length()!=10) cout<<"EROR: THIS PHONE NUMBER IS NOT AVAILABLE"<<endl;
        else return Phone;
    }
    return "";
}
