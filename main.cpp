//
//  main.cpp
//  Dz 1
//
//  Created by Max Pasechnik on 01.05.2022.
//use Destructor for delete and constructor for names and data for persons
//class*= new class()

#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <time.h>
#include <ctime>


using namespace std;
int switch1;
int switch2;
int switch3;
int switch4;
int AdminSwitch2;
int  Start(){
    time_t now=time(0);
    char*dt=ctime(&now);
    cout<<dt<<endl;
    cout<< "Hi ,Welcome here. Let's start),Press 1 to start"<<endl;
    cin>>switch1;
    return switch1;
}
void Switch1(){
    Start();
    switch(switch1){
        default:
            cout<<"Press 1 if you want to login account, press 2 if you want to login as admin,press 4 to quit"<<endl;
            
            break;
    }
}

class Admin{
    public :
    string GetAdminName(){
        cout<<"Please write admin's name"<<endl;
        cin>>admname;
        return admname;
    }
    string GetAdminSurName(){
        cout<<"Please write admin's Surname"<<endl;
        cin>>admsurname;
        return admsurname;
    }
    int GetAdminAge(){
        cout<<"Please write admin's age"<<endl;
        cin>>adminage;
        return adminage;
    }
    string SetAdminName(){
        return admname;
    }
    string SetAdminSurName(){
        return admsurname;
    }
    int SetAdminAge(){
        return adminage;
    }
    
    
private:
    string admname;
    string admsurname;
    int adminage=0;
};
class Account1{
public:
    string DeleteName(){
        name1="User";
        return name1;
    }
    string DeleteSurName(){
        surname1="Unknown";
        return surname1;
    }
    int DeleteAge(){
        age1=0;
        return age1;
    }
    string GetName(){
        cout<<"Write name"<<endl;
        cin >>name1;
        return name1;
    }
    string GetSurName(){
        cout<<"Write Surname"<<endl;
        cin >>surname1;
        return surname1;
    }
    int GetAge(){
        cout<<"Write Age"<<endl;
        cin>>age1;
        return age1;
    }
    string SetName(){
       
        return name1;
    }
    string SetSurName(){
        
        return surname1;
    }
    int SetAge(){
      
        return age1;
    }
private:

    string name1="User";
    string surname1="Unknown";
    int age1=0;
    
};
class Account2{
public:
    string DeleteName(){
        name2="User";
        return name2;
    }
    string DeleteSurName(){
        surname2="Unknown";
        return surname2;
    }
    int DeleteAge(){
        age2=0;
        return age2;
    }
    string GetName(){
        cout<<"Write name"<<endl;
        cin >>name2;
        return name2;
    }
    string GetSurName(){
        cout<<"Write Surname"<<endl;
        cin >>surname2;
        return surname2;
    }
    int GetAge(){
        cout<<"Write Age"<<endl;
        cin>>age2;
        return age2;
    }
    string SetName(){
       
        return name2;
    }
    string SetSurName(){
        return surname2;
    }
    int SetAge(){
      
        return age2;
    }
private:

    string name2 ="User";
    string surname2="Unknown";
    int age2=0;
    
};
class Account3{
    
    public:
    string DeleteName(){
        name3="User";
        return name3;
    }
    string DeleteSurName(){
        surname3="Unknown";
        return surname3;
    }
    int DeleteAge(){
        age3=0;
        return age3;
    }
        string GetName(){
            cout<<"Write name"<<endl;
            cin >>name3;
            return name3;
        }
        string GetSurName(){
            cout<<"Write Surname"<<endl;
            cin >>surname3;
            return surname3;
        }
        int GetAge(){
            cout<<"Write Age"<<endl;
            cin>>age3;
            return age3;
        }
        string SetName(){
           
            return name3;
        }
        string SetSurName(){
            return surname3;
        }
        int SetAge(){
          
            return age3;
        }
    private:

        string name3="User ";
        string surname3="Unknown";
        int age3=0;
        
    
};
class Account4{
    
        
        public:
         
    string DeleteName(){
        name4="User";
        return name4;
    }
    string DeleteSurName(){
        surname4="Unknown";
        return surname4;
    }
    int DeleteAge(){
        age4=0;
        return age4;
    }
            string GetName(){
                cout<<"Write name"<<endl;
                cin >>name4;
                return name4;
            }
            string GetSurName(){
                cout<<"Write Surname"<<endl;
                cin >>surname4;
                return surname4;
            }
            int GetAge(){
                cout<<"Write Age"<<endl;
                cin>>age4;
                return age4;
            }
            string SetName(){
               
                return name4;
            }
            string SetSurName(){
                return surname4;
            }
            int SetAge(){
              
                return age4;
            }
        private:

            string name4= "User";
            string surname4="Unknown";
            int age4=0;
            
        
    
};
class Account5{
    
        
            
            public:
    string DeleteName(){
        name5="User";
        return name5;
    }
    string DeleteSurName(){
        surname5="Unknown";
        return surname5;
    }
    int DeleteAge(){
        age5=0;
        return age5;
    }
                string GetName(){
                    cout<<"Write name"<<endl;
                    cin >>name5;
                    return name5;
                }
                string GetSurName(){
                    cout<<"Write Surname"<<endl;
                    cin >>surname5;
                    return surname5;
                }
                int GetAge(){
                    cout<<"Write Age"<<endl;
                    cin>>age5;
                    return age5;
                }
                string SetName(){
                   
                    return name5;
                }
                string SetSurName(){
                    return surname5;
                }
                int SetAge(){
                  
                    return age5;
                }
            private:

                string name5=" User";
                string surname5=" Unknown";
                int age5=0;
                
            
        
    
};
void Switch2(){
    int switch6;
    int switch7;
    int switch8 ;
    Admin access;
    Account1 acc1;
    Account2 acc2;
    Account3 acc3;
    Account4 acc4;
    Account5 acc5;
    int us2swit;
    int switcher;
    int AdminSwitch1;
    int AdminId1;
    Switch1();
    int Id1;
    int Id2;
    int Id3;
    int Id4;
    int Id5;
    srand(time(NULL));  //set the seed for the random number generator
    Id1 = rand() %9999999 + 1000000;
    Id2 = rand() %9999999 + 1000000;
    Id3 = rand() %9999999 + 1000000;
    Id4 = rand() %9999999 + 1000000;
    Id5 = rand() %9999999 + 1000000;
    AdminId1 =rand() %10 + 1;
    tryAgain2:
    int AdminSw3;
    int AdminSw4;
    cin>> switch2;
    switch(switch2){
            
            
        case 1:
            cout<<"Choose number of your account from 1 to 5"<<endl;
            cin >>switcher;
            switch (switcher){
                case 1:{
                    
                    
            cout<<acc1.GetName()<<endl;
            cout<<acc1.GetSurName()<<endl;
            cout<<acc1.GetAge()<<endl;
            tryAgain:
            cout<<"Press 1 to check all info,press 2 to add another acc, press 3 to go to main menu"<<endl;
            cin >>switch3;
            switch(switch3){
                case 1:
                    cout<<"1 :"<<acc1.SetName()<< "  "<<acc1.SetSurName()<<"  "<<acc1.SetAge()<<"  Years old"<< "  ID: "<< Id1<<endl;
                    cout<<"2 :"<< acc2.SetName()<< "  "<<acc2.SetSurName()<<"  "<<acc2.SetAge()<<"  Years old"<<"  ID: "<< Id2<<endl;
                    cout<<"3 :"<<acc3.SetName()<< "  "<<acc3.SetSurName()<<"  "<<acc3.SetAge()<<"  Years old"<< "  ID: "<<Id3 <<endl;
                    cout<<"4 :"<<acc4.SetName()<< "  "<<acc4.SetSurName()<<"  "<<acc4.SetAge()<<"  Years old"<< "  ID: "<< Id4<<endl;
                    cout<<"5 :"<<acc5.SetName()<< "  "<<acc5.SetSurName()<<"  "<<acc5.SetAge()<<"  Years old"<< "  ID: "<< Id5<<endl;
                    cout <<" To Go Back To Menu press 1,to exit-3"<<endl;
                    cin >>switch4;
                    switch(switch4){
                        case 1:
                            cout<<"Press 1 if you want to login account, press 2 if you want to login as admin,press 4 to quit"<<endl;
                            goto tryAgain2;
                            break;
                        case 3:
                            exit;
                            break;
                            
                                    }
                    break;
                    
                case 2:
                    cout<<"choose account's number from 1 to 5"<<endl;
                    cin >>switch6;
                    switch(switch6){
                        case 1:
                            cout<<acc1.GetName()<<endl;
                            cout<<acc1.GetSurName()<<endl;
                            cout<<acc1.GetAge()<<endl;
                            tryAgain3:
                            cout<<"press 2 to go to main menu,3 to exit"<<endl;
                            cin >>us2swit;
                            switch(us2swit){
                                case 2:
                                    goto tryAgain;
                                default:
                                    break;
                            }
                        case 2:
                    cout<<acc2.GetName()<<endl;
                    cout<<acc2.GetSurName()<<endl;
                    cout<<acc2.GetAge()<<endl;
                                    goto tryAgain3;
                        case 3:
                            Helper:
                            cout<<acc3.GetName()<<endl;
                            cout<<acc3.GetSurName()<<endl;
                            cout<<acc3.GetAge()<<endl;
                                            goto tryAgain3;
                        case 4:
                        Helper4:
                        cout<<acc4.GetName()<<endl;
                        cout<<acc4.GetSurName()<<endl;
                        cout<<acc4.GetAge()<<endl;
                                        goto tryAgain3;
                        case 5:
                            Helper5:
                            cout<<acc5.GetName()<<endl;
                            cout<<acc5.GetSurName()<<endl;
                            cout<<acc5.GetAge()<<endl;
                            goto tryAgain3;
            
                    }
                    break;
                case 3:
                    cout<<"Press 1 if you want to login account, press 2 if you want to login as admin,press 4 to quit"<<endl;
                    goto tryAgain2;
                    
                default:
                    exit;
            }
                    break;
                }
                case 2:{
                    cout<<acc2.GetName()<<endl;
                    cout<<acc2.GetSurName()<<endl;
                    cout<<acc2.GetAge()<<endl;
                    
                            goto tryAgain;
                        
                    }
                case 3:
                    goto Helper;
                    break;
                case 4:
                goto Helper4;
                    break;
                case 5:
                goto Helper5;
                    break;
                default:
                    break;
                 
                }
            break;
        case 2:
            //Admin
            cout<<"You're adding an admin "<<endl;
            cout <<access.GetAdminName()<<endl;
            cout <<access.GetAdminSurName()<<endl;
            cout <<access.GetAdminAge()<<endl;
            hyWay:
            cout<<"Press 1 if you want to check info data,press 2 to go to main menu,press 3 to exit"<<endl;
            cin>>AdminSwitch1;
            switch(AdminSwitch1){
                case 1:
                    cout<<"1 : "<<acc1.SetName()<< "   "<<acc1.SetSurName()<<"  "<<acc1.SetAge()<<"  Years old"<< "  ID: "<< Id1<<endl;
                    cout<<"2 : "<< acc2.SetName()<< "   "<<acc2.SetSurName()<<"  "<<acc2.SetAge()<<"  Years old"<<"  ID: "<< Id2<<endl;
                    cout<<"3 : "<<acc3.SetName()<< "  "<<acc3.SetSurName()<<"  "<<acc3.SetAge()<<"  Years old"<< "  ID: "<<Id3 <<endl;
                    cout<<"4 : "<<acc4.SetName()<< "   "<<acc4.SetSurName()<<"  "<<acc4.SetAge()<<"  Years old"<< "  ID: "<< Id4<<endl;
                    cout<<"5 :"<<acc5.SetName()<< "  "<<acc5.SetSurName()<<"  "<<acc5.SetAge()<<"  Years old"<< "  ID: "<< Id5<<endl;
                    cout <<"Admin  :"<<access.SetAdminName()<< "  "<<access.SetAdminSurName()<<"  "<<access.SetAdminAge()<<"  Years Old"<<"  ID: "<< AdminId1<<endl;
                    cout<<" Press 1 to delete user, 2 edit user,3 to go to main menu"<<endl;
                    cin >>AdminSwitch2;
                    switch(AdminSwitch2){
                        case 1:
                            cout<<"Press number from 1 to 5"<<endl;
                            cin>>switch7;
                            switch(switch7){
                                case 1:
                                    cout<<acc1.DeleteName()<<endl;
                                    cout<<acc1.DeleteSurName()<<endl;
                                    cout<<acc1.DeleteAge()<<endl;
                                    HiWay:
                                    cout<<"Press 1 to go back to menu,3 to exit"<<endl;
                                    cin>>switch8;
                                    switch(switch8){
                                        case 1:
                                            goto hyWay;
                                        default:
                                            break;
                                    }
                                    break;
                                case 2:
                                    cout<<acc2.DeleteName()<<endl;
                                    cout<<acc2.DeleteSurName()<<endl;
                                    cout<<acc2.DeleteAge()<<endl;
                                    goto HiWay;
                                    break;
                                case 3:
                                    cout<<acc3.DeleteName()<<endl;
                                    cout<<acc3.DeleteSurName()<<endl;
                                    cout<<acc3.DeleteAge()<<endl;
                                    goto HiWay;
                                    break;
                                case 4:
                                    cout<<acc4.DeleteName()<<endl;
                                    cout<<acc4.DeleteSurName()<<endl;
                                    cout<<acc4.DeleteAge()<<endl;
                                    goto HiWay;
                                    break;
                                case 5:
                                    cout<<acc5.DeleteName()<<endl;
                                    cout<<acc5.DeleteSurName()<<endl;
                                    cout<<acc5.DeleteAge()<<endl;
                                    goto HiWay;
                                    break;
                                default:
                                    break;
                            }
                        case 2:
                            cout<<"Press number from 1 to 5"<<endl;
                            cin>>AdminSw3;
                            switch(AdminSw3){
                                case 1:
                                    cout<<acc1.GetName()<<endl;
                                    cout<<acc1.GetSurName()<<endl;
                                    cout<<acc1.GetAge()<<endl;
                                    goto HiWay;
                                    break;
                                case 2:
                                    cout<<acc2.GetName()<<endl;
                                    cout<<acc2.GetSurName()<<endl;
                                    cout<<acc2.GetAge()<<endl;
                                    goto HiWay;
                                    break;
                                case 3:
                                    cout<<acc3.GetName()<<endl;
                                    cout<<acc3.GetSurName()<<endl;
                                    cout<<acc3.GetAge()<<endl;
                                    goto HiWay;
                                    break;
                                case 4:
                                    cout<<acc4.GetName()<<endl;
                                    cout<<acc4.GetSurName()<<endl;
                                    cout<<acc4.GetAge()<<endl;
                                    goto HiWay;
                                    break;
                                case 5:
                                    cout<<acc5.GetName()<<endl;
                                    cout<<acc5.GetSurName()<<endl;
                                    cout<<acc5.GetAge()<<endl;
                                    goto HiWay;
                                    break;
                                default:
                                    break;
                            }
                            
                        case 3:
                            cout<<"Press 1 if you want to login account, press 2 if you want to login as admin,press 4 to quit"<<endl;
                            goto tryAgain2;
                        default:
                            break;
                    }
                    break;
                case 2:
                    cout<<"Press 1 if you want to login account, press 2 if you want to login as admin,press 4 to quit"<<endl;
                    goto tryAgain2;
               default:
                    
                    break;
                    
                            }
                    
                
                
        default:
            break;
            }
            
        
            
    }

void Switch3(){
    Switch2();
    cout<<"Thanks for using))"<<endl;
    cout<<"Have a nice day"<<endl;
   
    
}
int main(int argc, const char * argv[]) {
    Switch3();
    return 0;
}
//restarted
