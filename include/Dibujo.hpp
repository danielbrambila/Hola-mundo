#pragma once
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
 class Dibujo
{
private:
    fstream file;

public:
    Dibujo()
    {
        file.open("./assets/perro.txt");
    }
    Dibujo()
    {
        file.close();
    }
    void Dibujar()
    {
        string line;
        while (getline(file, line)){
       cout << line << endl;
       }
    