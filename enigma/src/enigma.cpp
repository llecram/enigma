#include "enigma.h"
enigma::enigma(string b){
    clave=b;
}
string enigma::cifrar(string a){
   string rslt;
    for(int i=0;i<a.size();i++){
        string a1;
        a1=rotor3[alfabeto.find(a[i])];
        string a2;
        a2=rotor2[alfabeto.find(a1)];
        string a3;
        a3=rotor1[alfabeto.find(a2)];
        string a4;
        a4=reflector[alfabeto.find(a3)];
        string a5;
        a5=alfabeto[rotor1.find(a4)];
        string a6;
        a6=alfabeto[rotor2.find(a5)];
        string a7;
        a7=alfabeto[rotor3.find(a6)];
        rslt+=a7;
    }
    return rslt;
}
string enigma::descifrar(string a){
    string rslt;
    return rslt;
}
