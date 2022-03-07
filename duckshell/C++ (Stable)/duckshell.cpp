#include <iostream>
#include <sys/stat.h>
#include <unistd.h>
#include <string>
#include <fstream>
#include <vector>
#include <string>
#include <filesystem>
#include <experimental/filesystem>
#include "basic/default.cpp"

using namespace std;


const std::string compilation_date = __DATE__;
const std::string compilation_time = __TIME__;

class shellmain{
    public:
    void shell(){
        string input;
printf("> ");
getline(cin, input);
if (input == "exit"){
    system("exit");
exit(3);
}
else if (input == "duckinfo"){
    printf("---DUCK SHELL INFO---\nVersion 1.0\nCopyright: notbeandev\n");
    return shell();
}
else if (input == "duckinfo_more"){
    noduckrc norc;
    norc.info();
    return shell();
}
else if (input == "duckhelp"){
   printf("--DUCK HELP--\nexit -- exit from shell\nduckinfo -- basic info of duck\nduclinfo_more -- more info (system, duckinfo)\n");
    return shell();
}
system(input.c_str());
return shell();
    }
};

int main(){
    noduckrc norc;
    std::string user = getlogin();
string check = "/home/" + user + "/.duckrc";
string checkmore = "/home/" + user + "/.duckuserhost";
inline bool exist(const std::string& name);
{
    ifstream file(check);
    if(!file)    
    norc.start();
    else
        norc.shell();   
}
shellmain shell;
inline bool exist(const std::string& name);
{
    ifstream file(checkmore);
    if(!file)    
    shell.shell();
    else
        system("cat ~/.duckrc");      
}
}