# include <iostream>
# include <string>
# include "CharStack.h"

using namespace std; 

// Constructor
 CharStack::CharStack(){
 	int x, n; 
 	stackString.substr(n,x);// returns copy of a substring; n characters long, at postition x 
  }  
// Stack operations
void CharStack::push(char str){
	char n;
	if (!isFull())
    stackString.append(str,n);//first n characters of str appended to stackString 
}
char CharStack::pop(){
	int x; 
	if(!isEmpty())
		stackString.at(x);
		x--; 
		return x;
}
bool CharStack::isFull() const{ 
    if(stackString.capacity()<stackString.size())//ask if we're allowed to use capacity! 
		return true; 
    else 
    	return false; 
}
bool CharStack::isEmpty() const{

	if(stackString.size()==0)
		return true; 
	else
		return false; 
}