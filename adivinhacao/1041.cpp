#include <iostream>
using namespace std;
int main(){
	cout.precision(1);
	double x,y;
	cin >> x >> y;
	cout << fixed << x << fixed << y <<endl;
	if(x==0 && y==0){
		cout <<"Origem \n";
	}
	else if(x>0 && y>0){
		cout << "Q1\n";
	}
	else if(x<0 && y>0){
			cout << "Q2\n";
	}
	else if(x<0 && y<0){
		cout << "Q3\n";
	}else
	   cout << "Q4\n";
}
