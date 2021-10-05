#include <iostream>
using namespace std;

class hotel
{
  private:
	char nama[20], alamat[20];
	int umur;
	int checkIn;
	int checkOut;
	double jumlahRoo;
	double jumlahRes;
	double jumlahLau;
	double jumlahArc,jumlahKid,jumlahExt;
	double jumlahGem;
	double jumlahGym;
	double jumlahAll;
	string a;
	int b;

  public:
	void input()
	{
		cout << "\v\t\t\t~Data Costumer~" << endl;
		cout << "\vmasukan nama anda: ";
		cin >> nama;
		cout << "masukan umur anda: ";
		cin >> umur;
		cout << "masukan alamat: ";
		cin >> alamat;
		cout << "masukan tanggal check-in: ";
		cin >> checkIn;
		cout << "masukan tanggal check-out: ";
		cin >> checkOut;
		cout << "Data anda suda kita masukan pilih(6)untuk melihat data anda" << endl;
	}
	
	//ruangan
	void ruangan()
	{
		int b;
		cout << "\v\t\t\t ~HotelRoom~" << endl;
		cout << "\vhotel kami memiliki ruangan yang nyaman untuk ditingali berikut type ruangan nya" << endl;
		cout << "\v\t\t~TypeRoom~" << endl;
		cout << "\n |A.Type 'A(VIP)' ------> Rp,100k/malam|" << endl;
		cout << " |B.Type 'B'      ------> Rp,50k/malam |" << endl;
		cout << " |C.Type 'C'      ------> Rp,30k/malam |" << endl;
		cout << " |D.Type 'D'      ------> Rp,20k/malam |" << endl;
		cout << " |E.Type 'E'      ------> Rp,10k/malam |" << endl;
		cout << " " << endl;
		cout << "pilih Type anda: ";
		cin >> a;
		cout << "anda ingin berapa malam: ";
		cin >> b;

		if (a == "A" or a == "a")
		{
			cout << "anda memilih Type 'A' " << endl;
			jumlahRoo = (100000 * b);
		}

		else if (a == "B" or a == "b")
		{
			cout << "anda memilih Type 'B' " << endl;
			jumlahRoo = (50000 * b);
		}

		else if (a ==  "C" or a == "c")
		{
			cout << "anda memilih Type 'C' " << endl;
			jumlahRoo = (30000 * b);
		}

		else if (a == "d" or a == "d")
		{
			cout << "anda memilih Type 'D' " << endl;
			jumlahRoo = (20000 * b);
		}

		else if (a == "E" or a == "e")
		{
			cout << "anda memilih Type 'E' " << endl;
			jumlahRoo = (10000 * b);
		}

		else
		{
			cout << "tolong ketik angka 1 lagi!!" << endl;
		}
		cout << "dan harga untuk ruangan berikut:Rp." << jumlahRoo << "\n"
			 << endl;
	}

	//restaurant
	void restaurent()
	{
		cout << "\v\t\t\t~MyRestaurent~\v" << endl;
		cout << "Restaurent di hotel menyediakan makanan khas dari negara-negara berikut menu yang tersedia: " << endl;
		cout << "\v\t\t\t  ~Menu~" << endl;
		cout << "\t-Food-\t\t\t\t  -Drink-\v" << endl;
		
		cout << "|1.Steak        ------> Rp,85k";
		cout << "  6.Lemon tea  ------> Rp,22k" << endl;
		cout << "|2.Fried rice   ------> Rp,95k";
		cout << "  7.Choco drink------> Rp,26k" << endl;
		cout << "|3.Risoto       ------> Rp,84k";
		cout << "  8.Milk shake ------> Rp,18k" << endl;
		cout << "|4.Meatballs    ------> Rp,75k";
		cout << "  9.Tea tarik  ------> Rp,20k" << endl;
		cout << "|5.Aceh noddles ------> Rp,60k";
		cout << "  10.Ice water ------> Rp,7k" << endl;
		cout << "\t\t\v   0,Exit --->MyRestaurent" << endl;

		int a, b;
		while (true)
		{
			cout << "\npilih menu makanan berdasarkan angka: ";
			cin >> a;
			if (a == 1)
			{
				cout << "anda memilih steak" << endl;
				cout << "anda ingin memesan berapa: ";
				cin >> b;
				jumlahRes = (jumlahRes + 85000 * b);
			}
			else if (a == 2)
			{
				cout << "anda memilih Friedrice" << endl;
				cout << "anda ingin memesan berapa: ";
				cin >> b;
				jumlahRes = (jumlahRes + 95000 * b);
			}
			else if (a == 3)
			{
				cout << "anda memilih Risoto" << endl;
				cout << "anda ingin memesan berapa: ";
				cin >> b;
				jumlahRes = (jumlahRes + 84000 * b);
			}
			else if (a == 4)
			{
				cout << "anda memilih Meatballs" << endl;
				cout << "anda ingin memesan berapa: ";
				cin >> b;
				jumlahRes = (jumlahRes + 74000 * b);
			}
			else if (a == 5)
			{
				cout << "anda memilih Acehnoddles" << endl;
				cout << "anda ingin memesan berapa: ";
				cin >> b;
				jumlahRes = (jumlahRes + 60000 * b);
			}
			else if (a == 6)
			{
				cout << "anda memilih Lemontea" << endl;
				cout << "anda ingin memesan berapa: ";
				cin >> b;
				jumlahRes = (jumlahRes + 22000 * b);
			}
			else if (a == 7)
			{
				cout << "anda memilih Chocodrink" << endl;
				cout << "anda ingin memesan berapa: ";
				cin >> b;
				jumlahRes = (jumlahRes + 26000 * b);
			}
			else if (a == 8)
			{
				cout << "anda memilih Milkshake" << endl;
				cout << "anda ingin memesan berapa: ";
				cin >> b;
				jumlahRes = (jumlahRes + 18000 * b);
			}
			else if (a == 9)
			{
				cout << "anda memilih Teatarik" << endl;
				cout << "anda ingin memesan berapa: ";
				cin >> b;
				jumlahRes = (jumlahRes + 20000 * b);
			}
			else if (a == 10)
			{
				cout << "anda memilih Icewater" << endl;
				cout << "anda ingin memesan berapa: ";
				cin >> b;
				jumlahRes = (jumlahRes + 7 * b);
			}
			else if (a == 0)
			{
				cout << "pesanan anda akan kami sajikan,tunggu sebentar" << endl;
				break;
			}
		cout << " jumlah makanan/minuman yang anda pesan adalah " << b << " dan\n total nya adalah:Rp," << jumlahRes << "k" << endl;
		}
	}
	
	//laundry
	void laundry(){
		cout << "\n\t\t\t~HotelLaundry~" << endl;
		cout << "\nhotel kami menyediakan jasa laundry terbaik" << endl;
		cout << "berikut daftar harga yang kami sediakan:" << endl;
		cout << "\v       ~Laundry~" << endl;
		cout << " |1.1kg ------> Rp,15k|" << endl;
		cout << " |2.2kg ------> Rp,30k|" << endl;
		cout << " |3.3kg ------> Rp,45k|" << endl;
		cout << " |4.4kg ------> Rp,60k|" << endl;
		cout << " |5.5kg ------> Rp,70k|" << endl;
		cout << "\nmasukan pilihan berdasarkan timbangan pakaian anda: ";
		cin >> b;
		
		if (b == 1){
			cout << "berat pakaian anda setelah ditimbang adalah 1Kg" << endl;		
			jumlahLau = (15000);
		}
		else if (b == 2)
		{
			cout << "berat pakaian anda setelah ditimbang adalah 2Kg" << endl;
			jumlahLau = (30000);
		}
		else if (b == 3)
		{
			cout << "berat pakaian anda setelah ditimbang adalah 3Kg" << endl;
			jumlahLau = (45000);
		}
		else if (b == 4)
		{
			cout << "berat pakaian anda setelah ditimbang adalah 4Kg" << endl;
			jumlahLau = (60000);
		}
		else if (b == 5)
		{
			cout << "berat pakaian anda setelah ditimbang adalah 5Kg" << endl;
			jumlahLau = (70000);
		}
		else if (b == 6)
		{
			cout << "terima kasih telah mengunakan jasa laundry kami" << endl;
		}
		else
		{
			cout << "ketik 4 untuk mengunakan jasa kami lagi" << endl;
		}
		cout << "\nberat timbangan anda adalah " << b << "Kg" << " dan total nya harga nya \nadalah Rp," << jumlahLau << endl;
	}				
	
	void game(){
		int a;
		jumlahGem =(jumlahArc + jumlahKid + jumlahExt);
		cout << "\nhotel kami menyediakan fasilitas ZonaGame supaya anda tidak bosan selama menginap di sini" << endl;
		cout << "berikut beberapa Zona yang tersedia di ZonaGame" << endl;
		cout << "\n\t\t\t ~ZonaGame~" << endl;
		cout << " \n-Arcade ------>(1)-" << "  -Kids ------>(2)-" << "  -Extreme------>(3)-" << endl;
		//arcade
		while(true){
			cout << "\npilih->(0)<-untuk untuk melihat tagihan di ~ZonaGame~" << endl;
			cout << "pilih Zona bermain anda berdasarkan angka di (ZonaGame): ";
			cin >> a;
			if (a == 1)
			{
				arcade();
			}
			else if (a == 2)
			{
				kids();
			}
			else if (a == 3)
			{
				extreme();
			}
			else if (a == 0)
			{
				cout << "\vtagihan anda di ~ZonaGame~";
				cout << "[Rp," << jumlahGem << "]" << endl;
				cout << "\v\t\t        TerimaKasih \v" << endl;
				break;
			}
			else
			{
				cout << "ketik 5 untuk bermain di ~ZonaGame~" << endl;
				break;
			}
		}
	}
	
	//arcade
	void arcade(){
		int b;
		cout <<  "\n\t\t\t ~ZonaGame~"  << endl;
		cout << "\nanda bermain di ZonaGame •Arcade•" << endl;
		cout << "berikut game yang tersedia di 'Arcade': " << endl;

		cout << "\n\t  •Arcade•" << endl;
		cout << " |1.Ping-Pong  ------> Rp,5k|" << endl;
		cout << " |2.8Ball-Pool ------> Rp,7k|" << endl;
		cout << " |3.Pin-Ball   ------> Rp,9k|";
		cout << "\t[0.Exit ---> •GameArcade•]" << endl;
		cout << " |4.Mini-Ball  ------> Rp,6k|" << endl;
		cout << " |5.Win-Spin   ------> Rp,8k|\n" << endl;
		while(true){		
			cout << "\nPilih permain yang ingin anda main kan(0/1/2/3/4/5): ";
			cin >> b;
			
			if (b == 1)
			{			
				cout << "\nanda memilih Ping-Pong,harga nya Rp,6k" << endl;
				cout << "selamat bermain" << endl;
				jumlahArc = (jumlahArc + 5000);
			}
			else if (b == 2)
			{
				cout << "\nanda memilih 8Ball-Poll,harga nya Rp,7k" << endl;
				cout << "selamat bermain" << endl;
				jumlahArc = (jumlahArc  + 7000);
			}
			else if (b == 3)
			{
				cout << "\nanda memilih Pin-Ball,harga nya Rp,9k" << endl;
				cout << "selamat bermain" << endl;
				jumlahArc = (jumlahArc + 9000);
			}
			else if (b == 4)
			{
				cout << "\nanda memilih Mini-Ball, harga nya Rp,6k" << endl;
				cout << "selamat bermain" << endl;
				jumlahArc = (jumlahArc + 6000);
			}
			else if (b == 5)
			{
				cout << "\nanda memilih Win-Spin,harga nya Rp,8k" << endl;
				cout << "selamat bermain" << endl;
				jumlahArc = (jumlahArc + 8000);
			}
			else if (b == 0)
			{
				cout << "\nterima kasih telah bermain di •GameArcade•" << endl;
				cout << "\nberikut tagihan anda selama bermain di •GameArcade•\nRp," << jumlahArc << endl;
				game();
				break;
			}
			else
			{
				cout << "masukan pilihan yang sesuai yang anda inginkan di \n•GameArcade•" << endl;
			}
		}
	}
			//kids
	void kids(){
		int b;
		cout <<  "\n\t\t\t ~ZonaGame~"  << endl;
		cout << "\nanda bermain di ZonaGame •Kids•" << endl;
		cout << "berikut game yang tersedia di 'Kids': " << endl;

		cout << "\n\t  •Kids•" << endl;
		cout << " |1.DrivingCars ------> Rp,4k|" << endl;
		cout << " |2.TheClaws    ------> Rp,6k|" << endl;
		cout << " |3.TaxiDrive   ------> Rp,8k|";
		cout << "\t[0.Exit ---> •GameKids•]" << endl;
		cout << " |4.MarioBros   ------> Rp,7k|" << endl;
		cout << " |5.CrazyCoco   ------> Rp,9k|\n" << endl;
		
		while(true){		
			cout << "\nPilih permain yang ingin anda main kan(0/1/2/3/4/5): ";
			cin >> b;
			
			if (b == 1)
			{			
				cout << "\nanda memilih DrivingCars,harga nya Rp,4k" << endl;
				cout << "selamat bermain" << endl;
				jumlahKid= (jumlahKid + 4000);
			}
			else if (b == 2)
			{
				cout << "\nanda memilih TheClaws,harga nya Rp,6k" << endl;
				cout << "selamat bermain" << endl;
				jumlahKid = (jumlahKid + 6000);
			}
			else if (b == 3)
			{
				cout << "\nanda memilih TaxiDrive,harga nya Rp,8k" << endl;
				cout << "selamat bermain" << endl;
				jumlahKid = (jumlahKid + 9000);
			}
			else if (b == 4)
			{
				cout << "\nanda memilih MarioBros, harga nya Rp,6k" << endl;
				cout << "selamat bermain" << endl;
				jumlahKid = (jumlahKid + 7000);
			}
			else if (b == 5)
			{
				cout << "\nanda memilih AdventureCoco,harga nya Rp,8k" << endl;
				cout << "selamat bermain" << endl;
				jumlahKid = (jumlahKid + 9000);
			}
			else if (b == 0)
			{
				cout << "\nterima kasih telah bermain di •GameKids•" << endl;
				cout << "\nberikut tagihan anda selama bermain di •GameKids•\nRp," << jumlahKid << endl;
				game();
				break;
			}
			else
			{
				cout << "masukan pilihan sesuai permain yang anda inginkan di \n•GameArcade•" << endl;
			}
		}
	}
	
	//extreme
	void extreme(){
		int b;
		cout <<  "\n\t\t\t ~ZonaGame~"  << endl;
		cout << "\nanda bermain di ZonaGame •Extreme•" << endl;
		cout << "berikut game yang tersedia di •Extreme•: " << endl;

		cout << "\n\t  •Extreme•" << endl;
		cout << " |1.TheThunder   ------> Rp,6k |" << endl;
		cout << " |2.ShotFire     ------> Rp,8k |" << endl;
		cout << " |3.TheVictim    ------> Rp,9k |";
		cout << " [0.Exit ---> •GameExtreme•]" << endl;
		cout << " |4.Rollercoaster------> Rp,11k|" << endl;
		cout << " |5.PlaneCrash   ------> Rp,10k|\n" << endl;
		
		while(true){		
			cout << "\nPilih permain yang ingin anda main kan(0/1/2/3/4/5): ";
			cin >> b;
			
			if (b == 1)
			{			
				cout << "\nanda memilih TheThunder,harga nya Rp,6k" << endl;
				cout << "selamat bermain" << endl;
				jumlahExt = (jumlahExt + 6000);
			}
			else if (b == 2)
			{
				cout << "\nanda memilih ShotFire,harga nya Rp,8k" << endl;
				cout << "selamat bermain" << endl;
				jumlahExt = (jumlahExt + 8000);
			}
			else if (b == 3)
			{
				cout << "\nanda memilih TheVictim,harga nya Rp,9k" << endl;
				cout << "selamat bermain" << endl;
				jumlahExt = (jumlahExt + 9000);
			}
			else if (b == 4)
			{
				cout << "\nanda memilih Rollercoaster, harga nya Rp,11k" << endl;
				cout << "selamat bermain" << endl;
				jumlahExt = (jumlahExt + 11000);
			}
			else if (b == 5)
			{
				cout << "\nanda memilih PlaneCrash,harga nya Rp,10k" << endl;
				cout << "selamat bermain" << endl;
				jumlahExt = (jumlahExt + 10000);
			}
			else if (b == 0)
			{
				cout << "\nterima kasih telah bermain di •GameExtreme•" << endl;
				cout << "\nberikut tagihan anda selama bermain di •GameExtreme•\nRp," << jumlahExt << endl;
				game();
				break;
			}
			else
			{
				cout << "masukan pilihan sesuai permain yang anda inginkan di \n•GameExtreme•" << endl;
			}
		}
	}
	
	void gym(){
		int a,b;
		cout << "\v\t\t\t~GymCenter" << endl;
		cout << "\nHotel kami menyedia kan fasilitas ~GymCenter~ yang sudah dilengkapi fasilitas standart internasional,anda dapat menyewa selama yang kamu bisa" << endl;
		
		cout << "\v\t\t~Gym~" << endl;
		cout << "\v|1.beginner    ------>Rp,10k/jam |"  << endl;
		cout << "|2.intermediate------>Rp,20k/jam |"  << "   |0.Exit--->~GymCenter~|" << endl;
		cout << "|3.advance     ------>Rp,30k/jam |"  << endl;
									
		cout << "\nmasukan sesuai yang anda inginkan: ";
		cin >> a;
		
		if (a == 1){
			cout << "\nanda memilih kelas beginner,harga nya 10k/jam" << endl;
			cout << "anda ingin berapa jam: ";
			cin >> b;
			cout << "selamat berolahraga" << endl;
			jumlahGym = (10000 * b);
		}
		else if (a == 2){
			cout << "\nanda memilih kelas intermediate,harga nya 20k/jam" << endl;
			cout << "anda ingin berapa jam: ";
			cin >> b;
			cout << "selamat berolahraga" << endl;
			jumlahGym = (20000 * b);
		}
		else if (a == 3){
			cout << "\nanda memilih kelas advance,harga nya 30k/jam" << endl;
			cout << "anda ingin berapa jam: ";
			cin >> b;
			cout << "selamat berolahraga"<< endl;
			jumlahGym = (30000 * b);
		}
		else{
			cout << "pilih 7 untuk berolahraga" << endl;
		}		
	}	
				
			
	void display(){
		cout << "\nHotel billl" << endl;
		//data cs
		cout << "\vcustomer details" << endl;
		cout << "nama costumer: " << nama << endl;
		cout << "umur costume: " << umur << endl;
		cout << "tanggal check-in: " << checkIn << endl;
		cout << "tanggal check-out: " << checkOut << endl;
		//ruangan
		cout << "\vtotal tagihan anda di ~RoomHotel~ adalah. Rp," << jumlahRoo << "dan Type nya:" << a << endl;
		//restaurent
		cout << "\vtotal  tagihan di ~MyRestaurent~ adalah. Rp," << jumlahRes << endl;
		//laundry
		cout << "\vberat timbangan anda ~Laundry~ adalah: "<< b << "Kg" << "dan harga nya adalah. Rp," << jumlahLau << endl;	
		//game
		cout << "\vtotal tagihan anda di ~ZonaGame~ adalah. ";
		cout << "Rp," << jumlahGem << endl;
		//gym
		cout << "\vtotal tagihan anda di ~GymCenter~ adalah. Rp," << jumlahGym << endl;
		//jumlah semua
		jumlahAll =(jumlahRoo + jumlahRes + jumlahLau + jumlahGem + jumlahGym);
		
		cout << "\vtotal tagihan anda di ~MyHotel~ adalah. ---->Rp," << jumlahAll << "<----" << endl;
	}
};

void input()
{
	hotel a;
	string b;
	while (true)
	{
		cout << "\n |1.DataCostumer     |" << " <---------->"<< " |2.RoomMyHotel        |"  << endl;
		
		cout << " |3.RestaurentMyHotel|" << " <---------->" << " |4.LaundryMyHotel     |" << endl;
		
		cout << " |5.ZonaGameMyHotel  |" << " <---------->" <<  " |6.DisplayDataCostumer|" << endl;
		
		cout << " |7.GymMyHotel       |" << " <---------->" << " |8.Exit->[~MyHotel~]<-|" << endl;

		cout << "\nPilih berdasarkan urutan yang telah disediakan ~MyHotel~" << endl;
		cout << "Masukan Input: ";
		cin >> b;

		if (b == "1")
		{
			a.input();
		}
		else if (b == "2")
		{
			a.ruangan();
		}
		else if (b == "3")
		{
			a.restaurent();
		}
		else if (b == "4")
		{
			a.laundry();
		}
		else if (b == "5")
		{
			a.game();
		}
		else if (b == "6")
		{
			a.display();
		}
		else if (b == "7")		
		{
			a.gym();
		}
		else if (b == "8")
		{
			cout << "\v\tTerima kasih atas kunjungan anda di ~MyHotel~" << endl;
			break;
		}
		else
		{
			cout << "pilihan anda salah" << endl;
			break;
		}
	}
}
	
int main()
{
	cout << "\t\t\t  ~MyHotel~" << endl;
	input();
	return 0;
}