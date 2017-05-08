//
//  main.cpp
//  LexicalAnalyzer
//
//  Created by Tommy Howell on 5/6/17.
//  Copyright © 2017 Tommy Howell. All rights reserved.
//

#include <iostream>
#include "Analyzer.hpp"
#include <fstream>


int main(int argc, const char * argv[]) {
    ifstream inputFile;
    string line;
    
    inputFile.open("file1.txt");
    
    
    while (inputFile >> line)
    {
        cout << line << endl;
    }
    
    cout << "hey" << endl;
    
    return 0;
}
