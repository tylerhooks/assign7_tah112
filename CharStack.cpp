# include <iostream>
# include <string>
# include "CharStack.h"

using namespace std; 

// Constructor
 CharStack::CharStack(){
 stackString = "";
}  
// Stack operations
void CharStack::push(char str){
	char n; 
	if (!isFull())
    stackString.append(str, n);//first n characters of str appended to stackString 
}
char CharStack::pop(){
	int x = stackString.size()-1; 
	int y;
	if(!isEmpty())
		stackString.erase(x,y);
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