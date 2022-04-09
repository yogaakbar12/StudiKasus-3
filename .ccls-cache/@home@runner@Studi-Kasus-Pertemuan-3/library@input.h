using namespace std;

class Input{
        public : 
            void cetak(){                        
              cout<<"========================================"<<endl;
              cout<<"=        LAYANAN CLOUD                 ="<<endl;
              cout<<"========================================"<<endl;
              cout<<"= 1) Shared Hosting : 300 ribu         ="<<endl;
              cout<<"= 2) VPS Server : 930 ribu             ="<<endl;
              cout<<"= 3) Cloud Server : 5 juta             ="<<endl;
              cout<<"= 4) Domain Name : 280 ribu            ="<<endl;
              cout<<"========================================"<<endl;
              cout<<"=     Pilih layanan yang anda beli    ";
              cin>>layanan;
              cout<<"========================================"<<endl;
              cout<<"=   Bulan saat ini ketika membeli ?   ";
              cin>>bulan;
              cout<<"========================================"<<endl;
              cout<<"=  Apakah anda berasal dari indonesia ? (1.ya/2.tidak)";
              cin>>negara;
              
            }

            void toFile(){
              tulis_data.open("data_api.txt");
			        tulis_data << layanan << endl;
			        tulis_data << bulan << endl;
              tulis_data << negara;
            tulis_data.close();
            }

        private : 
        ofstream t;
        int layanan,bulan,negara;
        
};