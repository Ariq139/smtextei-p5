struct equip_gun{
	int dmg, acc, bullet;
	int price;
	string name, desc;
	//char gun_type; //mc = pistol, makoto = revolver, yusuke = AR, haru = GL, ann = SMG, ryuji = shotgun, morgana = slingshot, akechi = raygun/silenced
};

struct equip_armor{
	int def, evs;
	int price;
	//char effect;
	string name, desc;
	//char armor_type; //male, female, unisex, morgana, unusable
};

struct equip_melee{
	int dmg, acc;
	int price;
	char effect;
	string name, desc;
	//char melee_type; // mc = knife, morgana = sword, akechi = saber, ann = whip, yusuke = katana, haru = axe, makoto = knuckles, ryuji = rod/mace
};

struct equip_outfit{
	string name, desc;
};

struct equip_acc{
	string name, desc;
	int price;
	//char effect;
};
