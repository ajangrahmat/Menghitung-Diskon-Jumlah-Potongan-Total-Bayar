#include<iostream>
using namespace std;
long totalBeli, jumlahPotong, totalBayar, persen;

int main(){
	cout << "Total Pembelian: ";
	cin >> totalBeli;
	
	if(totalBeli > 100000){
		persen = 10;
	} 
	else if((totalBeli >= 70000) && (totalBeli <= 100000)){
		persen = 7;
	}
	else if((totalBeli >= 50000) && (totalBeli < 70000)){
		persen = 5;
	}
	else if(totalBeli < 50000){
		persen = 0;
	}
	
	jumlahPotong = (totalBeli * persen) / 100;
	totalBayar = totalBeli - jumlahPotong;
	
	cout << "\nJumlah Potongan: " << jumlahPotong << endl;
	cout << "Total Bayar: " << totalBayar;
}


