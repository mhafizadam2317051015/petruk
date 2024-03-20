#include <iostream> 
using namespace std;

class Mahasiswa{
	public:
		string nama, npm;
};

int main(){
	Mahasiswa Mhs;
	
	cin >> Mhs.nama;
	cin >> Mhs.npm;
	
	cout << Mhs.nama << " " << Mhs.npm;
























#include <iostream> 
using namespace std;

struct Mahasiswa{
	public:
		string nama, npm;
		
		void Perkenalan(){
			cout << "Nama: " << nama << endl;
			cout << "NPM: " << nama << endl;
		}
};

int main(){
	Mahasiswa Mhs;
	
	cin >> Mhs.nama;
	cin >> Mhs.npm;
	
	mhs.perkenalan();
}\





















#include <iostream> 
using namespace std;

struct Mahasiswa{
	public:
		string nama, npm;
		
		Mahasiswa(){
			this->nama = nama;
			this->npm = b;
		}
};

int main(){
	Mahasiswa Mhs("Reza","2117");
	
	cout << "Nama: " << Mhs.nama << endl;
	cout << "Npm: " << Mhs.npm << endl;
}
























#include <iostream> 
using namespace std;

struct Mahasiswa{
	private:
		string nama;
	
	public:
		void setNama(string nama) {
			this->nama = nama;
		}
		
		string getNama() {
			return nama;
		}
};

int main(){
	Mahasiswa Mhs;
	
	mhs.setNama("Anta");
	
	cout << "Nama: " << Mhs.getNama() << endl;
}
