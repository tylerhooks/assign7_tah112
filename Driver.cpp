# include <iostream>
# include <string> 
# include <fstream>
# include "CharStack.h"


using namespace std; 

int main(){
 string filename;

 cout<<"Please enter filename: ";
 getline(cin, filename); 

 fstream fin; 
 fin >> filename;  
 fin.open(filename.c_str());
 
 if(!fin){
 	cout<<"file could not be found."<<endl; 
 	return -1; 
 }
 else 

 while (fin>>filename){
 	CharStack p; 
 	char open; 
 	if(open == '{' || open == '['|| open == '('){
 			   p.push(open); 
 			   cout << "Bracket pushed"<<endl; 
     }
     else 
     	cout << "nothing";
     

  // if statements for brakcets 
  }
}
