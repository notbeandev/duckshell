#include <iostream>
#include <sys/stat.h>
#include <unistd.h>
#include <string>
#include <fstream>
#include <vector>
#include <string>
#include <filesystem>
#include <experimental/filesystem>

using namespace std;

class noduckrc{
    public:
    void start(){
const std::string compilation_date = __DATE__;
const std::string compilation_time = __TIME__;
printf("Welcome to DUCKSHELL!\n");
printf("System info: \n");
system("echo distro: $(uname -o)");
system("echo hostname: $(uname -n)");
system("echo architecture: $(uname -m)");
system("echo linux kernel: $(uname -r)");
cout << "Duckshell Build info: \nDate: " << compilation_date << " Time: " << compilation_time << endl;
    }
    void info(){
const std::string compilation_date = __DATE__;
const std::string compilation_time = __TIME__;
printf("System info: \n");
system("echo distro: $(uname -o)");
system("echo hostname: $(uname -n)");
system("echo architecture: $(uname -m)");
system("echo linux kernel: $(uname -r)");
cout << "Duckshell Build info: \nDate: " << compilation_date << " Time: " << compilation_time << endl;
    }
    void shell(){
          string input;
system("sh ~/.duckuserhost");
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