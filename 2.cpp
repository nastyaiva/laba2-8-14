#include <iostream>
#include <cmath> // abs
using namespace std;

int main(){

	pair<int, int> positionA, positionB;

	cout << "positionA: ";
	cin>>positionA.first>>positionA.second;

	cout << "positionB: ";
	cin >> positionB.first >> positionB.second;

	if ((positionA.first > 0 && positionA.first < 9) && (positionA.second > 0 && positionA.second < 9) &&
	   (positionB.first > 0 && positionB.first < 9) && (positionB.second > 0 && positionB.second < 9) ){

		if (positionA.first == positionB.first || positionA.second == positionB.second){
			cout << " ladia ugrogaet positionB." << endl;
		}

		if (abs(positionA.first-positionB.first) == abs(positionA.second-positionB.second)) {
			cout << "slon ugrogaet positionB." << endl;
		}

		if (abs(positionA.first-positionB.first) <=1 && abs(positionA.second-positionB.second) <=1){
			cout << "king can popast positionB." << endl;
			}

		if (positionA.first == positionB.first || positionA.second == positionB.second ||
		abs(positionA.first-positionB.first) == abs(positionA.second-positionB.second)) {
			cout << "ferz ugrogaet positionB." << endl;
		}


		if ((positionA.first == positionB.first && positionB.second == positionA.second + 1) ) {
	        	cout << "white peshka can popast positionB." << endl;
	        }

	    else if (abs(positionB.first - positionA.first) == 1 && positionB.second - positionA.second == 1) {
		cout << "white peshka fight positionB." << endl;
		}

		else if((positionA.second == 2) && positionA.first == positionB.first && (positionB.second == positionA.second + 2)){
			cout<<"white peshka go cherez 2 polya."<<endl;
		}
		else{
			cout<<"no go!"<<endl;
		}
	}

	else cout << " wrong koordinat";
    return 0;

}
