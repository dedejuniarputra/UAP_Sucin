//Nama Anggota:
//Adilla Aulia Desriyanti  2217051018
//Dede Juniar Putra        2217051015
//Kerina Bakarudin         2217051027


#include <iostream>     //untuk menggunakan cout, cin
#include <stdio.h> 		//untuk menggunakan input output
#include <time.h>		//untuk mendefinisikan tanggal dan waktu
#include <conio.h>		//untuk menggunakan getch
#include <windows.h> 	//untuk menampilkan fungsi sleep(), serta peletakan posisi
#include <ncurses\ncurses.h>		//untuk mengatur letak sesuai baris dan kolom

//supaya tidak perlu menulis std berulang
using namespace std;


//menamplkan judul game
void judul(){
	cout << "\n\n\n\n\n\n";
	cout << "\t\t\t\t           >>> WELCOME TO THE GAME <<<\n\n";
	cout << "\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout << "\t\t\t[         ______  ___   ___  _______   ___  ____       ___      ]\n";
	cout << "\t\t\t[        /  ___/ /  /  /  / /  __   / /  / /    |     /  /      ]\n";
	cout << "\t\t\t[       /  /__  /  /  /  / /  /  /_/ /  / /  /|  |   /  /       ]\n";
	cout << "\t\t\t[      /___  / /  /  /  / /  /  __  /  / /  /  |  | /  /        ]\n";
	cout << "\t\t\t[     ____/ / /  /__/  / /  /__/ / /  / /  /    |  /  /         ]\n";
	cout << "\t\t\t[    /_____/ /________/ /_______/ /__/ /__/      |___/          ]\n";
	cout << "\t\t\t[			~~ BY : K D A ~~                        ]\n";
	cout << "\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
}

//menampilkan ucapan penutup game
void tq(){
	system ("cls");
	cout << "\n\n\n\n\n\n";
	cout << "\t\t\t\t+++++++++++++++++++++ \n";
	cout << "\t\t\t\tTQ YH DAH MAEN <<<333 \n";
	cout << "\t\t\t\t+++++++++++++++++++++ \n";
}

//tampilan loading
void loading(){
	
	//untuk menggunakan ncurses 
	initscr();
	
	mvprintw(12, 50, "Loading");
	
	mvprintw(13, 43, "=====================");
	mvprintw(14, 43, "[]                 []");
	mvprintw(15, 43, "=====================");
			
	for(int r = 1; r < 10; r++){	 
		for(int j = 1; j < 5; j++){
			mvprintw(12, 56 + j, ".");
			refresh();
			Sleep(50);    //mendelay layar selama 0,05 detik				   
	    }	
			mvprintw(14, 42 +r + r, ">>");
			refresh();
			Sleep(100);		//mendelay layar selama 0,1 detik		 	  
	}
	
	refresh();
	endwin();    
}


//menjalankan program game
int play(){
	string player [3]= {"GUNTING", "BATU", "KERTAS"};   //pilihan suwit
	int pilih;
    char lagi;     
	
	//menginput id username
    string id;
	cout << "\n\t\t\t\t\t    Masukkan username Anda : ";
	cin.ignore();	   
	getline(cin,id);
	system("cls");
	
	//memanggil fungsi loading
	loading();
	
    awal:   //label awal
	cout << "===================================" << "\n";
    cout << " Selamat datang di GAME SUWIT CINA " << "\n";
    cout << "===================================" << "\n" << "\n";
    cout << "ID: " << id << "\n\n";
    cout << " Choose Your Fighter!!!" << "\n\n";
    cout << " 1. GUNTING \n 2. BATU \n 3. KERTAS" << "\n";
    cout << " Silahkan Pilih  1/2/3 : => ";
    cin >> pilih;
    
    if (pilih == 1){
        cout << "\n YOU = " << player[0] << "\n";
        srand(time(NULL));     //bilangan random
        int com = rand() % 10;		//untuk merandom suwit COM
        
        if (com <= 3 && com >= 1){
            cout << " COM = GUNTING" << "\n\n";
            cout << " ==============" << "\n";
            cout << " ==> SERI ! <==" << "\n";
            cout << " ==============" << "\n";    
            }
            
        else if (com <= 6 && com >= 4){
            cout << " COM = BATU" << "\n\n";
            cout << " ==================" << "\n";
            cout << " ==> YOU LOSE ! <==" << "\n";
            cout << " ==================" << "\n";
            }
            
        else{
            cout << " COM = KERTAS" << "\n\n";
            cout << " =================" << "\n";
            cout << " ==> YOU WIN ! <==" << "\n";
            cout << " =================" << "\n";
            } 
		cout << "\n";
    }
    
	else if(pilih == 2){
        cout << "\n YOU = "<< player[1] << "\n";
        srand(time(NULL));   //bilangan random
        int com = rand() % 10;
        
        if (com <= 3 && com >= 1){
            cout << " COM = BATU" << "\n\n";
            cout << " ==============" << "\n";
            cout << " ==> SERI ! <==" << "\n";
            cout << " ==============" << "\n";
            }
            
        else if (com <=6 && com >= 4){
            cout << " COM = GUNTING" << "\n\n";
            cout << " =================" << "\n";
            cout << " ==> YOU WIN ! <==" << "\n";
            cout << " =================" << "\n";
            }
            
        else{
            cout << " COM = KERTAS" << "\n\n";
            cout << " ==================" << "\n";
            cout << " ==> YOU LOSE ! <==" <<"\n";
            cout << " ==================" << "\n";
        } 
		cout << "\n";
    }
    
    else if(pilih == 3){
        cout << "\n YOU = " << player[2] << "\n";
        srand(time(NULL));    //bilangan random
        int com = rand() % 10;
        
        if (com<=3 && com>=1){
            cout << " COM = KERTAS" << "\n\n";
            cout << " ==============" << "\n";
            cout << " ==> SERI ! <==" << "\n";
            cout << " ==============" << "\n";
        }
        
        else if (com <= 6 && com >= 4){
            cout << " COM = BATU" << "\n\n";
            cout << " =================" << "\n";
            cout << " ==> YOU WIN ! <==" << "\n";
            cout << " =================" << "\n";
        }
        
        else{
        	cout << " COM = GUNTING" << "\n\n";
            cout << " ==================" << "\n";
            cout << " ==> YOU LOSE ! <==" << "\n";
            cout << " ==================" <<"\n";     
        } 
		cout << "\n";
    }
    
    else{
        cout << "\n**Input salah!**" << "\n";
    }
    
    //pilihan setelah bermain
    cout << "\nApakah Anda ingin bermain lagi? (y/t) ";
    cin >> lagi;

    if (lagi == 'y' || lagi == 'Y'){
        system ("cls");
        goto awal;    //kembali ke tanda awal
    }
    else {
    	tq();   //ucapan penutup game
	}
}
    


void menu(){
	judul();   //memanggil fungsi judul (tampilan judul game)
	
	char siap;
	cout << "\n\t\t\t\t\t\tApakah Anda Siap Bermain ?\n";
	cout << "\t\t\t\t\t\t        (y/t) ? ";
	cin >> siap;
	
	if( siap=='y'||siap=='Y') play();    //ke fungsi play() untuk main game
	else {
		system("cls"); menu();     //kembali ke tampilan awal
	} 
}


int main(){
    menu(); 		//memanggil fungsi menu
    getch();		//menjeda ketika mengakhiri program
    return 0;		//tanda program selesai
}
