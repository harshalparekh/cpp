//
//  main.cpp
//  ShoppingV1.1
//
//  Created by Parth Vibhandik on 07/01/22.
//
//

//FEATURES :- of the algorithm\
algorithm works pretty efficiently\
data is divided into groups to minimise complications\
tries to maintain minimum amount of storage\
very easy to add new products to the application\
products can be specified if they are in stock\


//FEATURES :- of the front-end\
checks each and every information inputted from the user for proper input\
is fully equipped for handeling exceptions\
guides the user throughout the execution\
has a proper functionality of :-\
    account system\
    buying system\
    searching products system\
    cart system\
    wallet system including voucher redemption\
    offers system, where more than one offer cant be applied\
has a funzone where the user gets to earn points by playing games\




#include <iostream>
#include <regex>        //regular Expression
#include <cmath>        //round

using namespace std;

class app{
    
private:
    
    int money, points;
        
    struct freshProduct{
        int carrot, potato, onion;
        int Ppotato, Pcarrot, Ponion;
        int Tpotato, Tcarrot, Tonion;
    }fresh;
    
    struct electronicsProduct{
        int laptop, phone, computer;
        int Plaptop, Pphone, Pcomputer;
        int Tlaptop, Tphone, Tcomputer;
    }elec;
    
    struct offers{
        int offer1, offer2;
        int offer1Eligible, offer2Eligible;
    }offer;

    struct userData{
        string email, password, fname, lname;
        int pincode;
        long pno;
    }user;

    float total;
    bool voucherValid;

public:
    
    app(){
        money=0;
        points=0;
        
        //Assigning intial struct freshProduct values
        fresh.carrot=0;
        fresh.Pcarrot=20;
        fresh.Tcarrot=0;
        
        fresh.potato=0;
        fresh.Ppotato=20;
        fresh.Tpotato=0;
        
        fresh.onion=0;
        fresh.Ponion=30;
        fresh.Tonion=0;
        
        
        //Assigning initial struct electronicProduct values
        elec.laptop=0;
        elec.Plaptop=30000;
        elec.Tlaptop=0;
        
        elec.phone=0;
        elec.Pphone=10000;
        elec.Tphone=0;
        
        elec.computer=0;
        elec.Pcomputer=15000;
        elec.Tcomputer=0;
        elec.Tphone=0;
        
        
        //Assigning intial values to tictactoe variables
        r1c1='1';
        r1c2='2';
        r1c3='3';
        r2c1='4';
        r2c2='5';
        r2c3='6';
        r3c1='7';
        r3c2='8';
        r3c3='9';
        
        xOr0='0';
        i=1;
        gameOn=true;
        
        
        //Assigning intital values to struct offer
        offer.offer1=0;
        offer.offer1Eligible=0;
        
        offer.offer2=0;
        offer.offer2Eligible=0;
        
        
        //Assigning initial values to struct userData
        user.email="";
        user.password="";
        user.fname="";
        user.lname="";
        user.pincode=0;
        user.pno=0;
        
        //Miscellaneous Variables
        voucherValid=true;
    }
    
    void LogIn_SignUp();
       
private:
    
    void resetFunzoneValues(){
        r1c1='1';
        r1c2='2';
        r1c3='3';
        r2c1='4';
        r2c2='5';
        r2c3='6';
        r3c1='7';
        r3c2='8';
        r3c3='9';
        
        xOr0='0';
        i=1;
    }
    
    //Function Prototypes
    //functions outside class
    void mainDisplayFunzone();
        
    void offer1_specialOffers();

    void offer2_specialOffers();

    void mainDisplaySpecialOffers();
    
    void updateUserInformation();
    
    bool pinFormat(int no);
    
    bool passCheck();
        
    void compareOld_newPass(string str);
    
    void confirmUser_details();

    void authenticateUserInput();
    
    bool emailCheck();
    
    void mainDisplayFresh();
        
    void mainDisplayElectronics();
    
    void payWallet_giftCard();
    
    void addMoney();

    void redeemCheckCouponCode_pin();

    void buyFromSearch(int &p);

    void searchProduct();
        
    void displayOrders_cart();

    void EditQuantities_addItems_cart();

    void EditQuantities_subItems_cart();
    
    void EditQuantities_add_sub_cart();

    void checkElectronics();

    void checkFresh();
    
    void payAfter_trackMenu();

    void eligible_nonEligibleOrder();
    
    void earnPoints_funzone();
        
    void redeemPoints_funzone();
    
    void taxes_calculator();

    void buyConfirm_back();
            
    void coupon_giftCard();
    
    void ticTacToe_checkWin();
       
    void ticTacToe_bot();
       
    void ticTacToe_inputFunc();
   
    void ticTacToe_xor0();
    
    void mainDisplayCategory();
        
    void cart();
        
    void mainDisplayWallet();
    
    
    
    char r1c1, r1c2, r1c3, r2c1, r2c2, r2c3, r3c1, r3c2, r3c3;
    char xOr0;
    int i;
    bool gameOn;
    
    
    
    //Inline Member Functions
    void ticTacToe_mainDisplay(){
        i++;
        
        cout<<"\t\t"<<r1c1<<"\t\t|\t\t"<<r1c2<<"\t\t|\t\t"<<r1c3<<endl;
        cout<<"---------------------------------------------------"<<endl;
        cout<<"\t\t"<<r2c1<<"\t\t|\t\t"<<r2c2<<"\t\t|\t\t"<<r2c3<<endl;
        cout<<"---------------------------------------------------"<<endl;
        cout<<"\t\t"<<r3c1<<"\t\t|\t\t"<<r3c2<<"\t\t|\t\t"<<r3c3<<endl;
    }
       
    void ticTacToe_caller(){
        gameOn=true;
        
        ticTacToe_mainDisplay();
        ticTacToe_xor0();
    }
        
    void trackPackage_postOrder_pay(){
        //************************
        cout<<"TRACK"<<endl;
        //************************
    }
        
    void resetAllTempValues_neededToBe(){
        
        //Order Placed, resetting product variables
        offer.offer1Eligible=0;
        offer.offer2Eligible=0;
        offer.offer1=0;
        offer.offer2=0;
        
        fresh.carrot=0;
        fresh.onion=0;
        fresh.potato=0;
        
        fresh.Tonion=0;
        fresh.Tpotato=0;
        fresh.Tcarrot=0;
        
        elec.computer=0;
        elec.laptop=0;
        elec.phone=0;
        
        elec.Tphone=0;
        elec.Tlaptop=0;
        elec.Tcomputer=0;
        
        money-=total;
        total=0;
        
        //cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        payAfter_trackMenu();
    }

    
    int counterCartAdd(int p){
        return ++p;
    }
    
    
    int counterCartSub(int p){
        return --p;
    }
        
    
    void login(){
        cin.ignore();
        
        authenticateUserInput();
        
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        
        mainDisplayCategory();
    }
        
    
    void signup(){
        cin.ignore();
        
        getUserData();
        
        cout<<"Account Created Successfully"<<endl;
        cout<<"Redirecting To Login Page"<<endl;
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        
        login();
    }
        
    
    void displayUserInfo(){
        cout<<endl<<endl<<"------------------------------"<<endl<<endl;
        cout<<endl<<"Name: "<<user.fname<<" "<<user.lname<<endl;
        cout<<"Contact: +91 "<<user.pno<<endl;
        cout<<"Adress: "<<user.pincode<<endl;
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        confirmUser_details();
    }
    
        
    void emailFormat(){
        
        //Converting Email in lowercase
        for (int i=0; i<user.email.length(); i++)
            user.email[i] = tolower(user.email[i]);
    }
    
        
    void getEmail(){
        cout<<"Enter Email address: ";
        getline(cin, user.email);
        
        emailFormat();
        
        if(!emailCheck())
            getEmail();
    }
    
        
    void getPass(){
        cout<<"Enter Password: ";
        getline(cin, user.password);
        
        if(!passCheck())
            getPass();
    }
    
    
    void checkFname(){
        
        //Compares the inputted First Name to, user defined regular expression
        //Gonna use OSTRISCH ALGORITHM for (~"':;()[]{}) ;)
        
        const regex pattern("^(?=.*[-+_!@#$%^&*.,?]).+$");
        const regex pattern2("^(?=.*\\d).+$");
        
        if(regex_match(user.fname, pattern)||regex_match(user.fname, pattern2)){
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            cout<<"Invalid Name"<<endl;
            getFname();
        }
    }
    
    
    void getFname(){
        cout<<"Enter Your First Name: ";
        getline(cin, user.fname);
        
        checkFname();
        nameFormat(user.fname);
    }
    
    
    void checkLname(){
        
        //Compares the inputted Last Name to, user defined regular expression
        //Gonna use OSTRISCH ALGORITHM for (~"':;()[]{}) ;)
        
        const regex pattern("^(?=.*[-+_!@#$%^&*.,?]).+$");
        const regex pattern2("^(?=.*\\d).+$");
        
        if(regex_match(user.lname, pattern)||regex_match(user.lname, pattern2)){
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            cout<<"Invalid Name"<<endl;
            getLname();
        }
    }

    
    void getLname(){
        cout<<"Enter Your Last Name: ";
        getline(cin, user.lname);
       
        checkLname();
        nameFormat(user.lname);
    }
        
    
    void nameFormat(string &str){
        for (int i=0; i<str.length(); i++)
            str[i] = tolower(str[i]);
        
        //Converting First letter of Name to Uppercase
        str[0]=toupper(str[0]);
    }
    
    
    void getPno(){
        cout<<"Enter Phone Number: +91 ";
        cin>>user.pno;
        
        if(pnoFormat(user.pno))
            {/* */}
        
        else
            getPno();
    }
    
        
    bool pnoFormat(long no){
        if(no>9999999999||no<1000000000){
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            cout<<"Enter A Proper Phone Number"<<endl;
            return false;
        }
        
        else
            return true;
    }
    
        
    void getPinCode(){
        cout<<"Enter Pin Code: ";
        cin>>user.pincode;
        
        if(pinFormat(user.pincode))
            {/* */}
        
        else
            getPinCode();
    }
        
    
    void getUserData(){
        getFname();
        getLname();
        getPno();
        getPinCode();
        
        cin.ignore();
        
        getEmail();
        getPass();
        displayUserInfo();
    }
};


void app :: updateUserInformation(){
    int ch;
    
    cout<<endl<<"Account Information"<<endl;
    cout<<endl<<"------------------------------"<<endl<<endl;
    cout<<"Name: "<<user.fname<<" "<<user.lname<<endl;
    cout<<"Enter 1 to Update"<<endl;
    cout<<endl<<"------------------------------"<<endl<<endl;
    cout<<"Phone Number: +91 "<<user.pno<<endl;
    cout<<"Enter 2 to Update"<<endl;
    cout<<endl<<"------------------------------"<<endl<<endl;
    cout<<"Address: "<<user.pincode<<endl;
    cout<<"Enter 3 to Update"<<endl;
    cout<<endl<<"------------------------------"<<endl<<endl;
    cout<<"Email Address: "<<user.email<<endl;
    cout<<"Enter 4 to Update"<<endl;
    cout<<endl<<"------------------------------"<<endl<<endl;
    cout<<"Password: ";
    
    for(int i=0; i<user.password.length(); i++)
        cout<<"*";
    
    cout<<endl;
    
    cout<<"Enter 5 to Update"<<endl;
    cout<<endl<<"------------------------------"<<endl<<endl;
    cout<<"Press 0 to go BACK"<<endl;
    cin>>ch;
    
    
    switch(ch){
        case 1:{
            cin.ignore();
            
            getFname();
            getLname();
            
            cout<<"Name Updated Successfully"<<endl;
            
            updateUserInformation();
            
            break;
        }
            
        case 2:{
            getPno();
            
            cout<<"Phone Number Updated Successfully"<<endl;
            
            updateUserInformation();
            
            break;
        }
            
        case 3:{
            getPinCode();
            
            cout<<"Adress Updated Successfully"<<endl;
            
            updateUserInformation();
            
            break;
        }
            
        case 4:{
            cin.ignore();
            
            getEmail();
            
            cout<<"Email Updated Successfully"<<endl;
            
            updateUserInformation();
            
            break;
        }
            
        case 5:{
            cin.ignore();
            
            string Tpass=user.password;
            
            getPass();
            compareOld_newPass(Tpass);
            
            cout<<"Password Updated Successfully"<<endl;
            
            updateUserInformation();
            
            break;
        }
            
        case 0:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            mainDisplayCategory();
            
            break;
        }
            
        default:{
            cout<<"------------------------------"<<endl;
            cout<<"Enter Proper Data"<<endl;
            cout<<"------------------------------"<<endl;
        
            updateUserInformation();
        }
    }
}


void app :: authenticateUserInput(){
    int cmpE=1, cmpP=1;
    string Aemail, Apassword;
    
    cout<<"Enter Email Adress: "<<endl;
    getline(cin, Aemail);
    
    //Converting User Input in lower case for comparison
    for (int i=0; i<user.email.length(); i++)
        Aemail[i] = tolower(Aemail[i]);
    
    cout<<"Enter Password: "<<endl;
    getline(cin, Apassword);
    
    
    if(Aemail.length()!=user.email.length()||Apassword.length()!=user.password.length()){
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        cout<<"Wrong Ceredentials"<<endl;
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        
        authenticateUserInput();
    }
    
    else{
        //Comparison For Email
        for(int i=0; i<Aemail.length(); i++){
            if(Aemail[i]!=user.email[i]){
                cmpE=0;
                break;
            }
        }
        
        //Comparison For Password
        for(int i=0; i<Apassword.length(); i++){
            if(Apassword[i]!=user.password[i]){
                cmpP=0;
                break;
            }
        }
        
        if(cmpE==0||cmpP==0){
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            cout<<"Login Unsuccessful"<<endl;
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            authenticateUserInput();
        }
        
        else{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            cout<<"Login Successful"<<endl;
        }
    }
}


void app :: confirmUser_details(){
    int details;
    
    cout<<"Enter 1 To Confirm"<<endl;
    cout<<"Enter 0 To Type Again"<<endl;
    cin>>details;
    cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
    
    
    switch(details){
        case 1:
            break;
            
        case 0:{
            cin.ignore();
            
            getUserData();
            
            break;
        }
            
        default:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            cout<<"Enter Proper Data"<<endl;
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            confirmUser_details();
        }
    }
}


void app :: LogIn_SignUp(){
    int logOrSign;
    
    cout<<"Enter 1 to Log In"<<endl;
    cout<<"Enter 0 to Sign Up"<<endl;
    cin>>logOrSign;
    
    
    switch(logOrSign){
        case 1:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            login();
            
            break;
        }
            
        case 0:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            signup();
            
            break;
        }
            
        default:{
            cout<<"------------------------------"<<endl;
            cout<<"Enter Proper Data"<<endl;
            cout<<"------------------------------"<<endl;
            
            LogIn_SignUp();
        }
    }
}


void app :: mainDisplayElectronics(){
    int ch;
    
    cout<<"1). Phone\t\t₹"<<elec.Pphone<<endl;
    cout<<"2). Laptop\t\t₹"<<elec.Plaptop<<endl;
    cout<<"3). Computer\t₹"<<elec.Pcomputer<<endl;
    cout<<"0). BACK"<<endl;
    cin>>ch;
    
    
    switch(ch){
        case 1:{
            elec.phone=counterCartAdd(elec.phone);
            
            cout<<"------------------------------"<<endl;
            
            mainDisplayElectronics();
            
            break;
        }
            
        case 2:{
            elec.laptop=counterCartAdd(elec.laptop);
            
            cout<<"------------------------------"<<endl;
            
            mainDisplayElectronics();
            
            break;
        }
            
        case 3:{
            elec.computer=counterCartAdd(elec.computer);
            
            cout<<"------------------------------"<<endl;
            
            mainDisplayElectronics();
            
            break;
        }
            
        case 0:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            mainDisplayCategory();
            
            break;
        }
            
        default:{
            cout<<"------------------------------"<<endl;
            cout<<"Enter Proper Data"<<endl;
            cout<<"------------------------------"<<endl;
            
            mainDisplayElectronics();
        }
    }
}


void app :: mainDisplayFresh(){
    int ch;
    
    cout<<"1). Potatoes\t₹"<<fresh.Ppotato<<endl;
    cout<<"2). Onions\t\t₹"<<fresh.Ponion<<endl;
    cout<<"3). Carrot\t\t₹"<<fresh.Pcarrot<<endl;
    cout<<"0). BACK"<<endl;
    cin>>ch;
    
    
    switch(ch){
        case 1:{
            fresh.potato=counterCartAdd(fresh.potato);
            
            cout<<"------------------------------"<<endl;
            
            mainDisplayFresh();
            
            break;
        }
            
        case 2:{
            fresh.onion=counterCartAdd(fresh.onion);
            
            cout<<"------------------------------"<<endl;
            
            mainDisplayFresh();
            
            break;
        }
            
        case 3:{
            fresh.carrot=counterCartAdd(fresh.carrot);
            
            cout<<"------------------------------"<<endl;
            
            mainDisplayFresh();
            
            break;
        }
            
        case 0:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            mainDisplayCategory();
            
            break;
        }
            
        default:{
            cout<<"------------------------------"<<endl;
            cout<<"Enter Proper Data"<<endl;
            cout<<"------------------------------"<<endl;
            
            mainDisplayFresh();
        }
    }
}


void app :: checkFresh(){
    if(fresh.potato!=0){
        cout<<"Potato\t\t\t104\t\t\t"<<fresh.potato<<"\t";
        
        fresh.Tpotato=fresh.potato*fresh.Ppotato;
        
        cout<<"\t₹"<<fresh.Tpotato<<endl;
    }
    
    if(fresh.carrot!=0){
        cout<<"Carrot\t\t\t105\t\t\t"<<fresh.carrot<<"\t";
        
        fresh.Tcarrot=fresh.carrot*fresh.Pcarrot;
        
        cout<<"\t₹"<<fresh.Tcarrot<<endl;
    }
    
    if(fresh.onion!=0){
        cout<<"Onion\t\t\t106\t\t\t"<<fresh.onion<<"\t";
        
        fresh.Tonion=fresh.onion*fresh.Ponion;
        
        cout<<"\t₹"<<fresh.Tonion<<endl;
    }
}


void app :: checkElectronics(){
    if(elec.phone!=0){
        cout<<"Phone\t\t\t101\t\t\t"<<elec.phone<<"\t";
        
        elec.Tphone=elec.phone*elec.Pphone;
        
        cout<<"\t₹"<<elec.Tphone<<endl;
    }
    
    if(elec.laptop!=0){
        cout<<"Laptop\t\t\t102\t\t\t"<<elec.laptop<<"\t";
        
        elec.Tlaptop=elec.laptop*elec.Plaptop;
        
        cout<<"\t₹"<<elec.Tlaptop<<endl;
    }
    
    if(elec.computer!=0){
        cout<<"Computer\t\t103\t\t\t"<<elec.computer<<"\t";
        
        elec.Tcomputer=elec.computer*elec.Pcomputer;
        
        cout<<"\t₹"<<elec.Tcomputer<<endl;
    }
}


void app :: EditQuantities_add_sub_cart(){
    int ch;
    
    cout<<"Enter 1 to Add Items"<<endl;
    cout<<"Enter 2 to Remove Items"<<endl;
    cout<<"Enter 0 to go BACK"<<endl;
    cin>>ch;
    

    switch(ch){
        case 1:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            EditQuantities_addItems_cart();
            
            break;
        }
            
        case 2:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            EditQuantities_subItems_cart();
            
            break;
        }
            
        case 0:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            cart();
            
            break;
        }
            
        default:{
            cout<<"------------------------------"<<endl;
            cout<<"Enter Proper Data"<<endl;
            cout<<"------------------------------"<<endl;
            
            EditQuantities_add_sub_cart();
        }
    }
}


void app :: EditQuantities_subItems_cart(){
    int ch;
    
    displayOrders_cart();
    
    cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
    
    cout<<"Enter Item Code Of the The Product to be Decreased"<<endl;
    cout<<"Enter 0 to go BACK"<<endl;
    cin>>ch;
    

    switch(ch){
        case 101:{
            if(elec.phone!=0){
                elec.phone=counterCartSub(elec.phone);
                elec.Tphone-=elec.Pphone;
            }
              
            else{
                cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                cout<<"Enter Proper Data"<<endl;
            }
            
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            EditQuantities_subItems_cart();
            
            break;
        }
            
        case 102:{
            if(elec.laptop!=0){
                elec.laptop=counterCartSub(elec.laptop);
                elec.Tlaptop-=elec.Plaptop;
            }
            
            else{
                cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                cout<<"Enter Proper Data"<<endl;
            }
            
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            EditQuantities_subItems_cart();
            
            break;
        }
            
        case 103:{
            if(elec.computer!=0){
                elec.computer=counterCartSub(elec.computer);
                elec.Tcomputer-=elec.Pcomputer;
            }
            
            else{
                cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                cout<<"Enter Proper Data"<<endl;
            }
            
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            EditQuantities_subItems_cart();
            
            break;
        }
            
        case 104:{
            if(fresh.potato!=0){
                fresh.potato=counterCartSub(fresh.potato);
                fresh.Tpotato-=fresh.Ppotato;
            }
            
            else{
                cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                cout<<"Enter Proper Data"<<endl;
            }
            
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            EditQuantities_subItems_cart();
            
            break;
        }
            
        case 105:{
            if(fresh.carrot!=0){
                fresh.carrot=counterCartSub(fresh.carrot);
                fresh.Tcarrot-=fresh.Pcarrot;
            }
            
            else{
                cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                cout<<"Enter Proper Data"<<endl;
            }
            
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            EditQuantities_subItems_cart();
            
            break;
        }
            
        case 106:{
            if(fresh.onion!=0){
                fresh.onion=counterCartSub(fresh.onion);
                fresh.Tonion-=fresh.Ponion;
            }
            
            else{
                cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                cout<<"Enter Proper Data"<<endl;
            }
            
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            EditQuantities_subItems_cart();
            
            break;
        }
            
        case 0:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            EditQuantities_add_sub_cart();
            
            break;
        }
            
        default:{
            cout<<"------------------------------"<<endl;
            cout<<"Enter Proper Data"<<endl;
            cout<<"------------------------------"<<endl;
            
            EditQuantities_subItems_cart();
        }
    }
}


void app :: EditQuantities_addItems_cart(){
    int ch;
    
    displayOrders_cart();
    
    cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
    
    cout<<"Enter Item Code Of the The Product to be Increased"<<endl;
    cout<<"Enter 0 to go BACK"<<endl;
    cin>>ch;
    

    switch(ch){
        case 101:{
            if(elec.phone!=0)
                elec.phone=counterCartAdd(elec.phone);
            
            else{
                cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                cout<<"Enter Proper Data"<<endl;
            }
                
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            EditQuantities_addItems_cart();
            
            break;
        }
            
        case 102:{
            if(elec.laptop!=0)
                elec.laptop=counterCartAdd(elec.laptop);
            
            else{
                cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                cout<<"Enter Proper Data"<<endl;
            }
                
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            EditQuantities_addItems_cart();
            
            break;
        }
            
        case 103:{
            if(elec.computer!=0)
                elec.computer=counterCartAdd(elec.computer);
            
            else{
                cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                cout<<"Enter Proper Data"<<endl;
            }
                
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            EditQuantities_addItems_cart();
            
            break;
        }
            
        case 104:{
            if(fresh.potato!=0)
                fresh.potato=counterCartAdd(fresh.potato);
            
            else{
                cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                cout<<"Enter Proper Data"<<endl;
            }
                
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            EditQuantities_addItems_cart();
            
            break;
        }
            
        case 105:{
            if(fresh.carrot!=0)
                fresh.carrot=counterCartAdd(fresh.carrot);
            
            else{
                cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                cout<<"Enter Proper Data"<<endl;
            }
                
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            EditQuantities_addItems_cart();
            
            break;
        }
            
        case 106:{
            if(fresh.onion!=0)
                fresh.onion=counterCartAdd(fresh.onion);
            
            else{
                cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                cout<<"Enter Proper Data"<<endl;
            }
                
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            EditQuantities_addItems_cart();
            
            break;
        }
            
        case 0:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            EditQuantities_add_sub_cart();
            
            break;
        }
            
        default:{
            cout<<"------------------------------"<<endl;
            cout<<"Enter Proper Data"<<endl;
            cout<<"------------------------------"<<endl;
            
            EditQuantities_addItems_cart();
        }
    }
}


void app :: displayOrders_cart(){
    
    cout<<"Product\t\tItemCode\tQuantity\tPrice"<<endl;
    
    checkFresh();
    checkElectronics();
    
    //Calculating the total of ALL products
    total=fresh.Tpotato+fresh.Tonion+fresh.Tcarrot+elec.Tlaptop+elec.Tphone+elec.Tcomputer;
    
    //Checking for offer 1 eligibility
    if((fresh.Tonion+fresh.Tcarrot+fresh.Tpotato)>=500&&offer.offer1==1){
        offer.offer1Eligible=1;
    }
    
    //Checking for offer 2 eligibility
    if((elec.Tcomputer+elec.Tphone+elec.Tlaptop)>=40000&&offer.offer2==1){
        offer.offer2Eligible=1;
    }
    
    cout<<"\t\t\t\t\t\tTotal\t\t₹"<<total<<endl;
}


void app :: searchProduct(){
    string search;
    
    cout<<"SEARCH"<<endl;
    cout<<"0) BACK"<<endl;
    cout<<"Enter Your Search"<<endl;
    getline(cin, search);
    cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
    
    
    //Converting user inputted search to lower case
    for(int i=0; i<search.length(); i++)
        search[i]=tolower(search[i]);
    
    if(search!="0"){
        cout<<"Search Result(s):- "<<endl;
        cout<<"------------------------------"<<endl<<endl<<endl;
    }
    
    if(search=="0")
        mainDisplayCategory();
    
    else if(search=="phone"){
        cout<<"1). Phone"<<endl;
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        
        buyFromSearch(elec.phone);
    }
    
    else if(search=="computer"){
        cout<<"1). Computer"<<endl;
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        
        buyFromSearch(elec.computer);
    }
    
    else if(search=="laptop"){
        cout<<"1). Laptop"<<endl;
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        
        buyFromSearch(elec.laptop);
    }
    
    else if(search=="potato"){
        cout<<"1). Potatoes"<<endl;
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        
        buyFromSearch(fresh.potato);
    }
    
    else if(search=="carrot"){
        cout<<"1). Carrot"<<endl;
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        
        buyFromSearch(fresh.carrot);
    }
    
    else if(search=="onion"){
        cout<<"1). Onions"<<endl;
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        
        buyFromSearch(fresh.onion);
    }
    
    else{
        cout<<"No Result(s)"<<endl;
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        
        searchProduct();
    }
}


void app :: buyFromSearch(int &p){
    int ch;
    
    //cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
    cout<<"Enter"<<endl;
    cout<<"1) Buy"<<endl;
    cout<<"0) BACK"<<endl;
    cin>>ch;
    cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
    
    
    switch(ch){
        case 1:{
            p++;
            
            buyFromSearch(p);
            break;
        }
            
        case 0:{
            cin.ignore();
            
            searchProduct();
            break;
        }
            
        default:{
            cout<<"------------------------------"<<endl;
            cout<<"Enter Proper Data"<<endl;
            cout<<"------------------------------"<<endl;
            
            buyFromSearch(p);
        }
    }
}


void app :: redeemCheckCouponCode_pin(){
    int code, pin;
    
    cout<<"Enter The Coupon Code"<<endl;
    cout<<"0). BACK"<<endl;
    cin>>code;//123456
    
    
    if(code==0){
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        
        mainDisplayWallet();
    }
    
    else{
        if(code==123456){
            if(voucherValid==true){
                cout<<"Enter PIN"<<endl;
                cin>>pin;//123
                
                if(pin==123){
                    money += 1000;
                    voucherValid=false;
                    
                    cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                    cout<<"₹1000 Successfully Credited"<<endl;
                }
                
                else{
                    cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                    cout<<"Invalid PIN"<<endl;
                }
            }
            
            else{
                cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                cout<<"Voucher Exhausted"<<endl;
            }
        }
        
        else{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            cout<<"Invalid Code"<<endl;
        }
        
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        
        redeemCheckCouponCode_pin();
    }
}


void app :: payWallet_giftCard(){
    int ch;
    
    cout<<"1) Pay from wallet"<<endl;
    cout<<"2) Apply gift card"<<endl;
    cout<<"0) BACK"<<endl;
    cin>>ch;
    

    switch(ch){
        case 1:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            eligible_nonEligibleOrder();
            
            break;
        }
            
        case 2:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            coupon_giftCard();
            
            break;
        }
            
        case 0:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            buyConfirm_back();
            
            break;
        }
            
        default:{
            cout<<"------------------------------"<<endl;
            cout<<"Enter Proper Data"<<endl;
            cout<<"------------------------------"<<endl;
            
            payWallet_giftCard();
        }
    }
}


void app :: payAfter_trackMenu(){
    int ch;

    cout<<"Order Placed Successfully"<<endl;
    cout<<"1). Track Package"<<endl;
    cout<<"0). MENU"<<endl;
    cin>>ch;
    
    
    switch(ch){
        case 1:{
            trackPackage_postOrder_pay();
            break;
        }
            
        case 0:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            mainDisplayCategory();
            break;
        }
            
        default:{
            cout<<"------------------------------"<<endl;
            cout<<"Enter Proper Data"<<endl;
            cout<<"------------------------------"<<endl;
            
            payAfter_trackMenu();
        }
    }
}


void app :: coupon_giftCard(){
    int code, pin;
    float disc;
    
    cout<<"Enter Coupon Code"<<endl;
    cin>>code;
    
    
    if(code==123456){
        cout<<"Enter Pin"<<endl;
        cin>>pin;
        
        if(pin==123){
            taxes_calculator();
            
            disc=(25*total)/100;
            
            
            cout<<"\t\t\tGift Card Applied\n\t\t\t\t(25% discount)\t\t₹("<<disc<<")"<<endl;
            
            total-=disc;
            
            cout<<"\t\t\t\t\t\tTotal\t\t₹"<<total<<endl;
            
            total=round(total);
            
            cout<<"\t\t\t\t\tGrand Total\t\t₹"<<total<<endl;
            
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            cout<<"Proceeding To Payment"<<endl;
            
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            payWallet_giftCard();
        }
        
        else{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            cout<<"Invalid Pin"<<endl;
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            payWallet_giftCard();
        }
    }
    
    else if(code==111111){
        
        if(offer.offer1Eligible!=0){
            
            taxes_calculator();
            
            disc=(10*total)/100;
            
            cout<<"\t\t\t\t\t\tTotal\t\t₹"<<total<<endl;
            
            total-=disc;
            
            cout<<"\t\t\t\tCoupon Applied\n\t\t\t\t(10% discount)\t\t₹("<<disc<<")"<<endl;
            
            cout<<"\t\t\t\t\t\tTotal\t\t₹"<<total<<endl;
            
            total=round(total);
            
            cout<<"\t\t\t\t\tGrand Total\t\t₹"<<total<<endl;
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            cout<<"Proceeding To Payment"<<endl;
            
            offer.offer1Eligible=0;
            
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            payWallet_giftCard();
        }
        
        else{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            cout<<"Not Eligible For This Offer"<<endl;
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            payWallet_giftCard();
        }
    }
    
    else if(code==222222){
        
        if(offer.offer2Eligible!=0){
            
            taxes_calculator();
            
            disc=(8*total)/100;
            
            cout<<"\t\t\t\t\t\tTotal\t\t₹"<<total<<endl;
            
            total-=disc;
            
            cout<<"\t\t\t\tCoupon Applied\n\t\t\t\t(8% discount)\t\t₹("<<disc<<")"<<endl;
            
            cout<<"\t\t\t\t\t\tTotal\t\t₹"<<total<<endl;
            
            total=round(total);
            
            cout<<"\t\t\t\t\tGrand Total\t\t₹"<<total<<endl;
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            cout<<"Proceeding To Payment"<<endl;
            
            offer.offer2Eligible=0;
            
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            payWallet_giftCard();
        }
        
        else{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            cout<<"Not Eligible For This Offer"<<endl;
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            payWallet_giftCard();
        }
    }
    
    else{
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        cout<<"Invalid Code"<<endl;
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        
        payWallet_giftCard();
    }
}


void app :: buyConfirm_back(){
    int ch;
    
    taxes_calculator();
    
    cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
    
    cout<<"1) Confirm"<<endl;
    cout<<"0) BACK"<<endl;
    cin>>ch;
    
    
    switch(ch){
        case 1:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            cout<<"Proceeding to Payments"<<endl;
            
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            payWallet_giftCard();
            
            break;
        }
            
        case 0:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            cart();
            
            break;
        }
            
        default:{
            cout<<"------------------------------"<<endl;
            cout<<"Enter Proper Data"<<endl;
            cout<<"------------------------------"<<endl;
            
            buyConfirm_back();
        }
    }
}


void app :: redeemPoints_funzone(){
    int pts2mon=points/10, ch;
    
    cout<<"Balance Points: "<<points<<endl;
    cout<<"1). Add ₹"<<pts2mon<<" To Wallet (100pts=>₹10)"<<endl;
    cout<<"0). BACK"<<endl;
    cin>>ch;
    
    
    switch(ch){
        case 1:{
            money+=pts2mon;
            cout<<endl<<endl<<"------------------------------"<<endl;
            cout<<"₹"<<pts2mon<<" Added to wallet"<<endl;
            points=0;
            
            cout<<"------------------------------"<<endl<<endl<<endl;
            
            mainDisplayFunzone();
            break;
        }
            
        case 0:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            mainDisplayFunzone();
            break;
        }
            
        default:{
            cout<<"------------------------------"<<endl;
            cout<<"Enter Proper Data"<<endl;
            cout<<"------------------------------"<<endl;
            
            redeemPoints_funzone();
        }
    }
}


void app :: earnPoints_funzone(){
    int ch;
    
    cout<<"Earn Points By Playing Games"<<endl;
    cout<<"1). Tic Tac Toe"<<endl;
    cout<<"0). BACK"<<endl;
    cin>>ch;
    
    
    switch(ch){
        case 1:{
            cout<<"------------------------------"<<endl;
            cout<<"Win To earn 100 points"<<endl;
            cout<<"------------------------------"<<endl<<endl<<endl;
            
            ticTacToe_caller();
            break;
        }
            
        case 0:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            mainDisplayFunzone();
            break;
        }
            
        default:{
            cout<<"------------------------------"<<endl;
            cout<<"Enter Proper Data"<<endl;
            cout<<"------------------------------"<<endl;
            
            earnPoints_funzone();
        }
    }
}


void app :: ticTacToe_inputFunc(){
    int ch;
    
    cin>>ch;
    
    
    switch(ch){
        case 1:{
            if(r1c1!='0'&&r1c1!='X'){
                r1c1='X';
                ticTacToe_mainDisplay();
                ticTacToe_checkWin();
                ticTacToe_xor0();
            }
            else{
                cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                cout<<"You Cannot Play Here"<<endl;
                cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                
                cout<<endl<<"X Turn"<<endl;
                
                i--;
                
                ticTacToe_mainDisplay();
                ticTacToe_inputFunc();
            }
            break;
        }
            
        case 2:{
            if(r1c2!='0'&&r1c2!='X'){
                r1c2='X';
                ticTacToe_mainDisplay();
                ticTacToe_checkWin();
                ticTacToe_xor0();
            }
            else{
                cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                cout<<"You Cannot Play Here"<<endl;
                cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                
                cout<<endl<<"X Turn"<<endl;
                
                i--;
                
                ticTacToe_mainDisplay();
                ticTacToe_inputFunc();
            }
            break;
        }

            
        case 3:{
            if(r1c3!='0'&&r1c3!='X'){
                r1c3='X';
                ticTacToe_mainDisplay();
                ticTacToe_checkWin();
                ticTacToe_xor0();
            }
            else{
                cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                cout<<"You Cannot Play Here"<<endl;
                cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                
                cout<<endl<<"X Turn"<<endl;
                
                i--;
                
                ticTacToe_mainDisplay();
                ticTacToe_inputFunc();
            }
            break;
        }

            
        case 4:{
            if(r2c1!='0'&&r2c1!='X'){
                r2c1='X';
                ticTacToe_mainDisplay();
                ticTacToe_checkWin();
                ticTacToe_xor0();
            }
            else{
                cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                cout<<"You Cannot Play Here"<<endl;
                cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                
                cout<<endl<<"X Turn"<<endl;
                
                i--;
                
                ticTacToe_mainDisplay();
                ticTacToe_inputFunc();
            }
            break;
        }

            
        case 5:{
            if(r2c2!='0'&&r2c2!='X'){
                r2c2='X';
                ticTacToe_mainDisplay();
                ticTacToe_checkWin();
                ticTacToe_xor0();
            }
            else{
                cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                cout<<"You Cannot Play Here"<<endl;
                cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                
                cout<<endl<<"X Turn"<<endl;
                
                i--;
                
                ticTacToe_mainDisplay();
                ticTacToe_inputFunc();
            }
            break;
        }

            
        case 6:{
            if(r2c3!='0'&&r2c3!='X'){
                r2c3='X';
                ticTacToe_mainDisplay();
                ticTacToe_checkWin();
                ticTacToe_xor0();
            }
            else{
                cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                cout<<"You Cannot Play Here"<<endl;
                cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                
                cout<<endl<<"X Turn"<<endl;
                
                i--;
                
                ticTacToe_mainDisplay();
                ticTacToe_inputFunc();
            }
            break;
        }

            
        case 7:{
            if(r3c1!='0'&&r3c1!='X'){
                r3c1='X';
                ticTacToe_mainDisplay();
                ticTacToe_checkWin();
                ticTacToe_xor0();
            }
            else{
                cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                cout<<"You Cannot Play Here"<<endl;
                cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                
                cout<<endl<<"X Turn"<<endl;
                
                i--;
                
                ticTacToe_mainDisplay();
                ticTacToe_inputFunc();
            }
            break;
        }

            
        case 8:{
            if(r3c2!='0'&&r3c2!='X'){
                r3c2='X';
                ticTacToe_mainDisplay();
                ticTacToe_checkWin();
                ticTacToe_xor0();
            }
            else{
                cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                cout<<"You Cannot Play Here"<<endl;
                cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                
                cout<<endl<<"X Turn"<<endl<<endl;
                
                i--;
                
                ticTacToe_mainDisplay();
                ticTacToe_inputFunc();
            }
            break;
        }

            
        case 9:{
            if(r3c3!='0'&&r3c3!='X'){
                r3c3='X';
                ticTacToe_mainDisplay();
                ticTacToe_checkWin();
                ticTacToe_xor0();
            }
            else{
                cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                cout<<"You Cannot Play Here"<<endl;
                cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                
                cout<<endl<<"X Turn"<<endl;
                
                i--;
                
                ticTacToe_mainDisplay();
                ticTacToe_inputFunc();
            }
            break;
        }

            
        default:{
            cout<<"Invalid Enter Again"<<endl;
            
            ticTacToe_inputFunc();
        }
    }
}


void app :: ticTacToe_bot(){
    //horizontal sequence
    //win
    if(r1c1=='0'&&r1c2=='0'&&r1c3=='3'){
        r1c3='0';
    }
    
    else if(r1c1=='0'&&r1c2=='2'&&r1c3=='0'){
        r1c2='0';
    }
    
    else if(r1c3=='0'&&r1c2=='0'&&r1c1=='1'){
        r1c1='0';
    }
    
    else if(r2c1=='0'&&r2c2=='0'&&r2c3=='6'){
        r2c3='0';
    }
    
    else if(r2c1=='0'&&r2c2=='5'&&r2c3==0){
        r2c2='0';
    }
    
    else if(r2c3=='0'&&r2c2=='0'&&r2c1=='4'){
        r2c1='0';
    }
    
    else if(r3c3=='0'&&r3c2=='0'&&r3c1=='7'){
        r3c1='0';
    }
    
    else if(r3c3=='0'&&r3c2=='8'&&r3c1=='0'){
        r3c2='0';
    }
    
    else if(r3c3=='9'&&r3c2=='0'&&r3c1=='0'){
        r3c3='0';
    }
    
    //vertical sequence
    //win
    else if(r1c1=='0'&&r2c1=='0'&&r3c1=='7'){
        r3c1='0';
    }
    
    else if(r1c1=='0'&&r2c1=='4'&&r3c1=='0'){
        r2c1='0';
    }
    
    else if(r1c1=='1'&&r2c1=='0'&&r3c1=='0'){
        r1c1='0';
    }
    
    else if(r1c2=='0'&&r2c2=='0'&&r3c2=='8'){
        r3c2='0';
    }
    
    else if(r1c2=='0'&&r2c2=='5'&&r3c2=='0'){
        r2c2='0';
    }
    
    else if(r1c2=='2'&&r2c2=='0'&&r3c2=='0'){
        r1c2='0';
    }
    
    else if(r1c3=='0'&&r2c3=='0'&&r3c3=='9'){
        r3c3='0';
    }
    
    else if(r1c3=='0'&&r2c3=='6'&&r3c3=='0'){
        r2c3='0';
    }
    
    else if(r1c3=='3'&&r2c3=='0'&&r3c3=='0'){
        r1c3='0';
    }
    
    //left-right diagonal
    //win
    else if(r1c1=='0'&&r2c2=='0'&&r3c3=='9'){
        r3c3='0';
    }
    
    else if(r1c1=='0'&&r2c2=='5'&&r3c3=='0'){
        r2c2='0';
    }
    
    else if(r1c1=='1'&&r2c2=='0'&&r3c3=='0'){
        r1c1='0';
    }
    
    //right-left diagonal
    //win
    else if(r1c3=='0'&&r2c2=='0'&&r3c1=='7'){
        r3c1='0';
    }
    
    else if(r1c3=='0'&&r2c2=='5'&&r3c1=='0'){
        r2c2='0';
    }
    
    else if(r1c3=='3'&&r2c2=='0'&&r3c1=='0'){
        r1c3='0';
    }
    
    //horizontal sequence
    //defend
    else if(r1c1=='X'&&r1c2=='X'&&r1c3=='3'){
        r1c3='0';
    }
    
    else if(r1c1=='X'&&r1c2=='2'&&r1c3=='X'){
        r1c2='0';
    }
    
    else if(r1c3=='X'&&r1c2=='X'&&r1c1=='1'){
        r1c1='0';
    }
    
    else if(r2c1=='X'&&r2c2=='X'&&r2c3=='6'){
        r2c3='0';
    }
    
    else if(r2c1=='X'&&r2c2=='5'&&r2c3=='X'){
        r2c2='0';
    }
    
    else if(r2c3=='X'&&r2c2=='X'&&r2c1=='4'){
        r2c1='0';
    }
    
    else if(r3c3=='X'&&r3c2=='X'&&r3c1=='7'){
        r3c1='0';
    }
    
    else if(r3c3=='X'&&r3c2=='8'&&r3c1=='X'){
        r3c2='0';
    }
    
    else if(r3c3=='9'&&r3c2=='X'&&r3c1=='X'){
        r3c3='0';
    }
    
    //vertical sequence
    //defend
    else if(r1c1=='X'&&r2c1=='X'&&r3c1=='7'){
        r3c1='0';
    }
    
    else if(r1c1=='X'&&r2c1=='4'&&r3c1=='X'){
        r2c1='0';
    }
    
    else if(r1c1=='1'&&r2c1=='X'&&r3c1=='X'){
        r1c1='0';
    }
    
    else if(r1c2=='X'&&r2c2=='X'&&r3c2=='8'){
        r3c2='0';
    }
    
    else if(r1c2=='X'&&r2c2=='5'&&r3c2=='X'){
        r2c2='0';
    }
    
    else if(r1c2=='2'&&r2c2=='X'&&r3c2=='X'){
        r1c2='0';
    }
    
    else if(r1c3=='X'&&r2c3=='X'&&r3c3=='9'){
        r3c3='0';
    }
    
    else if(r1c3=='X'&&r2c3=='6'&&r3c3=='X'){
        r2c3='0';
    }
    
    else if(r1c3=='3'&&r2c3=='X'&&r3c3=='X'){
        r1c3='0';
    }
    
    //left-right diagonal
    //defend
    else if(r1c1=='X'&&r2c2=='X'&&r3c3=='9'){
        r3c3='0';
    }
    
    else if(r1c1=='X'&&r2c2=='5'&&r3c3=='X'){
        r2c2='0';
    }
    
    else if(r1c1=='1'&&r2c2=='X'&&r3c3=='X'){
        r1c1='0';
    }
   
    //right-left diagonal
    //defend
    else if(r1c3=='X'&&r2c2=='X'&&r3c1=='7'){
        r3c1='0';
    }
    
    else if(r1c3=='X'&&r2c2=='5'&&r3c1=='X'){
        r2c2='0';
    }
    
    else if(r1c3=='3'&&r2c2=='X'&&r3c1=='X'){
        r1c3='0';
    }
    
    //not a single case satisfies
    else if(r3c1=='7'){
        r3c1='0';
    }
    
    else if(r1c2=='2'){
        r1c2='0';
    }
    
    else if(r1c3=='3'){
        r1c3='0';
    }
    
    else if(r2c1=='4'){
        r2c1='0';
    }
    
    else if(r2c2=='5'){
        r2c2='0';
    }
    
    else if(r2c3=='6'){
        r2c3='0';
    }
    
    else if(r1c1=='1'){
        r1c1='0';
    }
    
    else if(r3c2=='8'){
        r3c2='0';
    }
    
    else if(r3c3=='9'){
        r3c3='0';
    }
    
    cout<<endl<<endl<<"0 Turn"<<endl<<endl;
    
    ticTacToe_mainDisplay();
    ticTacToe_checkWin();
    ticTacToe_xor0();
}


void app :: ticTacToe_checkWin(){
    //Row 1 X or 0
    if(r1c1=='X'&&r1c2=='X'&&r1c3=='X'){
        cout<<"\nX Wins\n\n";
        
        points+=100;
        gameOn=false;
        
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        
        mainDisplayFunzone();
    }
    
    else if(r1c1=='0'&&r1c2=='0'&&r1c3=='0'){
        cout<<"\n0 Wins\n\n";
        cout<<"Better Luck Next time"<<endl;
        
        gameOn=false;
        
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        
        mainDisplayFunzone();
    }
    
    //Row 2 X Or 0
    else if(r2c1=='0'&&r2c2=='0'&&r2c3=='0'){
        cout<<"\n0 Wins\n\n";
        cout<<"Better Luck Next time"<<endl;
        
        gameOn=false;
        
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        
        mainDisplayFunzone();
    }
    
    else if(r2c1=='X'&&r2c2=='X'&&r2c3=='X'){
        cout<<"\nX Wins\n\n";
        
        points+=100;
        gameOn=false;
        
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        
        mainDisplayFunzone();
    }
    
    //Row 3 X Or 0
    else if(r3c1=='0'&&r3c2=='0'&&r3c3=='0'){
        cout<<"\n0 Wins\n\n";
        cout<<"Better Luck Next time"<<endl;
        
        gameOn=false;
        
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        
        mainDisplayFunzone();
    }
    
    else if(r3c1=='X'&&r3c2=='X'&&r3c3=='X'){
        cout<<"\nX Wins\n\n";
        
        points+=100;
        gameOn=false;
        
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        
        mainDisplayFunzone();
    }
    
    //Column 1 X or 0
    else if(r3c1=='X'&&r2c1=='X'&&r1c1=='X'){
        cout<<"\nX Wins\n\n";
        
        points+=100;
        gameOn=false;
        
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        
        mainDisplayFunzone();
    }
    
    else if(r3c1=='0'&&r2c1=='0'&&r1c1=='0'){
        cout<<"\n0 Wins\n\n";
        cout<<"Better Luck Next time"<<endl;
        
        gameOn=false;
        
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        
        mainDisplayFunzone();
    }
    
    //Column 2 X or 0
    else if(r3c2=='X'&&r2c2=='X'&&r1c2=='X'){
        cout<<"\nX Wins\n\n";
        
        points+=100;
        gameOn=false;
        
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        
        mainDisplayFunzone();
    }
    
    else if(r3c2=='0'&&r2c2=='0'&&r1c2=='0'){
        cout<<"\n0 Wins\n\n";
        cout<<"Better Luck Next time"<<endl;
        
        gameOn=false;
        
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        
        mainDisplayFunzone();
    }
    
    //Column 3 X Or 0
    else if(r3c3=='0'&&r2c3=='0'&&r1c3=='0'){
        cout<<"\n0 Wins\n\n";
        cout<<"Better Luck Next time"<<endl;
        
        gameOn=false;
        
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        
        mainDisplayFunzone();
    }
    
    else if(r3c3=='X'&&r2c3=='X'&&r1c3=='X'){
        cout<<"\nX Wins\n\n";
        
        points+=100;
        gameOn=false;
        
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        
        mainDisplayFunzone();
    }
    
    //Diagonal Left To Right X or 0
    else if(r1c1=='X'&&r2c2=='X'&&r3c3=='X'){
        cout<<"\nX wins\n\n";
        
        points+=100;
        gameOn=false;
        
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        
        mainDisplayFunzone();
    }
    
    else if(r1c1=='0'&&r2c2=='0'&&r3c3=='0'){
        cout<<"\n0 wins\n\n";
        cout<<"Better Luck Next time"<<endl;
        
        gameOn=false;
        
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        
        mainDisplayFunzone();
    }
    
    //Diagonal Right To Left X or 0
    else if(r1c3=='X'&&r2c2=='X'&&r3c1=='X'){
        cout<<"\nXwins\n\n";
        
        points+=100;
        gameOn=false;
        
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        
        mainDisplayFunzone();
    }
    
    else if(r1c3=='0'&&r2c2=='0'&&r3c1=='0'){
        cout<<"\n0 wins\n\n";
        cout<<"Better Luck Next time"<<endl;
        
        gameOn=false;
        
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        
        mainDisplayFunzone();
    }
    
    //TIE
    else if(i==11){
        cout<<endl<<endl<<"TIE"<<endl<<endl;
        cout<<"Better Luck Next time"<<endl;
        
        gameOn=false;
        
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        
        mainDisplayFunzone();
    }
}


void app :: mainDisplaySpecialOffers(){
    int ch;
    
    //cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
    cout<<"Special Offers"<<endl;
    cout<<"1). Shop Groceries above ₹500 to get a discount of 10%"<<endl;
    cout<<"2). Shop Electronics above ₹40000 to get a discount of 8%"<<endl;
    cout<<"0). BACK"<<endl;
    cin>>ch;
    
    
    switch(ch){
        case 1:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            offer1_specialOffers();
            
            break;
        }
            
        case 2:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            offer2_specialOffers();
            
            break;
        }
            
        case 0:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            mainDisplayCategory();
            break;
        }
            
        default:{
            cout<<"------------------------------"<<endl;
            cout<<"Enter Proper Data"<<endl;
            cout<<"------------------------------"<<endl;
            
            mainDisplaySpecialOffers();
        }
    }
}


void app :: offer2_specialOffers(){
    int ch;
    
    //cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
    
    if(offer.offer2Eligible==0){
        cout<<"1). ACTIVATE OFFER"<<endl;
        cout<<"0). BACK"<<endl;
        cin>>ch;
       
        
        switch(ch){
            case 1:{
                if(offer.offer2==1){
                    cout<<endl<<"------------------------------"<<endl<<endl<<endl;
                    cout<<"Offer Already Activated"<<endl;
                    
                    cout<<endl<<"------------------------------"<<endl<<endl<<endl;
                    
                    mainDisplaySpecialOffers();
                }
                
                else{
                    offer.offer2=1;
                    
                    cout<<endl<<"------------------------------"<<endl<<endl<<endl;
                    cout<<"Offer Activated"<<endl;
                    
                    cout<<endl<<"------------------------------"<<endl<<endl<<endl;
                    
                    mainDisplaySpecialOffers();
                }
                break;
            }
            
            case 0:{
                cout<<endl<<"------------------------------"<<endl<<endl<<endl;
                
                mainDisplaySpecialOffers();
                
                break;
            }
                
            default:{
                cout<<"------------------------------"<<endl;
                cout<<"Enter Proper Data"<<endl;
                cout<<"------------------------------"<<endl;
                
                offer2_specialOffers();
            }
        }
    }
    
    else if(offer.offer2Eligible==1){
        
        cout<<"1). REDEEM OFFER"<<endl;
        cout<<"0). BACK"<<endl;
        cin>>ch;

        
        switch(ch){
            case 1:{
                cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                cout<<"Offer Code: 222222"<<endl;
                cout<<endl<<"------------------------------"<<endl<<endl<<endl;
                
                mainDisplaySpecialOffers();
                
                break;
            }
                
            case 0:{
                cout<<endl<<"------------------------------"<<endl<<endl<<endl;
                
                mainDisplaySpecialOffers();
                
                break;
            }
                
            default:{
                cout<<"------------------------------"<<endl;
                cout<<"Enter Proper Data"<<endl;
                cout<<"------------------------------"<<endl;
                
                offer2_specialOffers();
            }
        }
    }
}


void app :: offer1_specialOffers(){
    int ch;
    
    //cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        
    if(offer.offer1Eligible==0){
        cout<<"1). ACTIVATE OFFER"<<endl;
        cout<<"0). BACK"<<endl;
        cin>>ch;
        
       
        switch(ch){
            case 1:{
                if(offer.offer1==1){
                    cout<<endl<<"------------------------------"<<endl<<endl<<endl;
                    cout<<"Offer Already Activated"<<endl;
                    
                    cout<<endl<<"------------------------------"<<endl<<endl<<endl;
                    
                    mainDisplaySpecialOffers();
                }
                
                else{
                    offer.offer1=1;
                    
                    cout<<endl<<"------------------------------"<<endl<<endl<<endl;
                    cout<<"Offer Activated"<<endl;
                    
                    cout<<endl<<"------------------------------"<<endl<<endl<<endl;
                    
                    mainDisplaySpecialOffers();
                }
                break;
            }
                
            case 0:{
                cout<<endl<<"------------------------------"<<endl<<endl<<endl;
                
                mainDisplaySpecialOffers();
                
                break;
            }
                
            default:{
                cout<<"------------------------------"<<endl;
                cout<<"Enter Proper Data"<<endl;
                cout<<"------------------------------"<<endl;
                
                offer1_specialOffers();
            }
        }
    }
        
    else if(offer.offer1Eligible==1){
        
        cout<<"1). REDEEM OFFER"<<endl;
        cout<<"0). BACK"<<endl;
        cin>>ch;
       
        
        switch(ch){
            case 1:{
                cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                cout<<"Offer Code: 111111"<<endl;
                cout<<endl<<"------------------------------"<<endl<<endl<<endl;
                
                mainDisplaySpecialOffers();
                
                break;
            }
                
            case 0:{
                cout<<endl<<"------------------------------"<<endl<<endl<<endl;
                
                mainDisplaySpecialOffers();
                
                break;
            }
                
            default:{
                cout<<"------------------------------"<<endl;
                cout<<"Enter Proper Data"<<endl;
                cout<<"------------------------------"<<endl;
                
                offer1_specialOffers();
            }
        }
    }
}


void app :: mainDisplayFunzone(){
    int ch;
    
    resetFunzoneValues();
    
    cout<<"FUNZONE"<<endl;
    cout<<"Points: "<<points<<endl;
    cout<<"1). Earn Points"<<endl;
    cout<<"2). Redeem Points"<<endl;
    cout<<"0). BACK"<<endl;
    cin>>ch;
    
    
    switch(ch){
        case 1:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            earnPoints_funzone();
            break;
        }
            
        case 2:{
            if(points>=100){
                cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                redeemPoints_funzone();
            }
            
            else{
                cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                cout<<"Points Should be more than 100 to redeem"<<endl;
                cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                
                mainDisplayFunzone();
            }
            break;
        }
            
        case 0:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            mainDisplayCategory();
            break;
        }
            
        default:{
            cout<<"------------------------------"<<endl;
            cout<<"Enter Proper Data"<<endl;
            cout<<"------------------------------"<<endl;
            
            mainDisplayFunzone();
        }
    }
}


void app :: mainDisplayWallet(){
    int ch;
    
    cout<<"Balance Amount: ₹"<<money<<endl;
    cout<<"1). Add Money"<<endl;
    cout<<"2). Redeem Voucher"<<endl;
    cout<<"3). Earn Money(fun zone)"<<endl;
    cout<<"0). BACK"<<endl;
    cin>>ch;
    
    
    switch(ch){
        case 1:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            addMoney();
            break;
        }
            
        case 2:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            redeemCheckCouponCode_pin();
            break;
        }
            
        case 3:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            mainDisplayFunzone();
            break;
        }
            
        case 0:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            mainDisplayCategory();
            break;
        }
            
        default:{
            cout<<"------------------------------"<<endl;
            cout<<"Enter Proper Data"<<endl;
            cout<<"------------------------------"<<endl;
            
            mainDisplayWallet();
        }
    }
}


void app :: cart(){
    int ch;
    
    displayOrders_cart();
    
    cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
    
    cout<<"1) Edit Quantities"<<endl;
    cout<<"2) Proceed to BUY"<<endl;
    cout<<"0) BACK"<<endl;
    cin>>ch;
    
    
    switch(ch){
        case 1:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            EditQuantities_add_sub_cart();
            
            break;
        }
            
        case 2:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            if(total>0)
                buyConfirm_back();
            
            else{
                cout<<"Cannot Proceed To Order"<<endl;
                cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
                
                cart();
            }
            break;
        }
            
        case 0:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            mainDisplayCategory();
            
            break;
        }
            
        default:{
            cout<<"------------------------------"<<endl;
            cout<<"Enter Proper Data"<<endl;
            cout<<"------------------------------"<<endl;
             
            cart();
        }
    }
}


void app :: mainDisplayCategory(){
    int ch;
    
    //cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
    cout<<"1). Daily Special Offers"<<endl;
    cout<<"2). Shop Fresh"<<endl;
    cout<<"3). Electronics"<<endl;
    cout<<"4). Search"<<endl;
    cout<<"5). Fun Zone"<<endl;
    cout<<"6). CART"<<endl;
    cout<<"7). WALLET"<<endl;
    cout<<"8). Update Account Information"<<endl;
    cout<<"0). Log Out"<<endl;
    cin>>ch;
    //cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
    
    
    switch(ch){
        case 1:{
            cout<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            mainDisplaySpecialOffers();
            
            break;
        }
            
        case 2:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            mainDisplayFresh();
            
            break;
        }
            
        case 3:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            mainDisplayElectronics();
            
            break;
        }
            
        case 4:{
            cin.ignore();
            
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            searchProduct();
            
            break;
        }
            
        case 5:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            mainDisplayFunzone();
            
            break;
        }
            
        case 6:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            cart();
            
            break;
        }
            
        case 7:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            mainDisplayWallet();
            
            break;
        }
            
        case 8:{
            updateUserInformation();
            
            break;
        }
            
        case 0:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            LogIn_SignUp();
            
            break;
        }
        
        default:{
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            cout<<"Enter Proper Data"<<endl;
            cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
            
            mainDisplayCategory();
        }
    }
}


void app :: addMoney(){
    int amt;
    
    cout<<"Enter the Amount to be Credited"<<endl;
    cout<<"0) BACK"<<endl;
    cin>>amt;
    
    if(amt==0){
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        
        mainDisplayWallet();
    }
    
    else{
        money+=amt;
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        cout<<amt<<"₹ Credited Successfully"<<endl;
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        
        addMoney();
    }
}


void app :: eligible_nonEligibleOrder(){
    if(money<total){
        cout<<"Not Enough Money In Wallet"<<endl;
        cout<<"Add Money To Place Order"<<endl;
        
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        
        mainDisplayWallet();
    }
    
    else{
        resetAllTempValues_neededToBe();
    }
}


void app :: taxes_calculator(){
    float tax;
    tax=(9*total)/100;
    
    
    displayOrders_cart();
    
    cout<<"\t\t\t\t\t cgst(9%) \t\t₹"<<tax<<endl;
    cout<<"\t\t\t\t\t sgst(9%) \t\t₹"<<tax<<endl;
    cout<<"\t\t\t Delivery Charges \t\t₹35"<<endl;
    
    total+=(tax*2)+35;
    
    cout<<"\t\t\t\t\t\tTotal \t\t₹"<<total<<endl;
    
    total=round(total);
}


bool app :: pinFormat(int no){
    if(no>499999||no<400000){
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        cout<<"Entrer A Proper Pin Code"<<endl;
        return false;
    }
    
    else
        return true;
}


void app :: compareOld_newPass(string str){
    int tally=0;
    
    for(int i=0; i<str.length(); i++){
        if(str[i]==user.password[i])
            tally++;
    }
    
    if(tally==str.length()){
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        cout<<"Updated Password Can't Be Same As The Old Password"<<endl;
        getPass();
    }
}


bool app :: passCheck(){
    
    //Compares the inputted Password, with the user defined refular expression
    const regex pattern("^(?=.*[a-z])(?=.*[A-Z])(?=.*\\d)(?=.*[-+_!@#$%^&*.,?]).+$");
    
    if(user.password.length()<7){
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        cout<<"Password Should Be Atleast of 7 Characters"<<endl;
        return false;
    }
    
    if(regex_match(user.password, pattern))
        return true;
    
    else{
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        cout<<"Password Should Contain\nAtleast One Uppercase Letter\nAtleast One Lowercase Letter\nAtleast One Special Symbol\nAtleast One Digit\nNo Spaces"<<endl;
        return false;
    }
}


bool app :: emailCheck(){
    
    //Compares the inputted Email, with the user defined regular expression
    const regex pattern("^(?=.*[a-z])(?=.*[@])(?=.*[.]).+$");
    
    if(regex_match(user.email, pattern))
        return true;
    
    else{
        cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
        cout<<"Enter A Proper Email Adress"<<endl;
        return false;
    }
}


void app :: ticTacToe_xor0(){
    if(gameOn==true){
        if(xOr0=='0'){
            xOr0='X';
            cout<<endl<<endl<<"X Turn"<<endl<<endl;
            
            ticTacToe_inputFunc();
        }
        
        else if(xOr0=='X'){
            xOr0='0';
            
            ticTacToe_bot();
        }
    }
}


int main() {
    
    cout<<endl<<endl;
    cout<<"Welcome To Online Shopping"<<endl;
    
    app a;
    
    cout<<endl<<endl<<"------------------------------"<<endl<<endl<<endl;
    
    a.LogIn_SignUp();
    
    return 0;
}


// TO DO LIST

// AlGORITHM\
add classes\
    constructors\
    destructors\
create a proper account management system:-\
    multilogin system\
delete variables when after use\
checking for email and password to have whitespaces\
name accepting [] :- Fixed that using OSTRISCH ALGORITHM, find a permanent fix :/ \
find a way to not to make money and points global variables\
password generator\
convert all variables to character and boolean\
for searching of items try using regex\




// FRONT-END\
beutification of output\
escape path through tic tac toe game\
free delivery over certain price\
confirm address before ordering\


// STEPS :- to add more products\
add three variables in assigned structs, or create a new one namely:-\
    one for quantity(name of the product)\
    one constant for price(prefix P)\
    one for the total price of the item(prefix T)\
if a new category of product:-\
    create functions :-\
        display(category name)() displays the child items in the category\
        check(category name)() checks if any item is bought of the category and displays it (call this function in displayOrders_cart())\
        add a respective code block for each product in the add or sub items() functions\
        add product in searchProduct()\
        structure for storing all variables and constants ofitems\
    add the category in mainDisplayCategory()\
if no new category needed:-\
    make necessary changes in the already existing functions of the category, the item belongs too\
add the T(product name) variable to Total Amount in displayOrders_cart()::transaction\
add T(product name) in taxes_calculator() for offer eligibility\
remove all the items after order is placed in eligible_nonEligibleOrder()
    

// STEPS :- to add more offers\
offername and description in mainDisplaySpecialOffers()\
add two variables to struct offer:-\
    one for offer activation\
    one for eligibility of offer\
make a whole new function for offer(n) and copy algo from offer1_mainDisplaySpecialOffers()\
add the offer code in coupon_giftCard()\
check offer eligibility in displayOrders_cart()\
remove offers from eligible_nonEligibleOrder()
    

// BUG TO FEATURE JOURNEY ;) \
user can even add 1 rupee to wallet, feature is we are nice seller, if while buying the user is short on money on small scale, he can still add that small sum without swearing to us, condition in future might be set up by the payment partner, they are the bad guys not us ;) \
no two offers can be applied at once, was a bug because there is a different path for each offer and their calculation but, violla its now a feature ;) \
once the payment screen is redirected to some different screen, the offers applied are lost, because, the second time the user goes back to the payment screen, all calculations are repeated, which results in loss of offers, but that isnt bad, thats actually the protection of sensitive data, and you gotta apply offer again ;) \

// Creating a new object of the same class, how to get the data of the existing object

