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
	if (!isFull())
    stackString.append(str, 1);//first n characters of str appended to stackString 
}
char CharStack::pop(){
	 
   if(!isEmpty())
	{
	int p = ((stackString.size())-1); 
	int x = stackString[p];
	stackString.substr(x,p);
	return x; 
	}
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