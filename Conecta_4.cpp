#include<bits/stdc++.h>
using namespace std;

void index(char **p);
void introducir(char **p);
void tablero(char **p);
void colores(char **p,char L,int var);
int ganador(char **p);

int main(){
	char **p=NULL;
	p=new(nothrow) char*[6];
	for(int i=0;i<6;i++){
		p[i]=new(nothrow) char[7];
	}
	index(p);
	return 0;
}

void index(char **p){
	introducir(p);
	int player=0,gana;
	do{
		tablero(p);
		if(player%2==0){
			colores(p,'R',player);
		}else{
			colores(p,'A',player);
		}
		system("cls");
		player++;
		gana=ganador(p);
		if(gana==1){
			cout<<"FELICIDADES"<<endl;
			cout<<"GANA COLOR ROJO"<<endl;
			tablero(p);
			exit(-1);
		}else{
			if(gana==2){
				cout<<"FELICIDADES"<<endl;
				cout<<"GANA COLOR AMARILLO"<<endl;
				tablero(p);
				exit(-1);
			}
		}
	}while(player<42);
}

void introducir(char **p){
	for(int i=0;i<6;i++){
		for(int j=0;j<7;j++){
			p[i][j]='\0';
		}
	}
}

void tablero(char **p){
	char aux='1';
	for(int k=0;k<7;k++){
		cout<<" "<<aux++<<"  ";
	}
	for(int i=0;i<6;i++){
		cout<<endl;
		for(int j=0;j<7;j++){
			cout<<" "<<p[i][j]<<" |";
		}
		cout<<endl;
		cout<<"----------------------------";
	}
}

void colores(char **p,char L,int player){
	int aux1;
	bool bandera=true;
	do{
		do{
			if(player%2==0){
				cout<<endl;
				cout<<"Introduce donde vas a meter tu ficha roja, en un rango entre 1 a 7: ";
				cin>>aux1;
			}else{
				cout<<endl;
				cout<<"Introduce donde vas a meter tu ficha amarilla, en un rango entre 1 a 7: ";
				cin>>aux1;
			}
		}while(aux1<1 || aux1>7);

		switch(aux1){
			case 1:{
				for(int i=0;i<6;i++){
					if(p[5-i][0] == '\0'){
						p[5-i][0]=L;
						break;
					}
					if(i==5)	cout<<"Esta ocupadas todas las casillas de la columna '1'";
				}
				break;
			}

			case 2:{
				for(int i=0;i<6;i++){
					if(p[5-i][1] == '\0'){
						p[5-i][1]=L;
						break;
					}
					if(i==5)	cout<<"Esta ocupadas todas las casillas de la columna '1'";
				}
				break;
			}

			case 3:{
				for(int i=0;i<6;i++){
					if(p[5-i][2] == '\0'){
						p[5-i][2]=L;
						break;
					}
					if(i==5)	cout<<"Esta ocupadas todas las casillas de la columna '1'";
				}
				break;
			}

			case 4:{
				for(int i=0;i<6;i++){
					if(p[5-i][3] == '\0'){
						p[5-i][3]=L;
						break;
					}
					if(i==5)	cout<<"Esta ocupadas todas las casillas de la columna '1'";
				}
				break;
			}

			case 5:{
				for(int i=0;i<6;i++){
					if(p[5-i][4] == '\0'){
						p[5-i][4]=L;
						break;
					}
					if(i==5)	cout<<"Esta ocupadas todas las casillas de la columna '1'";
				}
				break;
			}

			case 6:{
				for(int i=0;i<6;i++){
					if(p[5-i][5] == '\0'){
						p[5-i][5]=L;
						break;
					}
					if(i==5)	cout<<"Esta ocupadas todas las casillas de la columna '1'";
				}
				break;
			}

			case 7:{
				for(int i=0;i<6;i++){
					if(p[5-i][6] == '\0'){
						p[5-i][6]=L;
						break;
					}
					if(i==5)	cout<<"Esta ocupadas todas las casillas de la columna '1'";
				}
				break;
			}
		}

	}while(bandera==false);
}

int ganador(char **p){
	int aux;
	if(p[5][0] == 'R' || p[5][0] == 'A'){
		if(p[5][0]==p[4][0] && p[5][0]==p[3][0] && p[5][0]==p[2][0]){
			if(p[5][0] == 'R')	aux=1;
			if(p[5][0] == 'A')	aux=2;
		}

		if(p[5][0]==p[5][1] && p[5][0]==p[5][2] && p[5][0]==p[5][3]){
			if(p[5][0] == 'R')	aux=1;
			if(p[5][0] == 'A')	aux=2;
		}
		if(p[5][0] == p[4][1] && p[5][0]==p[3][2] && p[5][0]==p[2][3]){
			if(p[5][0] == 'R')	aux=1;
			if(p[5][0] == 'A')	aux=2;
		}
	}
	if(p[5][1] == 'R' || p[5][1] == 'A'){
		if(p[5][1] == p[4][1] && p[5][1]==p[3][1] && p[5][1]==p[2][1]){
			if(p[5][1] == 'R')	aux=1;
			if(p[5][1] == 'A')	aux=2;
		}

		if(p[5][1] == p[5][2] && p[5][1]==p[5][3] && p[5][1]==p[5][4]){
			if(p[5][1] == 'R')	aux=1;
			if(p[5][1] == 'A')	aux=2;
		}

		if(p[5][1] == p[4][2] && p[5][1]==p[3][3] && p[5][1]==p[2][4]){
			if(p[5][1] == 'R')	aux=1;
			if(p[5][1] == 'A')	aux=2;
		}

	}
	if(p[5][2] == 'R' || p[5][2] == 'A'){
		if(p[5][2] == p[4][2] && p[5][2]==p[3][2] && p[5][2]==p[2][2]){
			if(p[5][2] == 'R')	aux=1;
			if(p[5][2] == 'A')	aux=2;
		}

		if(p[5][2] == p[5][3] && p[5][2]==p[5][4] && p[5][2]==p[5][5]){
			if(p[5][2] == 'R')	aux=1;
			if(p[5][2] == 'A')	aux=2;
		}

		if(p[5][2] == p[4][3] && p[5][2]==p[3][4] && p[5][2]==p[2][5]){
			if(p[5][2] == 'R')	aux=1;
			if(p[5][2] == 'A')	aux=2;
		}
	}
	if(p[5][3] == 'R' || p[5][3] == 'A'){
		if(p[5][3] == p[4][3] && p[5][3]==p[3][3] && p[5][3]==p[2][3]){
			if(p[5][3] == 'R')	aux=1;
			if(p[5][3] == 'A')	aux=2;
		}

		if(p[5][3] == p[5][4] && p[5][3]==p[5][5] && p[5][3]==p[5][6]){
			if(p[5][3] == 'R')	aux=1;
			if(p[5][3] == 'A')	aux=2;
		}

		if(p[5][3] == p[4][2] && p[5][3]==p[3][1] && p[5][3]==p[2][0]){
			if(p[5][3] == 'R')	aux=1;
			if(p[5][3] == 'A')	aux=2;
		}

		if(p[5][3] == p[4][4] && p[5][3]==p[3][5] && p[5][3]==p[2][6]){
			if(p[5][3] == 'R')	aux=1;
			if(p[5][3] == 'A')	aux=2;
		}
	}
	if(p[5][4] == 'R' || p[5][4] == 'A'){
		if(p[5][4] == p[4][4] && p[5][4]==p[3][4] && p[5][4]==p[2][4]){
			if(p[5][4] == 'R')	aux=1;
			if(p[5][4] == 'A')	aux=2;
		}
		if(p[5][4] == p[4][3] && p[5][4]==p[3][2] && p[5][4]==p[2][1]){
			if(p[5][4] == 'R')	aux=1;
			if(p[5][4] == 'A')	aux=2;
		}
	}
	if(p[5][5] == 'R' || p[5][5] == 'A'){
		if(p[5][5] == p[4][5] && p[5][5]==p[3][5] && p[5][5]==p[2][5]){
			if(p[5][5] == 'R')	aux=1;
			if(p[5][5] == 'A')	aux=2;
		}
		if(p[5][5] == p[4][4] && p[5][5]==p[3][3] && p[5][5]==p[2][2]){
			if(p[5][5] == 'R')	aux=1;
			if(p[5][5] == 'A')	aux=2;
		}
	}
	if(p[5][6] == 'R' || p[5][6] == 'A'){
		if(p[5][6] == p[4][6] && p[5][6]==p[3][6] && p[5][6]==p[2][6]){
			if(p[5][6] == 'R')	aux=1;
			if(p[5][6] == 'A')	aux=2;
		}
		if(p[5][6] == p[4][5] && p[5][6]==p[3][4] && p[5][6]==p[2][3]){
			if(p[5][6] == 'R')	aux=1;
			if(p[5][6] == 'A')	aux=2;
		}
	}
	if(p[4][0] == 'R' || p[4][0] == 'A'){
		if(p[4][0] == p[3][0] && p[4][0]==p[2][0] && p[4][0]==p[1][0]){
			if(p[4][0] == 'R')	aux=1;
			if(p[4][0] == 'A')	aux=2;
		}
		if(p[4][0] == p[4][1] && p[4][0]==p[4][2] && p[4][0]==p[4][3]){
			if(p[4][0] == 'R')	aux=1;
			if(p[4][0] == 'A')	aux=2;
		}
		if(p[4][0] == p[3][1] && p[4][0]==p[2][2] && p[4][0]==p[1][3]){
			if(p[4][0] == 'R')	aux=1;
			if(p[4][0] == 'A')	aux=2;
		}
	}
	if(p[4][1] == 'R' || p[4][1] == 'A'){
		if(p[4][1] == p[3][1] && p[4][1]==p[2][1] && p[4][1]==p[1][1]){
			if(p[4][1] == 'R')	aux=1;
			if(p[4][1] == 'A')	aux=2;
		}
		if(p[4][1] == p[4][2] && p[4][1]==p[4][3] && p[4][1]==p[4][4]){
			if(p[4][1] == 'R')	aux=1;
			if(p[4][1] == 'A')	aux=2;
		}
		if(p[4][1] == p[3][2] && p[4][1]==p[2][3] && p[4][1]==p[1][4]){
			if(p[4][1] == 'R')	aux=1;
			if(p[4][1] == 'A')	aux=2;
		}
	}
	if(p[4][2] == 'R' || p[4][2] == 'A'){
		if(p[4][2] == p[3][2] && p[4][2]==p[2][2] && p[4][2]==p[1][2]){
			if(p[4][2] == 'R')	aux=1;
			if(p[4][2] == 'A')	aux=2;
		}
		if(p[4][2] == p[4][3] && p[4][2]==p[4][4] && p[4][2]==p[4][5]){
			if(p[4][2] == 'R')	aux=1;
			if(p[4][2] == 'A')	aux=2;
		}
		if(p[4][2] == p[3][4] && p[4][2]==p[2][5] && p[4][2]==p[1][6]){
			if(p[4][2] == 'R')	aux=1;
			if(p[4][2] == 'A')	aux=2;
		}
		if(p[4][2] == p[3][3] && p[4][2]==p[2][4] && p[4][2]==p[1][5]){
			if(p[4][2] == 'R')	aux=1;
			if(p[4][2] == 'A')	aux=2;
		}
	}
	if(p[4][3] == 'R' || p[4][3] == 'A'){
		if(p[4][3] == p[3][3] && p[4][3]==p[2][3] && p[4][3]==p[1][3]){
			if(p[4][3] == 'R')	aux=1;
			if(p[4][3] == 'A')	aux=2;
		}
		if(p[4][3] == p[4][4] && p[4][3]==p[4][5] && p[4][3]==p[4][6]){
			if(p[4][3] == 'R')	aux=1;
			if(p[4][3] == 'A')	aux=2;
		}
		if(p[4][3] == p[3][4] && p[4][3]==p[2][5] && p[4][3]==p[1][6]){
			if(p[4][3] == 'R')	aux=1;
			if(p[4][3] == 'A')	aux=2;
		}
		if(p[4][3] == p[3][2] && p[4][3]==p[2][1] && p[4][3]==p[1][0]){
			if(p[4][3] == 'R')	aux=1;
			if(p[4][3] == 'A')	aux=2;
		}
	}
	return aux;
}
