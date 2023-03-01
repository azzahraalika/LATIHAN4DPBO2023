# Saya [Azzahra Alika Putri Yudha] [2105899]
# mengerjakan LATIHAN 3 dalam mata kuliah Desain Pemrograman Berorientasi Objek
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
# Aamiin.


# class Siak adalah anak dari class Human dan orangtua dari class Mahasiswa dan Dosen
# agar bisa mengakses atribut yang ada pada class Mahasiswa maka harus import dulu
from Human import Human 

# agar class Siak bisa memakai atribut class Human
class Siak(Human):

    # terdapat 2 atribut yang di set private dan public
    # yaitu universitas dan email
    __univ = ""
    __email = ""

    def __init__(self, univ = "", email = ""):
        self.__univ = univ
        self.__email = email

    # DIBAWAH INI METHOD SETTER GETTER CLASS SIAK
    
    def getUniv(self):
        return self.__univ

    def setUniv(self, univ):
        self.__univ = univ

    def getEmail(self):
        return self.__email

    def setEmail(self, email):
        self.__email = email
