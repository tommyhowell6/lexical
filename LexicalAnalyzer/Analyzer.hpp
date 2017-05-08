//
//  Analyzer.hpp
//  LexicalAnalyzer
//
//  Created by Tommy Howell on 5/6/17.
//  Copyright © 2017 Tommy Howell. All rights reserved.
//

#ifndef Analyzer_hpp
#define Analyzer_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include "Token.hpp"

using namespace std;

class Analyzer {
    
public:
    Analyzer(){}
    
private:
    vector<Token> tokenList;
    int argc;
    char** argv;
};

#endif /* Analyzer_hpp */
