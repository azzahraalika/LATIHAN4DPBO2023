# Saya [Azzahra Alika Putri Yudha] [2105899]
# mengerjakan LATIHAN 3 dalam mata kuliah Desain Pemrograman Berorientasi Objek
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
# Aamiin.

# class Prodi dia has a course maka dari itu harus import class Course agar bisa mengakses atribut
from Course import Course

class Prodi:

    # terdapat 2 atribut yang di set private dan public 
    # yaitu namaProdi, kode
    # terdapat 1 atribut dimana dia composite dengan class Course

    __namaProdi = ""
    __kode = ""
    __course = Course()

    def __init__(self, namaProdi = "", kode = "", course = Course()):
        self.__namaProdi = namaProdi
        self.__kode = kode
        self.__course = course
        

    # DIBAWAH INI METHOD SETTER GETTER DALAM CLASS PRODI
    
    def getNamaProdi(self):
        return self.__namaProdi

    def setNamaProdi(self, namaProdi):
        self.__namaProdi = namaProdi

    def getKode(self):
        return self.__kode

    def setKode(self, kode):
        self.__kode = kode

    def getCourse(self):
        return self.__course

    def setCourse(self, course):
        self.__course = course
