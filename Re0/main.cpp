#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>

using namespace std;
void play();
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	play();
	return 0;
}
void play(){
	int jewel = 17;
	int p1 = 0,p2 = 0;
	int count = 0;
	bool gameover,autoplay;
	struct jewelStock{
		char name[6];
		int jewels;
	}players[3]={"寶箱",jewel,"玩家1",p1,"玩家2",p2};
	while(!gameover){
		if(autoplay) Sleep(1000);
		system("cls");
		if(players[0].jewels < 0){
			int error = players[0].jewels;
			players[0].jewels += 0-error;
			players[count%2+1].jewels -= 0-error; 
		}
		for(int i=0;i<3;i++){
			cout<<players[i].name<<"\n";
			for(int j = 0;j<players[i].jewels;j++) cout<<"o";
			cout<<"("<<players[i].jewels<<")\n";
		}
		if(players[0].jewels == 0) break;
		cout<<"\n\n拿取1~3個寶石(9為電腦代打)\n";
		cout<<"玩家"<<count%2+1<<"輸入拿取寶石數:";
		int take;
		if(!autoplay){
			cin>>take;
			if(take==9){
				autoplay = 1;
				continue;
			}
			if(take<1||take>3){
				cout<<"拿太多了!";
				continue; 
			}
		}
		else take = rand()%3+1;
		cout<<take<<"\n";
		players[0].jewels -= take;
		players[count%2+1].jewels += take; 
		if(players[0].jewels == 0) gameover = 1;
		count++;
		Sleep(50);
	}
	cout<<"玩家"<<count%2+1<<"在第"<<count<<"回合輸了比賽!\n"; 
	system("pause");
}
