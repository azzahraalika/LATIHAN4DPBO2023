# Saya [Azzahra Alika Putri Yudha] [2105899]
# mengerjakan LATIHAN 3 dalam mata kuliah Desain Pemrograman Berorientasi Objek
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
# Aamiin.


# class Course disini dia hubungannya composite dengan class Prodi, Mahasiswa, dan Dosen
class Course:

    # terdapat 1 atribut yang di set private dan public 
    # yaitu matkul

    __matkul = ""
   
    def __init__(self, matkul = ""):
        self.__matkul = matkul

    # DIBAWAH INI METHOD SETTER GETTER DALAM CLASS COURSE
    
    def getMatkul(self):
        return self.__matkul

    def setMatkul(self, matkul):
        self.__matkul = matkul
