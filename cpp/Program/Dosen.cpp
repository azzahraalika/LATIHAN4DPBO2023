/*
Saya [Azzahra Alika Putri Yudha] [2105899]
mengerjakan LATIHAN 2 dalam mata kuliah Desain Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/


#include <iostream>
#include <string>

//class Dosen dimana menjadi anak dari class SIak dan cucu dari class Human

using namespace std;

//cara agar class Dosen dapat mengakses atribut class Siak
class Dosen : public Siak{

    //terdapat 5 atribut private dan public yang ada pada class Mahasiswa
    //yaitu atribu Program Studi atau prodi, fakultas, pendidikan akhir, keahlian dan
    //atribut course yang composite dengan class Course 

    private:
    string prodi;
    string fakultas;
    string pendidikan;
    string keahlian;

    //memanggil class Course untuk composite 
    Course course;

    public:

    //KONSTRUKTOR
    Dosen(){
        
    }

    Dosen(string prodi, string fakultas, string pendidikan, string keahlian, Course course){
        this->prodi = prodi;
        this->fakultas = fakultas;
        this->pendidikan = pendidikan;
        this->keahlian = keahlian;
        this->course = course;
    }

    //DIBAWAH INI ADALAH SETTER GETTER ATRIBUT PADA CLASS DOSEN
    
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

    void setPendidikan(string pendidikan){
        this->pendidikan = pendidikan;
    }

    string getPendidikan(){
        return this->pendidikan;
    }

    void setKeahlian(string keahlian){
        this->keahlian = keahlian;
    }

    string getKeahlian(){
        return this->keahlian;
    }

    void setCourse(Course course){
        this->course = course;
    }

    Course getCourse(){
        return this->course;
    }

    //DESTRUKTOR 
    ~Dosen(){
        
    }
};

