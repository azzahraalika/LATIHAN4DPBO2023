/*
Saya [Azzahra Alika Putri Yudha] [2105899]
mengerjakan LATIHAN 2 dalam mata kuliah Desain Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/


#include <iostream>
#include <string>

//class Siak akan menjadi anak dari class Human dan Orangtua dari class Mahasiswa dan Dosen

using namespace std;

//cara agar Siak bisa mengakses atribut Human 
class Siak : public Human{

    //Terdapat 2 atribut yang di set public dan private pada class Siak
    //yaitu ada atribut universitas dan email 

    private:
    string univ;
    string email;

    public:

    //KONSTRUKTOR
    Siak(){
        
    }

    Siak(string univ, string email){
        this->univ = univ;
        this->email = email;
    }

    //DIBAWAH INI ADALAH SETTER GETTER YANG ADA PADA CLASS SIAK
    
    void setUniv(string univ){
        this->univ = univ;
    }

    string getUniv(){
        return this->univ;
    }

    void setEmail(string email){
        this->email = email;
    }

    string getEmail(){
        return this->email;
    }

    //DESTRUKTOR
    ~Siak(){
        
    }
};
