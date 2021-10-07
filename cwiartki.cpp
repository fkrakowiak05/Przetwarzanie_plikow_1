#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	int x, y;
	fstream MyFile;
	ofstream MyFile2("wynik.txt");
	MyFile.open("wsp.txt", ios::in);
	if(MyFile.good()==true){
		while(!MyFile.eof()){
			MyFile>>x>>y;
			if(x>0 && y>0){
				MyFile2<<x<<" "<<y<<" cwiartka 1"<<'\n';
			}
			if(x<0 && y>0){
				MyFile2<<x<<" "<<y<<" cwiartka 2"<<'\n';
			}
			if(x>0 && y<0){
				MyFile2<<x<<" "<<y<<" cwiartka 3"<<'\n';
			}
			if(x<0 && y<0){
				MyFile2<<x<<" "<<y<<" cwiartka 4"<<'\n';
			}
		}
	MyFile.close();
	MyFile2.close();
	}
	
return 0;
}
