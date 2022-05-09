//
//  main.cpp
//  Dz 1
//
//  Created by Max Pasechnik on 01.05.2022.
//use Destructor for delete and constructor for names and data for persons
//class*= new class()

#include <iostream>
#include <string>
#include <ctime>
#include<random>
#include<vector>
#include<unistd.h>
using namespace std;
int StartSwitch;
int MainMenuSwitch;
int MenuSwitch;
int switch4;
int DeleteSwitch;
void Start(){
    time_t now=time(0);
    char*dt=ctime(&now);
    cout<<dt<<endl;
    cout<< "Hi ,Welcome here. Let's start)"<<endl;
    cout<<"Press 1 to start"<<endl;
    cin>>StartSwitch;
    cout<<""<<endl;
   
}

void MainPart(){
    vector<string> database;
    vector<int> Idbase;
    string username;
    string userSurName;
    string UserAge;
    string fullName;
    int CountNum;
    string UserRemover;
    srand(time(NULL));  //set the seed for the random number generator
    random_device random_device;
    mt19937 generator(random_device());
    uniform_int_distribution<> Id(100000,999999);
  
    Start();
    switch(StartSwitch){
        case 1:
        MainMenu:
            cout<<"Press 1 if you want to login account"<<endl;
            cout<<"press 2 to update"<<endl;
            cout<<"press 3 to check database"<<endl;
            cout<<"press 4 to quit"<<endl;
            cin>> MainMenuSwitch;
            cout<<""<<endl;
    switch(MainMenuSwitch){
        case 1:
           
                    cout << "please enter name : " ;
                                  cin >> username;
                                  cout << "please enter  surname :";
                                  cin >> userSurName;
                    cout << "please enter  age :";
                    cin >> UserAge;
            cout<<""<<endl;
                                fullName= username + " " + userSurName +  " " + UserAge + " " + to_string(Id(generator));
                                  database.push_back(fullName);
            Menu1:
            cout<<"Press 1 to check all info"<<endl;
            cout<<"press 2 to add another acc"<<endl;
            cout<<"press 3 to go to main menu"<<endl;
            cin >>MenuSwitch;
            switch(MenuSwitch){
                case 1:
                    DataBase:
                    CountNum = database.size();
                    cout<<""<<endl;
                    cout << "number of users in array:" << CountNum << endl;
                    cout<<""<<endl;
                    cout << "name of users in array: " << endl;
                                    for(int i = 0; i < database.size() ; i++){
                                        cout << i << " " << database[i] <<  " " << endl; ;

                                    }
                                    cout << " " << endl;
                    cout<<" Press 1 to delete User "<<endl;
                    cout<<"2 to go to main menu"<<endl;
                    cin >>DeleteSwitch;
                    switch(DeleteSwitch){
                        case 1:
                            cout<<""<<endl;
                            cout<<"Press number of User"<<endl;
                            cin>>UserRemover;
                        for(int i = 0; i < database.size() ; i++){
                            if (database[i].find(UserRemover) != std::string::npos) {
                                database.erase (database.begin()+i);
                                
                                break;
                                
                                               }
                            
                        }
                            goto Menu1;
                            break;
                        
                        case 2:
                            goto MainMenu;
                            break;
                        default:
                            break;
                            
                                    
                    }
                    break;
                case 2:
                    ChooserAcc:
                    cout<<""<<endl;
                            cout << "please enter name : " ;
                                          cin >> username;
                                          cout << "please enter  surname :";
                                          cin >> userSurName;
                            cout << "please enter  age :";
                            cin >> UserAge;
                    
                    cout<<""<<endl;
                                        fullName= username + " " + userSurName +  " " + UserAge + " " + to_string(Id(generator));
                                          database.push_back(fullName);
                            goto Menu1;
                    
                    break;
                case 3:
               
                    goto MainMenu;
                    
                default:
                    break;
            }
    
            break;
        case 2:
            database.clear();
            sleep(2);
            cout<<"DataBase is cleared"<<  endl;
            cout<<""<<endl;
            goto MainMenu;
        case 3:
            goto DataBase;
        default:
        break;
    

      }
            break;
        default:
            break;
    }
}

int main(int argc, const char * argv[]) {
    MainPart();
    cout<<"Thanks for using))"<<endl;
    cout<<"Have a nice day"<<endl;
    return 0;
}
//restarted
