using namespace std;

class proses{
public:

void getData(){
  ambil_data.open("../dummy/input.txt");
  bool lyn = true;
  bool bln = true;
  while (!ambil_data.eof()){
    if(lyn){
      ambil_data >> layanan;
      
      lyn = false;
    }
    else{
      ambil_data >> bulan;
      ambil_data >> negara;
    }
    }
  ambil_data.close();
  }

void toFile(){
  long int disk1, disk2, total;
if (layanan == 1){
  if(bulan==4){
    disk1 = 300000*0.10;
  }
  else if(bulan!=4){
    disk1 = 0;
  }
  if(negara==1){
    disk2 = (300000 - disk1)*0.03;
  }
  else if (negara!=1){
    disk2 = 0;
  }
  total = 300000-disk1-disk2;
} 
  else if (layanan == 2){
  if(bulan==4){
    disk1 = 930000*0.10;
  }
  else if(bulan!=4){
    disk1 = 0;
  }
  if(negara==1){
    disk2 = (930000 - disk1)*0.03;
  }
  else if (negara!=1){
    disk2 = 0;
  }
  total = 930000-disk1-disk2;
}
  else if (layanan == 3){
  if(bulan==4){
    disk1 = 5000000*0.10;
  }
  else if(bulan!=4){
    disk1 = 0;
  }
  if(negara==1){
    disk2 = (5000000 - disk1)*0.03;
  }
  else if (negara!=1){
    disk2 = 0;
  }
  total = 5000000-disk1-disk2;
}
  if (layanan == 4){
  if(bulan==4){
    disk1 = 280000*0.10;
  }
  else if(bulan!=4){
    disk1 = 0;
  }
  if(negara==1){
    disk2 = (280000 - disk1)*0.03;
  }
  else if (negara!=1){
    disk2 = 0;
  }
  total = 280000-disk1-disk2;
}
 tulis_data.open("../pra_data/proses.txt");
    tulis_data<< disk1 <<endl;
    tulis_data<< disk2 <<endl;
    tulis_data<< total;
  tulis_data.close();
}

private: 
ifstream ambil_data;
ofstream tulis_data;
int layanan;
int bulan;
int negara;
};