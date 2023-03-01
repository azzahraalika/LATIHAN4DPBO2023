# Saya [Azzahra Alika Putri Yudha] [2105899]
# mengerjakan LATIHAN 3 dalam mata kuliah Desain Pemrograman Berorientasi Objek
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
# Aamiin.


# class Dosen adalah anak class Siak dan cucu dari class Human
# agar bisa mengakses atribut Siak maka harus import dulu
from Siak import Siak

#karena dosen has a course maka harus import class Course agar bisa mengakses atribut
from Course import Course

# agar class Dosen bisa memakai atribut class Human
class Dosen(Siak):

    # terdapat 4 atribut yang di set private dan public 
    # yaitu prodi, fakultas, pendidikan terakhir dan keahlian
    # terdapat 1 atribut course yang dimana dia composite dengan class Course

    __prodi = ""
    __fakultas = ""
    __pendidikan = ""
    __keahlian = ""
    __course = Course()

    def __init__(self, prodi = "", fakultas = "", pendidikan = "", keahlian = "", course = Course()):
        self.__prodi = prodi
        self.__fakultas = fakultas
        self.__pendidikan = pendidikan
        self.__keahlian = keahlian
        self.__course = course

    # DIBAWAH INI METHOD SETTER GETTER CLASS DOSEN

    def getProdi(self):
        return self.__prodi

    def setProdi(self, prodi):
        self.__prodi = prodi

    def getFakultas(self):
        return self.__fakultas

    def setFakultas(self, fakultas):
        self.__fakultas = fakultas

    def getPendidikan(self):
        return self.__pendidikan

    def setPendidikan(self, pendidikan):
        self.__pendidikan = pendidikan

    def getKeahlian(self):
        return self.__keahlian

    def setKeahlian(self, keahlian):
        self.__keahlian = keahlian
    
    def getCourse(self):
        return self.__course

    def setCourse(self, course):
        self.__course = course
