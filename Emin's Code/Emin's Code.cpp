#include <iostream>
#include"arrangement.h"
#include<vector>  
#include<cstring>
using namespace std;
 int main() { 
	 cout << "Arrangment with class method without for loop\n";
	 ABC mx[100]; 
	 cout << "\nArrangment with template method without for loop\n";
	 abc<100> mz; 
	 cout << "\n\n";
	//mz.erase(remove_if(mz.begin(), mz.end(),
	//	 [x](int m) {return m % x == 0}), mz.end()); 
	int count{};
	for (int i = 0; i <= 100; ++i) { 
		if (i % 2 == 0 ? i : 0) {
          cout << i << " "; 
		  ++count;
		}
	 }cout << "\ntotal value of even numbers:" << count;
} 
