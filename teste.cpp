#include <iostream>
#include <cmath>
//Nome:Kaled Fajardo Ibrahim
using namespace std;
int main()
{const float pi=3.1415926535897;
 float r,h,v,v2;
cout<< "Entre com o raio da lata(cm):";
cin >> r;
while(r<0){
    cout<< "Somente valores >=0 sao permitidos."<<endl;
    cout<<"Entre com o raio da lata(cm):";
    cin >> r;}
    cout<<"Entre com a altura da lata(cm):";
    cin >> h;
    while(h<0){
            cout<< "Somente valores >=0 sao permitidos."<<endl;
            cout<< "Entre com a altura da lata(cm):";
            cin >> h;}
            while(r>0 && h>0 ){
                v=pi*(r*r)*h;
                v2= v*(pow(10,-3) );
                cout<<"Volume da lata="<<v<<"cm3"<<"="<< v2 <<" litros"<<endl;
                cout<<endl;
                cout<<"Entre com o raio da lata(cm):";
                cin>>r;
                while(r<0){
                        cout<< "Somente valores >=0 sao permitidos."<<endl;
                        cout<<"Entre com o raio da lata(cm):";
                        cin >> r;}
                        cout<<"Entre com a altura da lata(cm):";
                        cin >> h;
                        while(h<0){
                                cout<< "Somente valores >=0 sao permitidos."<<endl;
                                cout<< "Entre com a altura da lata(cm):";
                                cin >> h;}



            }









return 0;

}