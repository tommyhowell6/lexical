//
//  Token.hpp
//  LexicalAnalyzer
//
//  Created by Tommy Howell on 5/6/17.
//  Copyright © 2017 Tommy Howell. All rights reserved.
//

#ifndef Token_hpp
#define Token_hpp

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class Token {
    
public:
    Token(string type, string value, int line)
    {
        TokenType = type;
        symbol = value;
        lineNumber = line;
    }
    
    string getType();
    string getSymbol();
    int getLineNumber();
    
private:
    
    string TokenType;
    string symbol;
    int lineNumber;
    
};

#endif /* Token_hpp */

/*
 a string - extracted from the file text
 a number - the line the token started on
 a token type
 
 (Token_Type,"Value",Line_Number)
 */
