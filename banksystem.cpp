#include<iostream>
#include<string>
using namespace std;

class Account{
    private:
    //properties/members
     double amount;
     string password; 
    public:
     string name; 
     string accountno; 
     //methods/member functions
     void initialization (void);
    void create_account(void);
    void deposit(void);
    void withdraw(void);
    void balence(void);
    void details(void);
    int login();
}user;

void Account :: create_account(){
    cout<<"Enter your name :";
    cin>>user.name; 
    cout<<"Enter your Account number (10 digit) :";
    cin>>user.accountno;
    cout<<"Creat a strong password :";
    cin>>user.password;
    cout<<"Thankyou soo much dear "<<user.name<<" for creating account"<<endl;
}
void Account :: deposit(){
    double amount;
    cout<<"enter the ammount you want to deposit :"<<endl;
    cin>>amount;
    user.amount+=amount;
    cout<<"your ammount is deposited successfully "<<endl;
}
void Account :: withdraw(){
    double amount;
    cout<<"enter the amount you want to withdraw : ";
    cin>>amount;
    if(amount>user.amount){
        cout<<"insufficient balence"<<endl;
        cout<<"Dhudd yaar nim appa kodtaana 😅"<<endl;
    }
    else{
        user.amount-=amount;
        cout<<"your amount "<<amount<<" is withdraw successfully";
    }
}
void Account :: balence(){
    cout<<"dear "<<user.name<<" your current balence is : "<<user.amount<<endl;
}
void Account ::details(){
    cout<<"Name :"<<user.name<<endl<<"Account number :"<<user.accountno<<endl;
}
int Account ::login(){
    string accno;
    string pass;
    int attempt=0;
    while(attempt<5){
    cout<<"enter your account number :";
    cin>>accno; 
    cout<<"enter your password";
    cin>>pass; 
    if((accno==user.accountno)&&(pass==user.password)){
        return 1;
        
    }
    else{
        cout<<"account number or password is incorrect please try again"<<endl;
    }attempt++;
}
cout<<"you are out of attempts please try again later"<<endl;
return 0;

}
void Account :: initialization(void){
  user.amount=0;
}
int main(){
    int a,attempt=0; 
    cout<<"~~~~~~~welcome to Abhikriti Bank~~~~~~~"<<endl;
    user.initialization();
    while(attempt<12){
    cout<<endl<<endl<<endl<<"1.Create Account"<<endl<<"2.Deposite Money"<<endl<<"3.Withdraw Money"<<endl<<"4.Check Balance"<<endl<<"5.Account Details"<<endl<<"6.Exit"<<endl;
    cout<<"enter the number from the menu : ";
    cin>>a;
  
        switch(a){
            case(1):
           user.create_account();
            break;
            case(2):
            if(user.login()){
            user.deposit();}
            else{
            	goto end;}
            break;
            case(3):
            if(user.login()){
            user.withdraw();}
            else{
            	goto end;}
            break;
            case(4):
            if(user.login()){
            user.balence();}
            else{
            	goto end;}
            break;
            case(5):
            if(user.login()){
            user.details();}
            else{
            	goto end;}
            break;
            case(6):
            
            goto end;
            break;
            default:
            cout<<"invalid option"<<endl<<"please enter a valid option number";

        }
        attempt++;
    }
    end:
    cout<<"thanks for visiting our bank ,have a nice day";
    }