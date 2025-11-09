#include <iostream>
using namespace std;
#include <string>

void showinitoptions() {
    cout<<endl<<"--Bus seat reservation app--";
    cout<<endl<<"0. Exit";
    cout<<endl<<"1. Reserve seat";
    cout<<endl<<"2. Reserve multiple seats";
    cout<<endl<<"3. Verify seat";
    cout<<endl<<"4. Free a seat";
    cout<<endl<<"5. Show reserved and free seats";
    cout<<endl<<"6. Search for the first free seat starting from a certain number";
    cout<<endl<<"7. Show number of reserved and free seats";
    cout<<endl<<"8. Reset reservations";
    cout<<endl<<"9. Show seats reserved by a passenger";
    cout<<endl<<"10. Cancel reservation for a passenger";
    cout<<endl<<"11. Show a complete report of the bus"<<endl;
}

int main()
{
    /*if a seat is 0 then free, if its 1 then reserved*/
    int n;
    cout<<"Insert bus capacity: "; cin>>n;
    int seats[n]={0};
    string p[n];
    
    int osel, s, ns;
    string name;
    
    while(true) {
    showinitoptions();
    cout<<"Option: "; cin>>osel;
    cin.ignore(); //apparently clears the buffer
    switch(osel) {
        case 0: {
            return 0;
        }
        case 1: {
            cout<<"Insert number of seat to reserve: "; cin>>s; cin.ignore();
            if(s>=1&&s<=n&&seats[s-1]==0) {
                cout<<"Insert passenger name: "; getline(cin, p[s-1]); //whq getline does is read a line with multiple spaces  
                seats[s-1]=1;
                cout<<"Seat reserved.";
            }
            else{
                cout<<"Seat is already reserved.";
            }
            break;
        }
        case 2: {
            cout<<"Insert amount of seats to reserve: "; cin>>ns; cin.ignore();
            cout<<"Insert passenger name: "; getline(cin, name);
            int r=0;
            for(int i=0; i<n && r<ns; i++) {
                if(seats[i]==0) {
                    seats[i]=1;
                    p[i]=name;
                    r++;
                }
            }
            cout<<r<<" seats have been reserved by "<<name;
        }
        case 3: {
            cout<<"Insert seat number to verify: "; cin<<s;
            
            if(s>=1 && s<=n) {
                if(seats[s-1]==0) {
                    cout<<"Seat's free.";
                }
                else{
                    cout<<"Seat taken by "+p[s-1];
                }
            }
            else{
                cout<<"Seat invalid. ";
            }
        }
        case 4: {
            cout<<"Insert number of seat to free: "; cin>>s; cin.ignore();
            if(s>=1&&s<=n&&seats[s-1]==1) {
                seats[s-1]=0;
                cout<<"Seat freed.";
            }
            else{
                cout<<"Seat is already freed.";
            }
            break;
        }
        case 5: {
            cout<<"Reserved seats: ";
            for(int i=0; i<n; i++) {
                if(seats[i]==1) cout<<i+1<<" ("<<p[i]<<") ";
            }
            cout<<endl;
            
            cout<<"Free seats: ";
            for(int i=0; i<n; i++) {
                if(seats[i]==0) cout<<i+1<<" ";
            }
            break;
        }
        case 6: {
            cout<<"Insert starting number: ";
            cin>>s;
            
            if(s>=1 && s<=n) {
                bool f=false;
                
                for(int i=s-1; i<n; i++) {
                    if(seats[i]==0) {
                        cout<<"First free seat after "<<s<<" is "<<i+1<<endl;
                        f=true;
                        break;
                    }
                }
                if(!gasit) cout<<"No more free seats after "<<s<<" found.";
            }
            else{
                cout<<"Invalid seat number."
            }
            break;
        }
        case 7: {
            int f=0, r=0;
            for(int i=0; i<n; i++) {
                if(seats[i]==0) f++;
                else r++
            }
            cout<<"Free seats: "<<f<<". Reserved seats: "<<r; break;
        }
        case 8: {
            for(int i=0; i<n; i++) {
                seats[i]=0;
                p[i]=" ";
            }
            cout<<"All reservations reset."; break;
        }
        case 9: {
            cout<<"Insert passenger name: " getline(cin,name);
            cout<<"Seats reserved by "<<name<<": ";
            for(int i=0; i<n; i++) {
                if(seats[i] ==1 && seats[i]==name) {
                    cout<<i+1<<" ";
                }
            }
            break;
        }
        case 10: {
            cout<<"Insert passenger name: " getline(cin,name);
            
            for(int i=0; i<n; i++) {
                if(seats[i]==1 && p[i]==name) {
                    seats[i]=0;
                    p[i]="";
                }
            }
            cout<<"All reserved seats by "<<name<<" have been freed.";
            break;
        }
        case 11: {
            for(int i=0; i<n; i++) {
                cout<<"Seat "<<i+1;
                if(seats[i]==0) {
                    cout<<" is free.";
                }
                else if(seats[i]==1) {
                    cout<<" is occupied by "<<p[i];
                }
            }
        }
    }
    }
}