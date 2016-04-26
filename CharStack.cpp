// File Name: CharStack.cpp 
//
// Author: Tyler Hooks
// Date: 4/13/2016
// Assignment Number: 7
// CS 2308.252 Spring 2016
// Instructor: Jill Seaman
//
// CharStack functions. 

# include <iostream>
# include <string>
# include "CharStack.h"

using namespace std; 

//***********************************************************
// CharStack: Constructor function
//***********************************************************
 CharStack::CharStack(){
 stackString = "";
}  
//***********************************************************
// push: adds a character to stackString if it is not full. 
// str: appends 1 character str 
//***********************************************************
void CharStack::push(char str){
	if (!isFull()){
	stackString.append(1, str);
	}
    
}
//***********************************************************
// pop: erases a character from stackString if it is not empty.
//  returns bad if it fails to erase a character. 
//***********************************************************
char CharStack::pop(){
	
    if(!isEmpty())
    {
   	char x = stackString[((stackString.size())-1)]; 
   	stackString.erase((stackString.size())-1, 1);
   	return x; 
    }
	char bad = 'f';
	return bad; 
  
}
//***********************************************************
// isFull: returns false because stackSting is never full. 
//***********************************************************
bool CharStack::isFull() const{ 
    	return false; 
}
//***********************************************************
// isEmpty: checks if stackString is empty.
// returns true if empty, false otherwise. 
//***********************************************************
bool CharStack::isEmpty() const{
	if(stackString.size()==0)
		return true; 
	else
		return false; 
}