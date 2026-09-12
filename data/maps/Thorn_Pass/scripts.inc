Thorn_Pass_MapScripts::
	.byte 0


Thorn_Camper_1::
# 5 "data/maps/Thorn_Pass/scripts.pory"
	trainerbattle_single TRAINER_FLINT, Thorn_Camper_1_Text_0, Thorn_Camper_1_Text_1
# 9 "data/maps/Thorn_Pass/scripts.pory"
	msgbox Thorn_Camper_1_Text_2, MSGBOX_AUTOCLOSE
# 10 "data/maps/Thorn_Pass/scripts.pory"
	waitmessage
# 11 "data/maps/Thorn_Pass/scripts.pory"
	releaseall
	return


Thorn_Catcher_1::
# 15 "data/maps/Thorn_Pass/scripts.pory"
	trainerbattle_single TRAINER_DAVIS, Thorn_Catcher_1_Text_0, Thorn_Catcher_1_Text_1
# 19 "data/maps/Thorn_Pass/scripts.pory"
	msgbox Thorn_Catcher_1_Text_2, MSGBOX_AUTOCLOSE
# 20 "data/maps/Thorn_Pass/scripts.pory"
	waitmessage
# 21 "data/maps/Thorn_Pass/scripts.pory"
	releaseall
	return


Thorn_Fighter_1::
# 25 "data/maps/Thorn_Pass/scripts.pory"
	trainerbattle_single TRAINER_CRISTIAN, Thorn_Fighter_1_Text_0, Thorn_Fighter_1_Text_1
# 29 "data/maps/Thorn_Pass/scripts.pory"
	msgbox Thorn_Fighter_1_Text_2, MSGBOX_AUTOCLOSE
# 30 "data/maps/Thorn_Pass/scripts.pory"
	waitmessage
# 31 "data/maps/Thorn_Pass/scripts.pory"
	releaseall
	return


Thorn_Psychic_1::
# 35 "data/maps/Thorn_Pass/scripts.pory"
	trainerbattle_single TRAINER_NICHOLAS, Thorn_Psychic_1_Text_0, Thorn_Psychic_1_Text_1
# 39 "data/maps/Thorn_Pass/scripts.pory"
	msgbox Thorn_Psychic_1_Text_2, MSGBOX_AUTOCLOSE
# 40 "data/maps/Thorn_Pass/scripts.pory"
	waitmessage
# 41 "data/maps/Thorn_Pass/scripts.pory"
	releaseall
	return


Thorn_Ninja_Boy_1::
# 45 "data/maps/Thorn_Pass/scripts.pory"
	trainerbattle_single TRAINER_YASU, Thorn_Ninja_Boy_1_Text_0, Thorn_Ninja_Boy_1_Text_1
# 49 "data/maps/Thorn_Pass/scripts.pory"
	msgbox Thorn_Ninja_Boy_1_Text_2, MSGBOX_AUTOCLOSE
# 50 "data/maps/Thorn_Pass/scripts.pory"
	waitmessage
# 51 "data/maps/Thorn_Pass/scripts.pory"
	releaseall
	return


Thorn_Camper_1_Text_0:
# 6 "data/maps/Thorn_Pass/scripts.pory"
	.string "It's so wet here, but I love it!\n"
	.string "I could stay here all day!$"

Thorn_Camper_1_Text_1:
# 7 "data/maps/Thorn_Pass/scripts.pory"
	.string "The rain made this battle so much fun!$"

Thorn_Camper_1_Text_2:
# 9 "data/maps/Thorn_Pass/scripts.pory"
	.string "I just love the rain!$"

Thorn_Catcher_1_Text_0:
# 16 "data/maps/Thorn_Pass/scripts.pory"
	.string "There were some funny dressed guys\n"
	.string "earlier.\n"
	.string "I want a BUG costume too!$"

Thorn_Catcher_1_Text_1:
# 17 "data/maps/Thorn_Pass/scripts.pory"
	.string "Which costume would I want to wear\n"
	.string "though?$"

Thorn_Catcher_1_Text_2:
# 19 "data/maps/Thorn_Pass/scripts.pory"
	.string "I wonder where they get the outfits!\n"
	.string "Those goons are everywhere!$"

Thorn_Fighter_1_Text_0:
# 26 "data/maps/Thorn_Pass/scripts.pory"
	.string "I'm studying how to smash rocks at\n"
	.string "Quartzite\n"
	.string "Maybe I should study you next!$"

Thorn_Fighter_1_Text_1:
# 27 "data/maps/Thorn_Pass/scripts.pory"
	.string "That rock smashing technique needs\n"
	.string "work!$"

Thorn_Fighter_1_Text_2:
# 29 "data/maps/Thorn_Pass/scripts.pory"
	.string "I bet I could smash a rock with my eyes\n"
	.string "closed!$"

Thorn_Psychic_1_Text_0:
# 36 "data/maps/Thorn_Pass/scripts.pory"
	.string "I foresaw I should come here, and find\n"
	.string "myself.$"

Thorn_Psychic_1_Text_1:
# 37 "data/maps/Thorn_Pass/scripts.pory"
	.string "I only found myself in the water's\n"
	.string "reflection.$"

Thorn_Psychic_1_Text_2:
# 39 "data/maps/Thorn_Pass/scripts.pory"
	.string "I think I need to meditate more.$"

Thorn_Ninja_Boy_1_Text_0:
# 46 "data/maps/Thorn_Pass/scripts.pory"
	.string "I practice my ninja moves in the rain!$"

Thorn_Ninja_Boy_1_Text_1:
# 47 "data/maps/Thorn_Pass/scripts.pory"
	.string "The rain gives me extra motivation!$"

Thorn_Ninja_Boy_1_Text_2:
# 49 "data/maps/Thorn_Pass/scripts.pory"
	.string "Ninja training must wait for next\n"
	.string "rainfall!$"
