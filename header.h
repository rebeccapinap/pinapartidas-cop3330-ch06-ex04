/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Rebecca Pina Partidas
 */

// Include statements
#include<iostream>
#include<iomanip>
#include<fstream>
#include<sstream>
#include<cmath>
#include<cstdlib>
#include<string>
#include<list>
#include <forward_list>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include <array>
#include <regex>
#include<random>
#include<stdexcept>

// Defines namespace
using namespace std;

// Definition of class
class Name_value { 
  public:
    Name_value();
    Name_value(string newName, int newValue);  
    string getName() const;
    int getValue() const;
  private:  
    string name;           
    int value;        
};

// Class functions
Name_value :: Name_value (string newName, int newValue)
{
    name = newName;
    value = newValue;
}

string Name_value :: getName() const
{
    return name;
}

int Name_value :: getValue() const
{
    return value;
}

// Function prototypes
void addName (vector<Name_value>& nameList);

void printNames (vector<Name_value>& nameList);