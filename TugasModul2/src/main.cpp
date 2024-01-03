#include <iostream>
#include <iomanip>
#include <math.h>
#define PI 3.14159265
using namespace std;

void lokasi();
float gerak(float x, float y);
float gerak_2(float v, float t, float theta);
void undo();

float arr1[0];
float arr2[0];
int i = 0;

int main(){
  arr1[0] = 0.00;
  arr2[0] = 0.00;
  float arr1[i];
  float arr2[i];
  char pilih, pilih_gerak;
  float x,y,v,t,theta;
  while(true){
    cout << "\nApakah drone ingin bergerak?\n";
    cout << "|ketik 'y' jika ingin gerak              |\n";
    cout << "|ketik 'l' jika ingin mengetahui lokasi  |\n";
    cout << "|ketik 't' jika ingin keluar dari program|\n";
    cout << "|ketik 'u' jika ingin undo               |\n";
    cout << "silahkan ketik: ";
    cin >> pilih;
    if(pilih=='l'){
      lokasi();
      continue;
    }else if(pilih=='y'){
      cout << "\npilih gerak 1 atau 2\n";
      cout << "|ketik 'a' jika ingin gerak 1            |\n";
      cout << "|ketik 'b' jika ingin gerak 2            |\n";
      cout << "silahkan ketik: ";
      cin >> pilih_gerak;
      if (pilih_gerak=='a'){
        cout << "masukan x: ";
        cin >> x;
        cout << "masukan y: ";
        cin >> y;
        gerak(x,y);
      } else if (pilih_gerak=='b'){
        cout << "masukan v: ";
        cin >> v;
        cout << "masukan t: ";
        cin >> t;
        cout << "masukan theta: ";
        cin >> theta;
        gerak_2(v,t,theta);
      }
      continue;
    } else if (pilih=='u'){
      undo();
      continue;
    } else if(pilih=='t'){
      break;
      continue;
    }
  cin.get();
  return 0;
  }
}

void lokasi(){
  cout << fixed << setprecision(2);
  cout << "(" << fixed << arr1[i] << ", " << arr2[i] << ")" << endl;
}

float gerak(float x, float y){
  arr1[i] = arr1[i] + x;
  arr2[i] = arr2[i] + y;

  return arr1[i],arr2[i],x,y;
}

float gerak_2(float v, float t, float theta){
  arr1[i] = arr1[i] + v*t*cos(theta*PI/180.0);
  arr2[i] = arr2[i] + v*t*sin(theta*PI/180.0);
 
  return arr1[i],arr2[i],v,t,theta;
}

void undo(){
  cout << fixed << setprecision(2);
  cout << "(" << fixed << arr1[i] << ", " << arr2[i] << ")" << endl;
}