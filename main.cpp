/* 
 * File:   main.cpp
 * Author: craigtaub
 *
 * Created on May 9, 2012, 7:23 PM
 */

#include <sstream>
#include<iostream>
using std::cout;
using std::endl;

#include<string>
using std::string;
using std::getline;

#include <vector>
using std::vector; 

#include "lexer.h"

using namespace std;

int main()
{
    
        /* lex: */
        vector<string> tokens (0); //declare
        vector<string>::iterator token; //declare
        tokens = initialise_lex(tokens, token); //lex into tokens
        reverse(tokens.begin(),tokens.end()); //reverse elements order
        //foreach token in vector, print
        for (token=tokens.begin(); token<tokens.end(); token++){
                cout << " " << *token << endl;
        }
        
	return 0;
}

/* +------------------------------------------------------------------------------+ */


/* 
sudo g++ -o main main.cpp
./main < code.crg

fuck the other shit compilers, if my language works, END OF

1) take in character stream
2) lex/convert to token
3) create syntax tree with tokens
4) parse syntax tree
5) convert into native c/c++ or assembly (maybe use opcode)
6) execute commands
7) print output
*/




/* example C++ code */
	/*
	string s;
	cout << "Please enter your first name followed by a newline\n";
	cin >> s;
	cout << "Hello, " << s << '\n';
	*/


/* lex:
    method A (seems right)
    1) take in entire string into var
    2) split var by whitespaces into seperate items
    3) create token by items in STACK
    OR
    method B
    1) take each item/word in seperately and create it into token before taking next char.
    */


/* string stream */
    /* std::string s;
    std::cout << "\n";
    std::getline(std::cin, s); // changed this line
    std::cout << s.c_str(); */


/*
#include <cstdlib>
using namespace std;
int main(int argc, char** argv) {
    return 0;
}=--[
*/