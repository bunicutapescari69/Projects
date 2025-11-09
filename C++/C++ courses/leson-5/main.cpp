#include <iostream>
using namespace std;

int main()
{
	/*aight since you missed the lesson
	im gonna be teaching u the switch thing

	were gonna do a calculator v2*/
	double a,b;//stronger
	char s;

	cout<<"Insert first number:";
	cin>>a;
	cout<<"Insert second number:";
	cin>>b;
	cout<<"Insert symbol(+,-,*,/):";
	cin>>s;
	cout<<endl;

	switch(s) {//goes through some cases depending on s
	case '+'://if(c==+){ do that}
		cout<<"Answer is "<<a+b;
		break;//get out of the case

	case '-':
		cout<<"Answer is "<<a-b;
		break;

	case '*':
		cout<<"Answer is "<<a*b;
		break;

	case '/':
		cout<<"Answer is "<<a/b;
		break;

	default://is executed if none of the cases are true
		cout<<"E1:Invalid symbol"<<endl<<"Make sure the symbol is valid (+,-,*,/) and try again.";
	}

}