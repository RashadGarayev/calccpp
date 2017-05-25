#include <iostream>
using namespace std;

int main(){
int input;
    cout<<"1) Toplama"<<endl;
    cout<<"2) Cixma"<<endl;
    cout<<"3) Vurma"<<endl;
    cout<<"4) Bolme"<<endl;
    cout<<"5) Modul"<<endl;
    cout<<"6) Faiz"<<endl;
    cout<<"Yuxaridaki emeliyyatlardan birini secin : ";
    cin>>input;

    switch(input){
    case 1:
        float a,b,cavab;
        cout<<endl<<"Siz Toplama emeliyyatini secdiniz";
        cout<<endl<<"Ilk ededi yazin : ";
        cin>>a;
        cout<<"Ikinci ededi yazin : ";
        cin>>b;
        cavab=a+b;
        cout<<endl<<"Cavab : "<<cavab;
        break;
    case 2:{
        int a,b,cavab;
        cout<<endl<<"Siz cixma emeliyyatini secdiniz";
        cout<<endl<<"Ilk ededi yazin : ";
        cin>>a;
        cout<<"Ikinci ededi yazin : ";
        cin>>b;
        cavab=a-b;
        cout<<endl<<"Cavab : "<<cavab;
        break;
    }
    case 3:{
        int a,b,cavab;
        cout<<endl<<"Siz vurma emeliyyatini secdiniz";
        cout<<endl<<"Ilk ededi yazin : ";
        cin>>a;
        cout<<"Ikinci ededi yazin : ";
        cin>>b;
        cavab=a*b;
        cout<<endl<<"Cavab : "<<cavab;
        break;
    }
    case 4:{
        float a,b,cavab;
        cout<<endl<<"Siz bolme emeliyyatini secdiniz";
        cout<<endl<<"Ilk ededi yazin : ";
        cin>>a;
        cout<<"Ikinci ededi yazin : ";
        cin>>b;
        cavab=a/b;
        cout<<endl<<"Cavab : "<<cavab;
        break;
    }
    case 5:{
        int a,b;
        cout<<endl<<"Siz Modul emeliyyatini secdiniz";
        cout<<endl<<"Ilk ededi yazin : ";
        cin>>a;
        cout<<"Ikinci ededi yazin : ";
        cin>>b;
        cavab=(a%b);
        cout<<endl<<"Qaliq : "<<cavab;
        break;
    }
    case 6:{
        float a,b;
        cout<<endl<<"Siz Faiz emeliyyatini secdiniz";
        cout<<endl<<"faizi tapilacaq eded : ";
        cin>>a;
        cout<<"faiz : ";
        cin>>b;
        cavab=(a*b/100);
        cout<<endl<<"Cavab : "<<cavab;
        break;
    }
    default:{
    cout<<"Secdiyiniz, emeliyyat xaricindedir";

    }

        }
    return 0;
}
