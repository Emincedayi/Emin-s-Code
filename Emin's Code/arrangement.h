#ifndef ARRANGEMENT_H
#define ARRANGEMENT_H 
 
#include<iostream>
using namespace std;
class ABC {
public: 
	ABC(){
		static int a = 0;
		cout << ++a << " ";	
	}  
};   
/*++++++++++++++++++++++++++*/
template<int z>
struct abc :public abc<z- 1> {
	abc() {
		cout << z << " ";
	}
}; 
template<>
struct abc<-1>{}; 


#endif