/*
Saya [Azzahra Alika Putri Yudha] [2105899]
mengerjakan LATIHAN 2 dalam mata kuliah Desain Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/

#include <iostream>
#include <string>

//class Human dimana class ini akan menjadi orangtua dari class Siak dan nenek dari  class Mahasiswa dan Dosen

using namespace std;

class Human{
    
    //terdapat 3 atribut didalam class Human yang di set private dan public
    //atribut itu terdiri dari NIK, Nama, dan Jenis Kelamin 

    private:
    string nik;
    string nama;
    string kelamin;

    public:

    //KONSTRUKTOR 
    Human(){
        
    }

    Human(string nik, string nama, string kelamin){
        this->nik = nik;
        this->nama = nama;
        this->kelamin = kelamin;
    }

    //DIBAWAH INI ADALAH SETTER GETTER ATRIBUT DI CLASS HUMAN

    void setNik(string nik){
        this->nik = nik;
    }

    string getNik(){
        return this->nik;
    }

    void setNama(string nama){
        this->nama = nama;
    }

    string getNama(){
        return this->nama;
    }

    void setKelamin(string kelamin){
        this->kelamin = kelamin;
    }

    string getKelamin(){
        return this->kelamin;
    }

    //DESTRUKTOR
    ~Human(){
        
    }
};