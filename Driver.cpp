// File Name: Driver.cpp
//
// Author: Tyler Hooks
// Date: 4/13/2016
// Assignment Number: 7
// CS 2308.252 Spring 2016
// Instructor: Jill Seaman
//
// Driver for CharStack.cpp
// Checks for balanced brackets in the text file
// the user inputs. 

# include <iostream>
# include <string> 
# include <fstream>
# include "CharStack.h"


using namespace std; 

char balanced (char bal);

int main(){
 
 string filename;

 cout<<"Please enter filename: ";
 cin >> filename; 

 ifstream fin;  
 fin.open(filename.c_str());
 
 if(!fin){
 	cout<<"file could not be found."<<endl; 
 	fin.close(); 
 	return -1; 
 }
 
 CharStack p; 
 char next; 
 while (fin>>next){
 	char open; 
 	switch(next){

 		case '{':
 		case '[':
 		case '(':
 			p.push(next); 
 		break; 

 		case'}':
 			if(p.isEmpty()){
 				cout<<"Not a match."<<endl; 
 				fin.close(); 
 				return -1; 
 			}

 			open = p.pop();
 			if(open != '{'){
 				cout << "Incorrect. Should be:" << balanced(open) <<endl; 
 				fin.close(); 
 				return -1; 
 			}
 		break; 
 		case ']':
 			if(p.isEmpty()){
 				cout<<"Not a match."<<endl; 
 				fin.close();
 				return -1; 
 			}
 			open = p.pop(); 
 			if(open != '['){
 				cout << "Incorrect. Should be:" << balanced(open) <<endl;
 				fin.close(); 
 				return -1; 
 			}
 		break; 
		case ')':
 			if(p.isEmpty()){
 				cout<<"Not a match."<<endl; 
 				fin.close();
 				return -1; 
 			}
 			open = p.pop(); 
 			if(open != '('){
 				cout << "Incorrect. Should be:" << balanced(open) <<endl;
 				fin.close(); 
 				return -1; 
 			}
 		break; 
 		default:break; 

		}// end switch		

  }//end while 

  if(!p.isEmpty()){
  	switch(p.pop()){
  		case '{': 
  			cout<<"Incorrect. Missing }."<<endl; 
  			fin.close(); 
  			return -1; 
  		case '(':
  			cout<<"Incorrect. Missing )."<<endl; 
  			fin.close(); 
  			return -1; 
  		case '[':
  			cout<<"Incorrect. Missing ]."<<endl; 
  			fin.close(); 
  			return -1; 
  		default:
  			break; 
  	  }// end switch	
  }
 else 
 	cout<<"Correct! All Brackets are balanced."<<endl; 
  fin.close(); 
  return 0;
}
//***********************************************************
// balanced:checks the bracket and returns the mathing 
// bracket. 
//***********************************************************
char balanced (char bal){
    if (bal == '{') return '}';
    if (bal == '(') return ')';
    if (bal == '[') return ']';
}
