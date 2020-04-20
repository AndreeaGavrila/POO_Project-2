#include <iostream>
#include <exception>
#include "Complex.h"
#include "Vector.h"
#include "Stiva.h"
#include "Coada.h"

using namespace std;

int main()
{
    try {
        Complex x(0,0);
    }
    catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }


    int n;

    //  n obiecte Complex
    cout << "\nCate obiecte de tipul Nr Complex doriti: ";  cin >> n;
    Complex* complexe = new Complex[n];
    for (int i = 0; i < n; i++) {
        cin >> complexe[i];
    }
    for (int i = 0; i < n; i++) {
        cout << complexe[i] << " " << "Nr este pur imaginar: " << complexe[i].eImaginar() << endl;
    }

 

    ////  n obiecte Vector nu mai functioneaza pt ca Vector e clasa abstracta
    //cin >> n;
    //Vector* vectori = new Vector[n];
    //for (int i = 0; i < n; i++) {
    //    cin >> vectori[i];
    //}
    //for (int i = 0; i < n; i++) {
    //    cout << vectori[i] << " ";
    //}


    //  n obiecte Stiva
    cout << "\nCate obiecte de tipul Stiva doriti: ";  cin >> n;
    Stiva* stive = new Stiva[n];
    for (int i = 0; i < n; i++) {
        cin >> stive[i];
    }
    for (int i = 0; i < n; i++) {
        cout << stive[i] << " " << "Stiva este pur imaginar: " << stive[i].purImaginar() << endl;
    }


    //Verific operatiile de push si pop ale stivei:
    cout<<"\nVerific operatiile de push si pop ale primei stive: "<< stive[0] << endl;
    Complex c; cout << "Citesc un nr complex c: ";  cin >> c; cout << "c= " << c << endl;
    Complex cc; cout << "Citesc un nr complex cc: ";  cin >> cc; cout << "cc= " << cc << endl;
   
    stive[0].push(c);
    cout <<"Adaug nr c in stiva: " << stive[0] << endl;
    stive[0].push(cc);
    cout << "Adaug nr cc in stiva: " << stive[0] << endl;
    stive[0].pop();
    cout << "Sterg nr din stiva: " << stive[0] << endl;
    stive[0].pop();
    cout << "Sterg nr din stiva: " << stive[0] << endl<<endl;



    //  n obiecte Coada
    cout << "\nCate obiecte de tipul Coada doriti: ";  cin >> n;
    Coada* cozi = new Coada[n];
    for (int i = 0; i < n; i++) {
        cin >> cozi[i];
    }
    for (int i = 0; i < n; i++) {
        cout << cozi[i] << " " << "Coada este pur imaginar: " << cozi[i].purImaginar() << endl;
    }


    //Verific operatiile de push si pop ale cozii:
    cout << "\nVerific operatiile de push si pop ale primei cozi: " << cozi[0] << endl;
    cout << "Citesc un nr complex c: ";  cin >> c; cout << "c= " << c << endl;
    cout << "Citesc un nr complex cc: ";  cin >> cc; cout << "cc= " << cc << endl;

    cozi[0].push(c);
    cout << "Adaug nr c in coada: " << cozi[0] << endl;
    cozi[0].push(cc);
    cout << "Adaug nr cc in coada: " << cozi[0] << endl;
    cozi[0].pop();
    cout << "Sterg nr din coada: " << cozi[0] << endl;
    cozi[0].pop();
    cout << "Sterg nr din coada: " << cozi[0] << endl;


    return 0;
}