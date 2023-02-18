#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::system;
using std::string;
int main(){
char userInput;
string message;
cout<<"Note:\nThe program only update the existing repository.The program is vulnerable to the underlaying operaing system and it should not be used for security reason."<<endl;
cout<<"***************************************************"<<endl;
cout<<"The git command started..."<<endl;
system("date");
system("git status");
system("git add -A");
cout<<"The following changes will be made.Do you want to continue?Press Y or N:"<<endl;
cin>>userInput;

if(userInput = 'y' || userInput = 'Y'){
cout<<"Enter the commit message:"<<endl;
getline(cin,message);
string command = "git commit -m \""+message+"\"";
system(command.c_str());
system("git push");
}
system("pause"); // hold the screen,press any key to continue.
return 0;
}
