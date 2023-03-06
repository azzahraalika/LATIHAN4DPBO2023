/*
Saya [Azzahra Alika Putri Yudha] [2105899]
mengerjakan LATIHAN 2 dalam mata kuliah Desain Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/


#include <iostream>
#include <string>

//class Mahasiswa dimana menjadi anak dari class Siak dan cucu dari class Human

using namespace std;

//cara agar class Mahasiswa dapat mengakses atribut class Siak
class Mahasiswa : public Siak{

    //terdapat 3 atribut private dan public yang ada pada class Mahasiswa
    //yaitu atribut Program Studi atau prodi, fakultas dan course yang composite dengan Class course

    private:
    string prodi;
    string fakultas;

    //tipedatanya list agar sama kayak di main jadi ga error 
    //karena nanti di main masukkannya dimasukkin ke list 
    list<Course> course;

    public:

    //KONSTRUKTOR
    Mahasiswa(){
        
    }

    Mahasiswa(string prodi, string fakultas, list<Course>){
        this->prodi = prodi;
        this->fakultas = fakultas;
        this->course = course;
    }

    //DIBAWAH INI ADALAH SETTER GETTER ATRIBUT PADA CLASS MAHASISWA
    
    void setProdi(string prodi){
        this->prodi = prodi;
    }

    string getProdi(){
        return this->prodi;
    }

    void setFakultas(string fakultas){
        this->fakultas = fakultas;
    }

    string getFakultas(){
        return this->fakultas;
    }

    void setCourse(list<Course>){
        this->course = course;
    }

    list<Course> getCourse(){
        return this->course;
    }

    //DESTRUKTOR
    ~Mahasiswa(){
        
    }
};

