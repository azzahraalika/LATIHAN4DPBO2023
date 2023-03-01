# Saya [Azzahra Alika Putri Yudha] [2105899]
# mengerjakan LATIHAN 3 dalam mata kuliah Desain Pemrograman Berorientasi Objek
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
# Aamiin.

# mengimport class untuk inputan dan output
from Prodi import Prodi
from Course import Course
from Mahasiswa import Mahasiswa
from Dosen import Dosen

# deklas list untuk array of object course yang akan ditampilkan pada data prodi
list = []

# hardcode nama mata kuliah 
course1 = Course("Analisis dan Desain Algoritma")
course2 = Course("Desain Pemrograman Berorientasi Objek")
course3 = Course("Metode Penelitian")
course4 = Course("Big Data")
course5 = Course("Sistem Operasi")
course6 = Course("Program Visual dan Piranti Bergerak")
course7 = Course("Proyek Konsultasi")

# memasukkan hardcode nama mata kuliah kedalam list yang sudah dibuat
list.append(course1)
list.append(course2)
list.append(course3)
list.append(course4)
list.append(course5)
list.append(course6)
list.append(course7)

# hardcode untuk data prodi, terdapat list dipanggil pada parameter
# maksutnya adalah memanggil list yang berisi nama2 mata kuliah
prodi = Prodi("Ilmu Komputer", "IK", list)

# meminta keluaran setelah proses inputan
print("=@=@=@=@=@=@=  DATA PROGRAM STUDI DAN MATA KULIAH  =@=@=@=@=@=@=")
print(" ")
print("Nama Program Studi  : " + prodi.getNamaProdi())
print("Kode                : " + prodi.getKode())
print("Daftar Mata Kuliah di Program Studi " + prodi.getNamaProdi())
print(" ")

# looping untuk print list berisi nama2 mata kuliah
for i in range(len(list)):
    print("    - " + list[i].getMatkul())
print(" ")

# hardcode nama mata kuliah untuk data dosen 
dos = Course("Program Visual dan Piranti Bergerak")

dosen = Dosen()
dosen.setNama("Doyoung Kim")
dosen.setNik("0102962020")
dosen.setFakultas("FPMIPA")
dosen.setProdi("Ilmu Komputer")
dosen.setUniv("Universitas Pendidikan Indonesia")
dosen.setEmail("doy96@upi.edu")
dosen.setKelamin("L")
dosen.setPendidikan("S2")
dosen.setKeahlian("Menguasai segala macam bahasa pemrograman dan ganteng")

# karena dosen udah composite sama course makanya tinggal manggil si atribut course aja 
dosen.setCourse(dos)

# meminta keluaran untuk data dosen
print("=@=@=@=@=@=@=  DATA DOSEN  =@=@=@=@=@=@=")
print(" ")
print("Nama                 : " + dosen.getNama())
print("NIP                  : " + dosen.getNik())
print("Program Studi        : " + dosen.getProdi())
print("Fakultas             : " + dosen.getFakultas())
print("Universitas          : " + dosen.getUniv())
print("Pendidikan Terakhir  : " + dosen.getPendidikan())
print("Keahlian             : " + dosen.getKeahlian())

# karena composite makanya manggilnya bertahap dari si getCourse yang ada di class dosen
# baru ke class Course yaitu getMatkul
print("Matkul yang diampu   : " + dosen.getCourse().getMatkul())
print("Email                : " + dosen.getEmail())
print("Kelamin              : " + dosen.getKelamin())
print(" ")

# membuat list untuk array of object data mahasiswa
list1 = []

# hardcode nama mata kuliah
maha1 = Course("Desain Pemrograman Berorientasi Objek")
maha2 = Course("Proyek Konsultasi")
maha3 = Course("Metode Penelitian")

# memasukkan hardcode nama mata kuliah kedalam list 
list1.append(maha1)
list1.append(maha2)
list1.append(maha3)

# hardcode untuk data mahasiswa
mhs = Mahasiswa()
mhs.setNama("Haikal Lee")
mhs.setNik("21060600")
mhs.setFakultas("FPMIPA")
mhs.setProdi("Ilmu Komputer")
mhs.setUniv("Universitas Pendidikan Indonesia")
mhs.setEmail("haikal00@upi.edu")
mhs.setKelamin("L")
mhs.setCourse(list1)

# meminta keluaran untuk data mahasiswa
print("=@=@=@=@=@=@=  DATA MAHASISWA  =@=@=@=@=@=@=")
print(" ")
print("Nama                 : " + mhs.getNama())
print("NIM                  : " + mhs.getNik())
print("Program Studi        : " + mhs.getProdi())
print("Fakultas             : " + mhs.getFakultas())
print("Universitas          : " + mhs.getUniv())
print("Email                : " + mhs.getEmail())
print("Kelamin              : " + mhs.getKelamin())
print("Mata Kuliah yang dikontrak")
print(" ")

# looping untuk print list nama mata kuliah 
for i in range(len(list1)):
    print("   - " + list1[i].getMatkul())