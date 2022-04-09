using namespace std;
class Output{
public :
void cetak(){
  cout<<"========================================"<<endl;
  cout<<"            STRUK PEMBAYARAN             \n";
  cout<<"========================================"<<endl;
  cout<<"Diskon ramadhan       :"<<data_file[0]<<endl;
  cout<<"Diskon warga negara   :"<<data_file[1]<<endl;
  cout<<"Total                 :"<<data_file[2]<<endl;
  cout<<"========================================";
  
}
void getData(){
  ambil_data.open("data_api.txt");
  while(!ambil_data.eof()){
    ambil_data>>data_file[index];
    index += 1;
  }
  ambil_data.close();
}
private :
ifstream ambil_data;
string data_file[30];
long int disk1, disk2, total;
int layanan;
int index=0;
};