#ifndef ENIGMA_H
#define ENIGMA_H
#include<iostream>
#include<string>
using namespace std;
class enigma
{
    public:
        string alfabeto="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string rotor1="EKMFLGDQVZNTOWYHXUSPAIBRCJ";
        string rotor2="AJDKSIRUXBLHWTMCQGZNPYFVOE";
        string rotor3="BDFHJLCPRTXVZNYEIWGAKMUSQO";
        string reflector="YRUHQSLDPXNGOKMIEBFZCWVJAT";
        enigma(string);
        string cifrar(string);
        string descifrar(string);
    private:
        string clave;
};


#endif // ENIGMA_H
