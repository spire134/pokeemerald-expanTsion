STATIC_VALLEY_MapScripts::
	.byte 0


Zatik_Woman_1::
# 4 "data/maps/STATIC_VALLEY/scripts.pory"
	trainerbattle_single TRAINER_DAISY, Zatik_Woman_1_Text_0, Zatik_Woman_1_Text_1
# 9 "data/maps/STATIC_VALLEY/scripts.pory"
	msgbox Zatik_Woman_1_Text_2, MSGBOX_AUTOCLOSE
# 10 "data/maps/STATIC_VALLEY/scripts.pory"
	waitmessage
	return


Zatik_Woman_2::
# 14 "data/maps/STATIC_VALLEY/scripts.pory"
	trainerbattle_single TRAINER_JOCELYN, Zatik_Woman_2_Text_0, Zatik_Woman_2_Text_1
# 18 "data/maps/STATIC_VALLEY/scripts.pory"
	msgbox Zatik_Woman_2_Text_2, MSGBOX_AUTOCLOSE
# 19 "data/maps/STATIC_VALLEY/scripts.pory"
	waitmessage
	return


Zatik_Camper_1::
# 23 "data/maps/STATIC_VALLEY/scripts.pory"
	trainerbattle_single TRAINER_DREW, Zatik_Camper_1_Text_0, Zatik_Camper_1_Text_1
# 27 "data/maps/STATIC_VALLEY/scripts.pory"
	msgbox Zatik_Camper_1_Text_2, MSGBOX_AUTOCLOSE
# 28 "data/maps/STATIC_VALLEY/scripts.pory"
	waitmessage
	return


Zatik_Rocker_1::
# 32 "data/maps/STATIC_VALLEY/scripts.pory"
	trainerbattle_single TRAINER_FABIAN, Zatik_Rocker_1_Text_0, Zatik_Rocker_1_Text_1
# 36 "data/maps/STATIC_VALLEY/scripts.pory"
	msgbox Zatik_Rocker_1_Text_2, MSGBOX_AUTOCLOSE
# 37 "data/maps/STATIC_VALLEY/scripts.pory"
	waitmessage
	return


Zatik_Gulch_Sign::
# 41 "data/maps/STATIC_VALLEY/scripts.pory"
	lock
# 42 "data/maps/STATIC_VALLEY/scripts.pory"
	msgbox Zatik_Gulch_Sign_Text_0, MSGBOX_SIGN
# 44 "data/maps/STATIC_VALLEY/scripts.pory"
	release
	return


Zatik_Woman_1_Text_0:
# 6 "data/maps/STATIC_VALLEY/scripts.pory"
	.string "The view is so nice from here.\p"
	.string "Perfect for a lively battle!$"

Zatik_Woman_1_Text_1:
# 7 "data/maps/STATIC_VALLEY/scripts.pory"
	.string "Fighting here was so refreshing!$"

Zatik_Woman_1_Text_2:
# 9 "data/maps/STATIC_VALLEY/scripts.pory"
	.string "The best flowers grow just out of my\n"
	.string "reach!$"

Zatik_Woman_2_Text_0:
# 15 "data/maps/STATIC_VALLEY/scripts.pory"
	.string "I love exploring new places with my\n"
	.string "Pokémon!$"

Zatik_Woman_2_Text_1:
# 16 "data/maps/STATIC_VALLEY/scripts.pory"
	.string "What a wonderful adventure we had!$"

Zatik_Woman_2_Text_2:
# 18 "data/maps/STATIC_VALLEY/scripts.pory"
	.string "I wish I could stay here forever!$"

Zatik_Camper_1_Text_0:
# 24 "data/maps/STATIC_VALLEY/scripts.pory"
	.string "Camping out in nature is the best way\n"
	.string "to bond with your Pokémon!$"

Zatik_Camper_1_Text_1:
# 25 "data/maps/STATIC_VALLEY/scripts.pory"
	.string "That was an unforgettable experience!$"

Zatik_Camper_1_Text_2:
# 27 "data/maps/STATIC_VALLEY/scripts.pory"
	.string "The great outdoors is where I feel most\n"
	.string "alive!$"

Zatik_Rocker_1_Text_0:
# 33 "data/maps/STATIC_VALLEY/scripts.pory"
	.string "Let me show you how to get WILD!$"

Zatik_Rocker_1_Text_1:
# 34 "data/maps/STATIC_VALLEY/scripts.pory"
	.string "That was one WILD time!$"

Zatik_Rocker_1_Text_2:
# 36 "data/maps/STATIC_VALLEY/scripts.pory"
	.string "Stay WILD, man.$"

Zatik_Gulch_Sign_Text_0:
# 42 "data/maps/STATIC_VALLEY/scripts.pory"
	.string "Welcome to Zatik Gulch!\n"
	.string "Watch for wild Pokémon and trainers\l"
	.string "looking for a challenge.$"
