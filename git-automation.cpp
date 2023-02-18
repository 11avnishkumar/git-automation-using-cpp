#include<iostream>
#include <fstream>
using std::cin;
using std::cout;
using std::endl;
using std::system;
using std::string;
int main(){
char userInput;
string message,status;
cout<<"Note:\nThe program only update the existing repository.The program is vulnerable to the underlaying operaing system and it should not be used for security reason."<<endl;
cout<<"***************************************************"<<endl;
cout<<"The git command started..."<<endl;
system("date");
//system("git status");
// Check if branch is up to date with remote
system("git status > status.txt"); // redirect output to file
std::ifstream statusFile("status.txt");
std::getline(statusFile, status);
statusFile.close();
if (status.find("Your branch is up to date with 'origin'") != std::string::npos) {
    cout << "Your branch is already up to date with the remote. Exiting program." << endl;
    return 0;
}
system("rm status.txt"); // delete the temporary status file
system("git add -A");
cout<<"Do you want to proceed further? Y or N: ";
cin>>userInput;
cin.ignore();
if(userInput == 'y' || userInput == 'Y'){
cout<<"Enter the commit message:"<<endl;
getline(cin,message);
string command = "git commit -m \""+message+"\"";
system(command.c_str());
system("git push");
}
else{
system("git reset");
}
system("pause"); // hold the screen,press any key to continue.
return 0;
}
