#include <iostream>
#include <fstream>
#include "persona_lib.h"
using namespace std;

//Reference Link : http://www.cplusplus.com/doc/tutorial/files/
//https://stackoverflow.com/questions/8329767/writing-into-binary-files

//NOT COMPLETE//

persona_stats persona[250]; //should be 226

int main(){
	streampos size;
	char * memblock;
	ofstream dbinput;

	for (int i=0;i<226;i++){ //Total persona = 226
		cout << "Persona Name (With caps, i.e Izanagi Picaro) : ";
		cin >> persona[i].name;
		
		cout << "Arcana (With caps, i.e Fool): ";
		cin >> persona[i].arcana;
		
		cout << "Persona Level : ";
		cin >> persona[i].lvl;
		
		cout << "Strength Amount : ";
		cin >> persona[i].st;
		
		cout << "Magic Amount : ";
		cin >> persona[i].ma;
		
		cout << "Endurance Amount : ";
		cin >> persona[i].en;
		
		cout << "Agility Amount : ";
		cin >> persona[i].ag;
		
		cout << "Luck Amount : ";
		cin >> persona[i].lu;
		
		cout << "Reaction to Physics Skill (0 = nothing, 1 = weak, 2 = str, 3 = drain): ";
		cin >> persona[i].phys;
		
		cout << "Reaction to Gun Skill (0 = nothing, 1 = weak, 2 = str, 3 = drain): ";
		cin >> persona[i].gun;
		
		cout << "Reaction to Fire Skill (0 = nothing, 1 = weak, 2 = str, 3 = drain): ";
		cin >> persona[i].fire;
		
		cout << "Reaction to Ice Skill (0 = nothing, 1 = weak, 2 = str, 3 = drain): ";
		cin >> persona[i].ice;
		
		cout << "Reaction to Electric Skill (0 = nothing, 1 = weak, 2 = str, 3 = drain): ";
		cin >> persona[i].elec;
		
		cout << "Reaction to Wind Skill (0 = nothing, 1 = weak, 2 = str, 3 = drain): ";
		cin >> persona[i].wind;
		
		cout << "Reaction to Psy Skill (0 = nothing, 1 = weak, 2 = str, 3 = drain): ";
		cin >> persona[i].psy;
		
		cout << "Reaction to Nuclear Skill (0 = nothing, 1 = weak, 2 = str, 3 = drain): ";
		cin >> persona[i].nuclear;
		
		cout << "Reaction to Bless Skill (0 = nothing, 1 = weak, 2 = str, 3 = drain): ";
		cin >> persona[i].bless;
		
		cout << "Reaction to Curse Skill (0 = nothing, 1 = weak, 2 = str, 3 = drain): ";
		cin >> persona[i].curse;
		
		//no almighty
		
		for (int j = 0; j < 8; j++){
			cout << "Skill Slot No. " << j+1 << " : ";
			cin >> persona[i].skill[j];
		}
	}
	
	dbinput.open("persona_db.bin", ios::in | ios::out | ios::app | ios::ate | ios::binary);
	
	if(dbinput.is_open()){
		for (int i = 0;i < 226;i++){
			dbinput.write()
		}
	}
	
	
	return 0;
}
