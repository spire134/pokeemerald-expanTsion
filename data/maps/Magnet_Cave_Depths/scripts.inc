Magnet_Cave_Depths_MapScripts::
	.byte 0


Magnet_Cave_Depths_Hiker::
# 4 "data/maps/Magnet_Cave_Depths/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, Magnet_Cave_Depths_Hiker_Text_0, Magnet_Cave_Depths_Hiker_Text_1
# 8 "data/maps/Magnet_Cave_Depths/scripts.pory"
	msgbox Magnet_Cave_Depths_Hiker_Text_2, MSGBOX_AUTOCLOSE
# 9 "data/maps/Magnet_Cave_Depths/scripts.pory"
	waitmessage
	return


Magnet_Cave_Depths_Couple::
# 13 "data/maps/Magnet_Cave_Depths/scripts.pory"
	trainerbattle_single TRAINER_KATE_AND_JOY, Magnet_Cave_Depths_Couple_Text_0, Magnet_Cave_Depths_Couple_Text_1
# 18 "data/maps/Magnet_Cave_Depths/scripts.pory"
	msgbox Magnet_Cave_Depths_Couple_Text_2, MSGBOX_AUTOCLOSE
# 19 "data/maps/Magnet_Cave_Depths/scripts.pory"
	waitmessage
	return


Magnet_Cave_Depths_Hiker_Text_0:
# 5 "data/maps/Magnet_Cave_Depths/scripts.pory"
	.string "A hike through a cave beats the desert\n"
	.string "any day!$"

Magnet_Cave_Depths_Hiker_Text_1:
# 6 "data/maps/Magnet_Cave_Depths/scripts.pory"
	.string "Out of juice!$"

Magnet_Cave_Depths_Hiker_Text_2:
# 8 "data/maps/Magnet_Cave_Depths/scripts.pory"
	.string "This cave has some 'shocking' Pokémon!$"

Magnet_Cave_Depths_Couple_Text_0:
# 14 "data/maps/Magnet_Cave_Depths/scripts.pory"
	.string "Our favorite pastime is exploring caves\n"
	.string "together!\n"
	.string "Especially ones with Electric-type\l"
	.string "Pokémon!$"

Magnet_Cave_Depths_Couple_Text_1:
# 16 "data/maps/Magnet_Cave_Depths/scripts.pory"
	.string "Oh no, our POKéMON are out of energy!$"

Magnet_Cave_Depths_Couple_Text_2:
# 18 "data/maps/Magnet_Cave_Depths/scripts.pory"
	.string "We should head to the surface soon, it's\n"
	.string "getting late.$"
