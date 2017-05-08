//
//  Token.cpp
//  LexicalAnalyzer
//
//  Created by Tommy Howell on 5/6/17.
//  Copyright © 2017 Tommy Howell. All rights reserved.
//

#include "Token.hpp"

string Token::getType()
{
    return TokenType;
}

string Token::getSymbol()
{
    return symbol;
}

int Token::getLineNumber()
{
    return lineNumber;
}
