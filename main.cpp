#include <iostream>
using namespace std;

int main(){
    float a=0, b=0, c=0;
    float Triangolo=0, Quadrato=0, Rettangolo=0, Trapezio=0;
    cout<<"Inserisci i tre vertici"<<endl;
    cin >> a >> b >> c;
    Triangolo=(a*b)/2;
    Quadrato=a*a;
    Rettangolo=a*b;
    Trapezio=((a+b)*c)/2;
    cout<<"l'area del triangolo e' "<<Triangolo<<endl;
    cout<<"l'area del Quadrato e' "<<Quadrato<<endl;
    cout<<"l'area del Rettangolo e' "<<Rettangolo<<endl;
    cout<<"l'area del Trapezio e' "<<Trapezio<<endl;
    return 0;
}
