#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<"Hello User"<<endl<<endl;
    string name = "", pass = "";
    int age = -1;
    double balance = 0;
    while(true){
        cout<<"1- Create new account"<<endl;
        cout<<"2- Ask about account balance"<<endl;
        cout<<"3- Deposit"<<endl;
        cout<<"4- Withdrawal"<<endl;
        cout<<"5- Sign out"<<endl;
        cout<<"Enter (1,2,3,4,5)"<<endl;
        string choice;
        cin>>choice;
        if(choice.size() > 1 || choice[0] < '0' || choice[0] > '5'){
            cout<<endl<<"INVALID INPUT!!"<<endl<<endl;
            continue;
        }

        if(choice == "1"){
            cout<<"Name: ";
            cin>>name;
            cout<<"Password: ";
            cin>>pass;
            cout<<"Initial Deposit: ";
            cin>>balance;
            while(balance < 100){
                cout<<"Initial deposit must not be less than $100"<<endl;
                cout<<"Initial Deposit: ";
                cin>>balance;
            }
            cout<<"Age: ";
            cin>>age;
        }
        else if(choice == "2"){
            if(age == -1){
                cout<<"No Account yet!"<<endl;
                continue;
            }
            else{
                cout<<endl<<"Balance: "<<balance<<endl;
            }
        }
        else if(choice == "3"){
            if(age == -1){
                cout<<"No Account yet!"<<endl;
                continue;
            }
            else{
                double deposit;
                cout<<"Enter the amount to be deposited: ";
                cin>>deposit;
                balance += deposit;
                cout<<"Operation Complete!!"<<endl;
            }
        }
        else if(choice == "4"){
            if(age == -1){
                cout<<"No Account yet!"<<endl;
                continue;
            }
            else{
                double withdraw;
                cout<<"Enter amount to be withdrawn: ";
                cin>>withdraw;
                while (withdraw > balance){
                    cout<<"INVALID INPUT!! Balance is less than this amount."<<endl;
                    cout<<"Enter amount to be withdrawn: ";
                    cin>>withdraw;
                }
                balance -= withdraw;
                cout<<"Operation Complete!!"<<endl;
            }
        }
        else{
            cout<<"Have a nice day!!"<<endl;
            this_thread::sleep_for(chrono::seconds(1));
            break;
        }
    }
    return 0;
}
