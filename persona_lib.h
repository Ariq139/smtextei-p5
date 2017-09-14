//The main library for most files

//Reference : https://stackoverflow.com/questions/12183008/how-to-use-enums-in-c
//

struct persona_stats{
	string name, arcana, desc;
	int st, ma, en, ag, lu;
	int lvl, exp;
	char phys, gun, fire, ice, elec, wind, psy, nuclear, bless, curse; //0 = nothing, 1 = weak, 2 = str, 3 = drain
	persona_skills skill[10]; //should be 8 
};

struct persona_skills{
	string name, desc;
	int dmg, sp_cost, hp_cost;
	//char type; //phys, gun, fire, ice, elec, wind, psy, nuclear, bless, curse, almighty; support, passive;
};
