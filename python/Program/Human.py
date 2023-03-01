# Saya [Azzahra Alika Putri Yudha] [2105899]
# mengerjakan LATIHAN 3 dalam mata kuliah Desain Pemrograman Berorientasi Objek
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
# Aamiin.


# class Human dimana menjadi orangtua dari class Siak dan nenek dari class Mahasiswa dan Dosen
class Human:

    # terdapat 3 atribut yang di set private dan public 
    # yaitu nama, nik dan jenis kelamin

    __nama = ""
    __nik = ""
    __kelamin = ""

    def __init__(self, nama = "", nik = "", kelamin = ""):
        self.__nama = nama
        self.__nik = nik
        self.__kelamin = kelamin

    # DIBAWAH INI METHOD SETTER GETTER DALAM CLASS HUMAN
    
    def getNama(self):
        return self.__nama

    def setNama(self, nama):
        self.__nama = nama

    def getNik(self):
        return self.__nik

    def setNik(self, nik):
        self.__nik = nik

    def getKelamin(self):
        return self.__kelamin

    def setKelamin(self, kelamin):
        self.__kelamin = kelamin
