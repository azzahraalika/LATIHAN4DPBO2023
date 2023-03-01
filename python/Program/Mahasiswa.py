# Saya [Azzahra Alika Putri Yudha] [2105899]
# mengerjakan LATIHAN 3 dalam mata kuliah Desain Pemrograman Berorientasi Objek
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
# Aamiin.


# class Mahasiswa adalah anak class Siak dan cucu dari class Human
# agar bisa mengakses atribut Siak maka harus import dulu
from Siak import Siak

#karena mahasiswa has a course maka harus import class Course
from Course import Course

# agar class Mahasiswa bisa memakai atribut class Human
class Mahasiswa(Siak):

    # terdapat 2 atribut yang di set private dan public 
    # yaitu prodi dan fakultas
    # dan atribut course yang composite dengan class Course yang di set private dan public

    __prodi = ""
    __fakultas = ""
    __course = Course()

    def __init__(self, prodi = "", fakultas = "", course = Course()):
        self.__prodi = prodi
        self.__fakultas = fakultas
        self.__course = course

    # DIBAWAH INI METHOD SETTER GETTER CLASS MAHASISWA

    def getProdi(self):
        return self.__prodi

    def setProdi(self, prodi):
        self.__prodi = prodi

    def getFakultas(self):
        return self.__fakultas

    def setFakultas(self, fakultas):
        self.__fakultas = fakultas

    def getCourse(self):
        return self.__course

    def setCourse(self, course):
        self.__course = course