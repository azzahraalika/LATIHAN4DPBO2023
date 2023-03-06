/*
Saya [Azzahra Alika Putri Yudha] [2105899]
mengerjakan LATIHAN 2 dalam mata kuliah Desain Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/

#include <iostream>
#include <string>

//memanggil semua class karena nyoba disetiap file dipanggil itu error redefinition
#include "Human.cpp"
#include "Siak.cpp"
#include "Course.cpp"
#include "Mahasiswa.cpp"
#include "Dosen.cpp"
#include "Prodi.cpp"


using namespace std;


int main(){

    //memanggil course untuk hardcode yang nanti akan dimasukkin ke list untuk data prodi
    Course c1;
    Course c2;
    Course c3;
    Course c4;
    Course c5;
    Course c6;
    Course c7;

    //membuat list untuk course
    list<Course> llist;

    //hardcode untuk masukkan list matkul
    c1.setMatkul("Analisis dan Desain Algoritma");
    c2.setMatkul("Program Visual dan Piranti Bergerak");
    c3.setMatkul("Proyek Konsultasi");
    c4.setMatkul("Metode Penelitian");
    c5.setMatkul("Desain Pemrograman Berorientasi Objek");
    c6.setMatkul("Sistem Operasi");
    c7.setMatkul("Big Data");

    //memasukkan list matkul yang sudah di hardcode kedalam list yang sudah dibuat
    llist.push_back(c1);
    llist.push_back(c2);
    llist.push_back(c3);
    llist.push_back(c4);
    llist.push_back(c5);
    llist.push_back(c6);
    llist.push_back(c7);

    //hardcode class Prodi untuk data prodi dan memanggil list course
    Prodi prodi("Ilmu Komputer", "IK", llist);

    //meminta keluaran dari data yang sudah di hardcode
    cout << "=@=@=@=@=@=@=  DATA PROGRAM STUDI DAN MATA KULIAH  =@=@=@=@=@=@=" << "\n\n";
    cout << "Nama Program Studi  : " << prodi.getNamaProdi() << '\n';
    cout << "Kode                : " << prodi.getKode() << '\n';
    cout << "Daftar Mata Kuliah di Program Studi " << prodi.getNamaProdi() <<"\n\n";

    //looping untuk print isi list course
    for(list<Course>::iterator it = llist.begin(); it != llist.end(); it++){
        cout << "    - " << it->getMatkul() << '\n';
    }

    cout << '\n';

    //memanggil class dosen dan course untuk hardcode data dosen
    Course dos;
    Dosen dosen;

    //hardcode course untuk data dosen, nanti akan dipanggol di setCourse
    dos.setMatkul("Program Visual dan Piranti Bergerak");

    //hardcoce untuk data dosen
    dosen.setNama("Doyoung Kim, S.Kom., M.Kom.");
    dosen.setNik("0102962020");
    dosen.setFakultas("FPMIPA");
    dosen.setProdi("Ilmu Komputer");
    dosen.setUniv("Universitas Pendidikan Indonesia");
    dosen.setEmail("doy96@upi.edu");
    dosen.setKelamin("Laki-Laki");
    dosen.setPendidikan("S2");
    dosen.setKeahlian("Menguasai segala macam bahasa pemrograman dan hati perempuan");

    //memanggil hardcode course 
    dosen.setCourse(dos);

    //meminta keluaran hasil dari hardcode data dosen
    cout << "=@=@=@=@=@=@=  DATA DOSEN  =@=@=@=@=@=@=" << "\n\n";
    cout << "Nama                 : " << dosen.getNama() << '\n';
    cout << "NIP                  : " << dosen.getNik() << '\n';
    cout << "Program Studi        : " << dosen.getProdi() << '\n';
    cout << "Fakultas             : " << dosen.getFakultas() << '\n';
    cout << "Universitas          : " << dosen.getUniv() << '\n';
    cout << "Pendidikan Terakhir  : " << dosen.getPendidikan() << '\n';
    cout << "Keahlian             : " << dosen.getKeahlian() << '\n';

    //untuk meminta keluaran dari matkul harus akses getCourse yang ada di class Dosen baru bisa getMatkul yang ada di class Course
    //jadi bertahap 
    cout << "Matkul yang diampu   : " << dosen.getCourse().getMatkul() << '\n';
    cout << "Email                : " << dosen.getEmail() << '\n';
    cout << "Kelamin              : " << dosen.getKelamin() << '\n';
    cout << '\n';

    //memanggil course untuk hardcode matkul yang akan dimasukkan list untuk data mahasiswa
    Course maha1;
    Course maha2;
    Course maha3;

    //membuat list untuk hardcode list matkul
    list<Course> lis;

    //hardcode matkul untuk data mahasiswa
    maha1.setMatkul("Desain Pemrograman Berorientasi Objek");
    maha2.setMatkul("Proyek Konsultasi");
    maha3.setMatkul("Metode Penelitian");

    //memasukkan hardcode kedalam list yang sudah dibuat
    lis.push_back(maha1);
    lis.push_back(maha2);
    lis.push_back(maha3);

    //memanggil mahasiswa untuk memasukkan data yang akan dipakai di data mahasiswa
    Mahasiswa mhs;
    
    //hardcode untuk data mahasiswa
    mhs.setNama("Haikal Lee");
    mhs.setNik("21060600");
    mhs.setFakultas("FPMIPA");
    mhs.setProdi("Ilmu Komputer");
    mhs.setUniv("Universitas Pendidikan Indonesia");
    mhs.setEmail("haikal00@upi.edu");
    mhs.setKelamin("Laki-Laki");

    //memanggil list matkul yang sudah di hardcode untuk data mahasiswa
    mhs.setCourse(lis);

    //meminta keluaran untuk data mahasiswa
    cout << "=@=@=@=@=@=@=  DATA MAHASISWA  =@=@=@=@=@=@=" << "\n\n";
    cout << "Nama                 : " << mhs.getNama() << '\n';
    cout << "NIM                  : " << mhs.getNik() << '\n';
    cout << "Program Studi        : " << mhs.getProdi() << '\n';
    cout << "Fakultas             : " << mhs.getFakultas() << '\n';
    cout << "Universitas          : " << mhs.getUniv() << '\n';
    cout << "Email                : " << mhs.getEmail() << '\n';
    cout << "Kelamin              : " << mhs.getKelamin() << '\n';
    cout << "Mata kuliah yang dikontrak" << "\n\n";

    //looping untuk print list yang sudah di hardcode untuk data mahasiswa
    for(list<Course>::iterator it = lis.begin(); it != lis.end(); it++){
        cout << "    - " << it->getMatkul() << '\n';
    }


    return 0;

};