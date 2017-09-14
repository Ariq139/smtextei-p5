#include "persona_lib.h"
#include "equip_lib.h"

struct mc_info{
	string fname, lname;
	int lvl, exp, hp, sp;
	equip_melee mc_melee;
	equip_gun mc_gun;
	equip_armor mc_armor;
	equip_acc mc_acc;
	teammate_info active_tm[5]; //should be 4 but eh
	//** mc_persona[15]; //range from 6 to 12, assuming MC have max Fool SLink
};

struct teammate_info{
	string fname, lname;
	//int lvl, exp; user lvl + exp = persona lvl + exp
	int hp, sp;
	equip_melee tm_melee;
	equip_gun tm_gun;
	equip_armor tm_armor;
	equip_acc tm_acc;
	//** tm_persona;
};
