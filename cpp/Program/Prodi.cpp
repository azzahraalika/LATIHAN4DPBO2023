/*
Saya [Azzahra Alika Putri Yudha] [2105899]
mengerjakan LATIHAN 2 dalam mata kuliah Desain Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/

#include <iostream>
#include <string>

//class Prodi dimana class ini akan composite dengan class Course

using namespace std;

class Prodi{
    
    //terdapat 3 atribut didalam class Human yang di set private dan public
    //atribut itu terdiri dari namaProdi, kode, dan  course 
    //untuk atribut course tipedatanya list karena di main nanti akan dimasukkan ke list 

    private:
    string namaProdi;
    string kode;
    list<Course> course;

    public:

    //KONSTRUKTOR
    Prodi(){
        
    }

    Prodi(string namaProdi, string kode, list<Course> course){
        this->namaProdi = namaProdi;
        this->kode = kode;
        this->course = course;
    }

    //DIBAWAH INI ADALAH SETTER GETTER ATRIBUT DI CLASS COURSE

    void setNamaProdi(string namaProdi){
        this->namaProdi = namaProdi;
    }

    string getNamaProdi(){
        return this->namaProdi;
    }

    void setKode(string kode){
        this->kode = kode;
    }

    string getKode(){
        return this->kode;
    }

    void setCourse(list<Course>){
        this->course = course;
    }

    list<Course> getCourse(){
        return this->course;
    }

    //DESTRUKTOR
    ~Prodi(){
        
    }
};