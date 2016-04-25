# include <iostream>
# include <string> 
# include <fstream>
# include "CharStack.h"


using namespace std; 


int main(){


	CharStack s; 
	char x;  
    s.push('T'); 
	x = s.pop();  
	//s.pop();  
	
	cout << x; 
}
