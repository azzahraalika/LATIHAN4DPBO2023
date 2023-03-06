/*
Saya [Azzahra Alika Putri Yudha] [2105899]
mengerjakan LATIHAN 2 dalam mata kuliah Desain Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/

#include <iostream>
#include <string>

//class Course dimana class ini akan composite dengan class Prodi, Mahasiswa dan Dosen

using namespace std;

class Course{
    
    //terdapat 1 atribut didalam class Course yang di set private dan public
    //atribut itu terdiri dari matkul 

    private:
    string matkul;

    public:

    //KONSTRUKTOR
    Course(){
        
    }

    Course(string matkul){
        this->matkul = matkul;
    }

    //DIBAWAH INI ADALAH SETTER GETTER ATRIBUT DI CLASS COURSE

    void setMatkul(string matkul){
        this->matkul = matkul;
    }

    string getMatkul(){
        return this->matkul;
    }

    //DESTRUKTOR
    ~Course(){
        
    }
};