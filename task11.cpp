#include <iostream>
using namespace std;


void challan(int speed);



main(){

 int speed;
 while(true){
 cout << "Enter Speed: ";
 cin >> speed;




 challan(speed);



}

}




void challan(int speed){



 if(speed >100){

 cout << "YOU WILL BE CHALLENGED!!!";
}

if (speed < 100 ) {




 cout << "Perfect! You’re going good.";


}

}