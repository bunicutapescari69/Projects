#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*rent a variable V1.1
    Changelog:
    -added a vector storing the PINs
    -PIN functionality
    To be added:
    -whatever else you think*/
    
    vector<int> in(20,0);
    vector<float> flo(20,0);
    vector<double> dou(20,0);
    vector<char> cha(20,0);
    vector<string> str(20,"");
    vector<int> pin(100,0);
    int vn; int a; int b; char c;
    string vsel; bool aux1=false; bool aux2=false; bool auxpin=false;
    string oper; float d,e; double f,g; string h,i;
    
    while(true) {
        cout<<"Insert variable type:"; cin>>vsel;
        if(vsel=="int") {
            aux1=true;
            while(aux1) {
                vn=0;
                cout<<"Insert variable index (1-20) (21 to go back):"; cin>>vn;
                if(vn==21){
                    aux1=false;
                } else if(vn>0 && vn<21) {
                    if(pin[(vn-1)]!=0) {
                        cout<<"Insert PIN:"; cin>>a;
                        if(a==pin[(vn-1)]) {
                            aux2=true;
                        } else {
                            cout<<"Incorrect PIN!"<<endl;
                        }
                    } else {
                        aux2=true;
                    }
                    while(aux2) {
                        cout<<"Operation (mod(ify),set,val(ue),des(elect),pin):"; cin>>oper;
                        if(oper=="set") {
                            cout<<"Insert value:"; cin>>a;
                            in[(vn-1)]=a;
                        } else if(oper=="mod") {
                            cout<<"Insert number:"; cin>>b;
                            cout<<"Operation (+,-,*,/,%):"; cin>>c;
                            if(c=='+') {
                                a=a+b;
                                in[(vn-1)]=a;
                            }
                            else if(c=='-') {
                                a=a-b;
                                in[(vn-1)]=a;
                            }
                            else if(c=='*') {
                                a=a*b;
                                in[(vn-1)]=a;
                            }
                            else if(c=='/') {   
                                a=a/b;
                                in[(vn-1)]=a;
                            }
                            else if(c=='%') {   
                                a=a%b;
                                in[(vn-1)]=a;
                            }
                            else {
                                cout<<"Invalid operation";
                            }
                        } else if(oper=="val") {
                            cout<<"The current value for int variable "<<vn<<" is "<<in[(vn-1)]<<endl;
                        } else if(oper=="des") {
                            aux2=false;
                        } else if(oper=="pin") {
                            if(pin[(vn-1)]==0) {
                                cout<<"Insert PIN to set (must not be 0):";
                                cin>>pin[(vn-1)];
                                cout<<"Insert PIN again. If pins don't match, the PIN will not be set:";
                                cin>>a;
                                if(pin[(vn-1)]!=a) {
                                    cout<<"PINs dont match, PIN not set!"<<endl;
                                    pin[(vn-1)]=0;
                                } else if(pin[(vn-1)]==a) {
                                    cout<<"PIN set succesfully!"<<endl;
                                }
                            } else if(pin[(vn-1)]!=0) {
                                cout<<"Insert current PIN:"; cin>>a;
                                if(a==pin[(vn-1)]) {
                                    cout<<"Insert new PIN (0 to remove PIN):";
                                    cin>>pin[(vn-1)];
                                    cout<<"Insert new PIN again:";
                                    cin>>b;
                                    if(pin[(vn-1)]==0) {
                                        cout<<"PIN removed succesfully!"<<endl;
                                    } else if(pin[(vn-1)]!=b) {
                                        cout<<"PINs dont match, new PIN not set!"<<endl;
                                        pin[(vn-1)]=a;
                                    } else if(pin[(vn-1)]==b) {
                                        cout<<"New PIN set succesfully"<<endl;
                                    }
                                } else if(a!=pin[(vn-1)]) {
                                    cout<<"Incorrect PIN";
                                }
                            }
                        }
                    }
                }
            }
        }
        else if(vsel=="float") {
            aux1=true;
            while(aux1) {
                vn=0;
                cout<<"Insert variable index (1-20) (21 to go back):"; cin>>vn;
                if(vn==21){
                    aux1=false;
                } else if(vn>0 && vn<21) {
                    if(pin[(vn-1+20)]!=0) {
                        cout<<"Insert PIN:"; cin>>a;
                        if(a==pin[(vn-1+20)]) {
                            aux2=true;
                        } else {
                            cout<<"Incorrect PIN!"<<endl;
                        }
                    } else {
                        aux2=true;
                    }
                    while(aux2) {
                        cout<<"Operation (mod(ify),set,val(ue),des(elect),pin):"; cin>>oper;
                        if(oper=="set") {
                            cout<<"Insert value:"; cin>>d;
                            flo[(vn-1)]=d;
                        } else if(oper=="mod") {
                            cout<<"Insert number:"; cin>>e;
                            cout<<"Operation (+,-,*,/):"; cin>>c;
                            if(c=='+') {
                                d=d+e;
                                flo[(vn-1)]=d;
                            }
                            else if(c=='-') {
                                d=d-e;
                                flo[(vn-1)]=d;
                            }
                            else if(c=='*') {
                                d=d*e;
                                flo[(vn-1)]=d;
                            }
                            else if(c=='/') {   
                                d=d/e;
                                flo[(vn-1)]=d;
                            }
                            else {
                                cout<<"Invalid operation";
                            }
                        } else if(oper=="val") {
                            cout<<"The current value for float variable "<<vn<<" is "<<flo[(vn-1)]<<endl;
                        } else if(oper=="des") {
                            aux2=false;
                        } else if(oper=="pin") {
                            if(pin[(vn-1+20)]==0) {
                                cout<<"Insert PIN to set (must not be 0):";
                                cin>>pin[(vn-1+20)];
                                cout<<"Insert PIN again. If pins don't match, the PIN will not be set:";
                                cin>>a;
                                if(pin[(vn-1+20)]!=a) {
                                    cout<<"PINs dont match, PIN not set!"<<endl;
                                    pin[(vn-1+20)]=0;
                                } else {
                                    cout<<"PIN set succesfully!"<<endl;
                                }
                            } else if(pin[(vn-1+20)]!=0) {
                                cout<<"Insert current PIN:"; cin>>a;
                                if(a==pin[(vn-1+20)]) {
                                    cout<<"Insert new PIN (0 to remove PIN):";
                                    cin>>pin[(vn-1+20)];
                                    cout<<"Insert new PIN again:";
                                    cin>>b;
                                    if(pin[(vn-1+20)]==0) {
                                        cout<<"PIN removed succesfully!"<<endl;
                                    } else if(pin[(vn-1+20)]!=b) {
                                        cout<<"PINs dont match, new PIN not set!"<<endl;
                                        pin[(vn-1+20)]=a;
                                    } else {
                                        cout<<"New PIN set succesfully"<<endl;
                                    }
                                } else if(a!=pin[(vn-1+20)]) {
                                    cout<<"Incorrect PIN";
                                }
                            }
                        }    
                    }
                }
            }
        }
        else if(vsel=="double") {
            aux1=true;
            while(aux1) {
                vn=0;
                cout<<"Insert variable index (1-20) (21 to go back):"; cin>>vn;
                if(vn==21){
                    aux1=false;
                } else if(vn>0 && vn<21) {
                    if(pin[(vn-1+40)]!=0) {
                        cout<<"Insert PIN:"; cin>>a;
                        if(a==pin[(vn-1+40)]) {
                            aux2=true;
                        } else {
                            cout<<"Incorrect PIN!"<<endl;
                        }
                    } else {
                        aux2=true;
                    }
                    while(aux2) {
                        cout<<"Operation (mod(ify),set,val(ue),des(elect),pin):"; cin>>oper;
                        if(oper=="set") {
                            cout<<"Insert value:"; cin>>f;
                            dou[(vn-1)]=f;
                        } else if(oper=="mod") {
                            cout<<"Insert number:"; cin>>g;
                            cout<<"Operation (+,-,*,/):"; cin>>c;
                            if(c=='+') {
                                f=f+g;
                                dou[(vn-1)]=f;
                            }
                            else if(c=='-') {
                                f=f-g;
                                dou[(vn-1)]=f;
                            }
                            else if(c=='*') {
                                f=f*g;
                                dou[(vn-1)]=f;
                            }
                            else if(c=='/') {   
                                f=f/g;
                                dou[(vn-1)]=f;
                            }
                            else {
                                cout<<"Invalid operation";
                            }
                        } else if(oper=="val") {
                            cout<<"The current value for double variable "<<vn<<" is "<<dou[(vn-1)]<<endl;
                        } else if(oper=="des") {
                            aux2=false;
                        } else if(oper=="pin") {
                            if(pin[(vn-1+40)]==0) {
                                cout<<"Insert PIN to set (must not be 0):";
                                cin>>pin[(vn-1+40)];
                                cout<<"Insert PIN again. If pins don't match, the PIN will not be set:";
                                cin>>a;
                                if(pin[(vn-1+40)]!=a) {
                                    cout<<"PINs dont match, PIN not set!"<<endl;
                                    pin[(vn-1+40)]=0;
                                } else {
                                    cout<<"PIN set succesfully!"<<endl;
                                }
                            } else if(pin[(vn-1+40)]!=0) {
                                cout<<"Insert current PIN:"; cin>>a;
                                if(a==pin[(vn-1+40)]) {
                                    cout<<"Insert new PIN (0 to remove PIN):";
                                    cin>>pin[(vn-1+40)];
                                    cout<<"Insert new PIN again:";
                                    cin>>b;
                                    if(pin[(vn-1+40)]==0) {
                                        cout<<"PIN removed succesfully!"<<endl;
                                    } else if(pin[(vn-1+40)]!=b) {
                                        cout<<"PINs dont match, new PIN not set!"<<endl;
                                        pin[(vn-1+40)]=a;
                                    } else {
                                        cout<<"New PIN set succesfully"<<endl;
                                    }
                                } else if(a!=pin[(vn-1+40)]) {
                                    cout<<"Incorrect PIN";
                                }
                            }
                        }
                    }
                }
            }
        }
        else if(vsel=="char") {
            aux1=true;
            while(aux1) {
                vn=0;
                cout<<"Insert variable index (1-20) (21 to go back):"; cin>>vn;
                if(vn==21){
                    aux1=false;
                } else if(vn>0 && vn<21) {
                    if(pin[(vn-1+60)]!=0) {
                        cout<<"Insert PIN:"; cin>>a;
                        if(a==pin[(vn-1+60)]) {
                            aux2=true;
                        } else {
                            cout<<"Incorrect PIN!"<<endl;
                        }
                    } else {
                        aux2=true;
                    }
                    while(aux2) {
                        cout<<"Operation (set,val(ue),des(elect),pin):"; cin>>oper;
                        if(oper=="set") {
                            cout<<"Insert value:"; cin>>c;
                            cha[(vn-1)]=c;
                        } else if(oper=="val") {
                            cout<<"The current value for char variable "<<vn<<" is "<<cha[(vn-1)]<<endl;
                        } else if(oper=="des") {
                            aux2=false;
                        } else if(oper=="pin") {
                            if(pin[(vn-1+60)]==0) {
                                cout<<"Insert PIN to set (must not be 0):";
                                cin>>pin[(vn-1+60)];
                                cout<<"Insert PIN again. If pins don't match, the PIN will not be set:";
                                cin>>a;
                                if(pin[(vn-1+60)]!=a) {
                                    cout<<"PINs dont match, PIN not set!"<<endl;
                                    pin[(vn-1+60)]=0;
                                } else {
                                    cout<<"PIN set succesfully!"<<endl;
                                }
                            } else if(pin[(vn-1+60)]!=0) {
                                cout<<"Insert current PIN:"; cin>>a;
                                if(a==pin[(vn-1+60)]) {
                                    cout<<"Insert new PIN (0 to remove PIN):";
                                    cin>>pin[(vn-1+60)];
                                    cout<<"Insert new PIN again:";
                                    cin>>b;
                                    if(pin[(vn-1+60)]==0) {
                                        cout<<"PIN removed succesfully!"<<endl;
                                    } else if(pin[(vn-1+60)]!=b) {
                                        cout<<"PINs dont match, new PIN not set!"<<endl;
                                        pin[(vn-1+60)]=a;
                                    } else {
                                        cout<<"New PIN set succesfully"<<endl;
                                    }
                                } else if(a!=pin[(vn-1+60)]) {
                                    cout<<"Incorrect PIN";
                                }
                            }
                        }
                    }
                }
            }
        }
        else if(vsel=="string") {
            aux1=true;
            while(aux1) {
                vn=0;
                cout<<"Insert variable index (1-20) (21 to go back):"; cin>>vn;
                if(vn==21){
                    aux1=false;
                } else if(vn>0 && vn<21) {
                    if(pin[(vn-1+80)]!=0) {
                        cout<<"Insert PIN:"; cin>>a;
                        if(a==pin[(vn-1+80)]) {
                            aux2=true;
                        } else {
                            cout<<"Incorrect PIN!"<<endl;
                        }
                    } else {
                        aux2=true;
                    }
                    while(aux2) {
                        cout<<"Operation (add,set,val(ue),des(elect),pin):"; cin>>oper;
                        if(oper=="set") {
                            cout<<"Insert value:"; cin>>h;
                            str[(vn-1)]=f;
                        } else if(oper=="add") {
                            cout<<"Insert string:"; cin>>i;
                            h=h+i;
                            str[(vn-1)]=h;
                        } else if(oper=="val") {
                            cout<<"The current value for double variable "<<vn<<" is "<<str[(vn-1)]<<endl;
                        } else if(oper=="des") {
                            aux2=false;
                        } else if(oper=="pin") {
                            if(pin[(vn-1+80)]==0) {
                                cout<<"Insert PIN to set (must not be 0):";
                                cin>>pin[(vn-1+80)];
                                cout<<"Insert PIN again. If pins don't match, the PIN will not be set:";
                                cin>>a;
                                if(pin[(vn-1+80)]!=a) {
                                    cout<<"PINs dont match, PIN not set!"<<endl;
                                    pin[(vn-1+80)]=0;
                                } else {
                                    cout<<"PIN set succesfully!"<<endl;
                                }
                            } else if(pin[(vn-1+80)]!=0) {
                                cout<<"Insert current PIN:"; cin>>a;
                                if(a==pin[(vn-1+80)]) {
                                    cout<<"Insert new PIN (0 to remove PIN):";
                                    cin>>pin[(vn-1+80)];
                                    cout<<"Insert new PIN again:";
                                    cin>>b;
                                    if(pin[(vn-1+80)]==0) {
                                        cout<<"PIN removed succesfully!"<<endl;
                                    } else if(pin[(vn-1+80)]!=b) {
                                        cout<<"PINs dont match, new PIN not set!"<<endl;
                                        pin[(vn-1+80)]=a;
                                    } else {
                                        cout<<"New PIN set succesfully"<<endl;
                                    }
                                } else if(a!=pin[(vn-1+80)]) {
                                    cout<<"Incorrect PIN";
                                }
                            }
                        }
                    }
                }
            }
        }
        else {
            cout<<"Invalid operation";
        }
    }
    return 0;
}
    
