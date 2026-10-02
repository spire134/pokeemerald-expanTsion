Quartz_Tunnel_Room_MapScripts::
	.byte 0


Quartz_YogaLady_MuscleBand::
# 4 "data/maps/Quartz_Tunnel_Room/scripts.pory"
	lock
# 5 "data/maps/Quartz_Tunnel_Room/scripts.pory"
	faceplayer
# 6 "data/maps/Quartz_Tunnel_Room/scripts.pory"
	msgbox Quartz_YogaLady_MuscleBand_Text_0
# 8 "data/maps/Quartz_Tunnel_Room/scripts.pory"
	waitmessage
# 9 "data/maps/Quartz_Tunnel_Room/scripts.pory"
	goto_if_unset FLAG_RECEIVED_MUSCLE_BAND, Quartz_YogaLady_MuscleBand_2
# 17 "data/maps/Quartz_Tunnel_Room/scripts.pory"
	msgbox Quartz_YogaLady_MuscleBand_Text_3
# 19 "data/maps/Quartz_Tunnel_Room/scripts.pory"
	waitmessage
Quartz_YogaLady_MuscleBand_1:
# 21 "data/maps/Quartz_Tunnel_Room/scripts.pory"
	release
	return

Quartz_YogaLady_MuscleBand_2:
# 10 "data/maps/Quartz_Tunnel_Room/scripts.pory"
	msgbox Quartz_YogaLady_MuscleBand_Text_1
# 12 "data/maps/Quartz_Tunnel_Room/scripts.pory"
	giveitem ITEM_MUSCLE_BAND
# 13 "data/maps/Quartz_Tunnel_Room/scripts.pory"
	msgbox Quartz_YogaLady_MuscleBand_Text_2
# 14 "data/maps/Quartz_Tunnel_Room/scripts.pory"
	setflag FLAG_RECEIVED_MUSCLE_BAND
# 15 "data/maps/Quartz_Tunnel_Room/scripts.pory"
	waitmessage
	goto Quartz_YogaLady_MuscleBand_1


Quartz_Prouddad::
# 25 "data/maps/Quartz_Tunnel_Room/scripts.pory"
	lock
# 26 "data/maps/Quartz_Tunnel_Room/scripts.pory"
	faceplayer
# 27 "data/maps/Quartz_Tunnel_Room/scripts.pory"
	msgbox Quartz_Prouddad_Text_0
# 28 "data/maps/Quartz_Tunnel_Room/scripts.pory"
	waitmessage
# 29 "data/maps/Quartz_Tunnel_Room/scripts.pory"
	release
	return


Quartz_YogaLady_MuscleBand_Text_0:
# 6 "data/maps/Quartz_Tunnel_Room/scripts.pory"
	.string "I practice yoga here to keep my body\n"
	.string "and mind strong.\p"
	.string "A strong body leads to a strong mind,\n"
	.string "and a strong mind leads to a strong\l"
	.string "POKéMON!\n"
	.string "$"

Quartz_YogaLady_MuscleBand_Text_1:
# 10 "data/maps/Quartz_Tunnel_Room/scripts.pory"
	.string "You look like someone who could use a\n"
	.string "Muscle Band!\p"
	.string "Here, take this to help strengthen your\n"
	.string "POKéMON's physical moves during\l"
	.string "battles!$"

Quartz_YogaLady_MuscleBand_Text_2:
# 13 "data/maps/Quartz_Tunnel_Room/scripts.pory"
	.string "{PLAYER} received a Muscle Band!$"

Quartz_YogaLady_MuscleBand_Text_3:
# 17 "data/maps/Quartz_Tunnel_Room/scripts.pory"
	.string "Keep up your training with that Muscle\n"
	.string "Band!\p"
	.string "Your POKéMON will thank you for it\n"
	.string "during battles!\n"
	.string "$"

Quartz_Prouddad_Text_0:
# 27 "data/maps/Quartz_Tunnel_Room/scripts.pory"
	.string "My child is training hard to become a\n"
	.string "great POKéMON Trainer!\n"
	.string "$"
