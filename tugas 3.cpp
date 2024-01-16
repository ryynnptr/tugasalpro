#include <iostream>
using namespace std;
int main(){
    int bilangan;
    cout << "Masukan Bilangan :";
    cin >> bilangan;

    if (bilangan > 0){
        cout << "Bilangan ini Merupakan bilangan : ";

        if (bilangan % 2 == 0){
            cout << "Genap" << endl; 
        }

        else{
            cout << "Ganjil" << endl;

    

        cout << "Deret bilangan ganjil dari 1 hingga " << bilangan << " :";

        for (int i=1; i<=bilangan; i+=2){
            cout << i <<"";
        }

        cout<<endl;

        }


        } 

        //Jika bilangan tidak positif, program memberi pesan input tidak valid.
        else {
            cout <<"Input tidak Valid"<< endl;
        }

    return 0;

}
