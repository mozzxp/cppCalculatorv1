/*
** calculator program
** by: @MOZZXP
** object oriented programming
*/

#include<iostream>
#include<string>
#include<ctime>

using namespace std;

// the calculator class

class calculator{

// calculator variables
public:
    int main;
    int value1;
    int value2;
    int result;

// calculator function

public : void go(){
            cout << "\n CALCULATOR PROGRAM \n\n";

    while(true){
        cout << "1- calculate\n";
        cout << "2- credits\n";
        cout << "3- exit\n";
        cin >> main;
        if(main == 1){

            cout << "\nEnter the first  number : ";
            cin >> value1;

            cout << "\nEnter the second number : ";
            cin >> value2;

            cout << "\n\n :: Results :: \n\n";
            cout << "  +  "<<value1 + value2 << endl;
            cout << "  -  "<<value1 - value2 << endl;
            cout << "  *  "<<value1 * value2 << endl;
            cout << "  /  "<<value1 / value2 << "\n\n";

        }else if(main == 2){
            cout << "\n\n BY: @MOZZXP; \n\n";
        }else if(main == 3){
            break;
        }else{
            break;
        }
    }

}


};

int main(){

    calculator run;
    run.go();
    return 0;
}
