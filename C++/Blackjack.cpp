#include <iostream>
#include <random>
using namespace std;

int main() {
    random_device r;
    mt19937 gen(r());

    uniform_int_distribution<> random(1, 13);
    //cout<<random(gen);
    int input; int y; int d; bool c;

    cout<<"Welcome to blackjack! Do you wanna play?"<<endl
    <<"1. Yes"<<endl<<"x. No"<<endl;
    cin>>input;
    if(input==1) {
        while(true){
            y=0; d=0; c=true;
                            for(int i=0; i<2; i++) {
                    input=random(gen);
                    if(input>10) {
                        input=10;
                    } else if(input==1) {
                        input=11;
                    }
                    y+=input;
                }
                for(int i=0; i<2; i++) {
                    input=random(gen);
                    if(input>10) {
                        input=10;
                    } else if(input==1) {
                        input=11;
                    }
                    d+=input;
                }
            while(c) {

                cout<<"You have "<<y<<", choose your action:"<<endl<<
                "1.Hit me"<<endl<<"2.Stand"<<endl;
                cin>>input;

                if(input==1) {
                    y+=random(gen);
                }
                if(input==2) {c=false;}
            }
            cout<<"The dealer had "<<d<<endl;
            if(y>d && y<=21) {
            cout<<"You won!"<<endl;
            }
            if(d>y) {
                cout<<"The dealer got a better deck. You lose!"<<endl;
            }
            if(y>21) {
                cout<<"You absolutely BUSTED!"<<endl;
            }
        }
    } else{
        return 67;
    }
}
