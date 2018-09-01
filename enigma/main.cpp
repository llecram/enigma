#include "enigma.h"
int main()
{
    //string b;
    //cout<<"ingrese el mensaje: "<<endl;
    //cin>>b;
    string a="A";
    string x="CAZA";
    string y="YAPA";
    string z="MURCIELAGO";
    string c;
    cout<<"ingrese la clave: "<<endl;
    cin>>c;
    enigma eni(c);
    cout<<eni.cifrar(a)<<endl;
    cout<<eni.cifrar(x)<<endl;
    cout<<eni.cifrar(y)<<endl;
    cout<<eni.cifrar(z)<<endl;
    /*int clave;
    cout<<"ingrese el mensaje: "<<endl;
    cin>>b;
    cout<<endl;
    cout<<"ingrese la clave: "<<endl;
    cin>>clave;
    cout<<endl;
   cesar cifrar(clave);
   string resultado=cifrar.cifrar(b);
   cesar descifrar(clave);
   string result=descifrar.descifrar(resultado);
   cout<<resultado<<endl;
   cout<<result;*/
}
