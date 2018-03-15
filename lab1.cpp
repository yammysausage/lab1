#include<iostream>
using namespace std;
int main() {
	int d = 0; 
	do {int a = 0;
		d = 0;
		


		float b = 0;
		cout << "please input a number:\n";				//express message
		cin >> b;
		int c = b;
		

		
		

		if (b >= 0 && b - c == 0) {
			a= b;

			//set a as the input number

			cout << "you input" << a << "\n";
			while (a != 1) {									//whether a=1 or not
				if (a % 2 == 1) {
					a = a * 3 + 1;							//calculate odd a
					cout << "odd result:" << a << "\n";

				}
				else {
					a = a / 2;
					cout << "even result:" << a << "\n";	//calculate even a
				}

			}
			cout << "result:" << a << " program complete\n";
		}//end
		else {
			cout << "please take it seriously\n";
			d += 1;
		}
	} while (d!=0);//prevent noob
	 
	cin.get() ;
										return 0;
}
