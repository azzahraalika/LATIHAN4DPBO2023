# LATIHAN4DPBO2023

## JANJI
Saya [Azzahra Alika Putri Yudha] [2105899] mengerjakan LATIHAN 4 dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## UML DIAGRAM
![latihan3UML drawio](https://user-images.githubusercontent.com/101117829/222184102-b4c1e610-2f2e-401c-922f-892ab956d7c6.png)

## DESAIN PROGRAM
Bisa dilihat dari diagram UML diatas bahwa dilatihan ini mengimplementasikan hierarki inheritance dan composite. 

Terdapat 6 class yaitu :
1. **class Human**

    Dimana Human adalah orangtua dari class Siak dan nenek dari class Mahasiswa dan Dosen. Terdapat 3 buah atribut yang di set private yaitu nama, NIK, dan jenis kelamin. 
    Dijadikan orangtua karena ada atribut di anaknya yang sama jadi Human dijadikan orangtua dari Siak dan nenek dari Mahasiswa dan Dosen. 

2. **class Siak**
  
    Dimana Siak adalah anak dari class Human dan orangtua dari class Mahasiswa dan Dosen. Terdapat 2 buah atribut yang di set private yaitu universitas dan email. 
    Dijadikan anak dari Human karena atribut mereka saling melengkapi dan atributnya pun dipakai untuk atribut anaknya yaitu class Mahasiswa dan Dosen.
  
3. **class Mahasiswa**
  
    Dimana Mahasiswa adalah anak dari class Siak dan cucu dari class Human, selain itu class Mahasiswa juga composite atau has a atribut yang dimiliki oleh class Course. Terdapat 3 atribut yang di set private yaitu program studi, fakultas, dan course yang composite dengan class Course. 
  Composite dengan course itu bertujuan untuk membuat list mata kuliah apa saja yang di kontrak oleh mahasiswa tersebut.
  
4. **class Dosen**
  
    Class Dosen adalah anak dari class Siak dan cucu dari class Human, selain itu class Dosen juga composite atau has a atribut yang dimiliki oleh class Course. Terdapat 5 atribut yang di set private yaitu program studi, fakultas, pendidikan terakhir, keahlian dan couse yang composite dengan class Course.
    Composite dengan class Course bertujuan untuk data dosen tersebut mengajar di mata kuliah apa. 
  
5. **class Prodi**

    Class Prodi hanya composite dengan class Course saja yang bertujuan untuk membuat list ada apa saja mata kuliah di program studi tersebut. Memiliki 3 atribut yang di set private yaitu nama program studi, kode, dan course yang composite dengan class Course.
  
6. **class Course**

    Class Course adalah composite ke berbagai class, ada class Mahasiswa, Dosen dan Prodi. Class Course hanya memiliki satu atribut yaitu atribut matkul. 
  
## ALUR PROGRAM
Alur program yang dibuat pada kedua bahasa ini sama, semua masukkannya di hardcode. 
Pada main akan memanggil 4 class yaitu class Course, Prodi, Mahasiswa dan Dosen. Untuk class course dipanggil untuk memberi masukkan dan nantinya dipakai pada class yang lain sebagai composite. Sedangkan 3 class yang lain di input secara hardcode dan diminta untuk print outputnya. 
Seperti hasil Screenshot dibawah ini

![(1)](https://user-images.githubusercontent.com/101117829/223185589-206dde57-ec26-4459-9496-0bfefcc655c2.PNG)

![(1)](https://user-images.githubusercontent.com/101117829/223185730-0cd174bf-7e79-45ab-89ec-e4d8712fed29.PNG)

