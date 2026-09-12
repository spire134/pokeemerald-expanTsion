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
	checkflag FLAG_RECEIVED_MUSCLE_BAND
# 10 "data/maps/Quartz_Tunnel_Room/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Quartz_YogaLady_MuscleBand_AlreadyGiven
# 11 "data/maps/Quartz_Tunnel_Room/scripts.pory"
	msgbox Quartz_YogaLady_MuscleBand_Text_1
# 13 "data/maps/Quartz_Tunnel_Room/scripts.pory"
	giveitem ITEM_MUSCLE_BAND
# 14 "data/maps/Quartz_Tunnel_Room/scripts.pory"
	msgbox Quartz_YogaLady_MuscleBand_Text_2
# 15 "data/maps/Quartz_Tunnel_Room/scripts.pory"
	setflag FLAG_RECEIVED_MUSCLE_BAND
# 16 "data/maps/Quartz_Tunnel_Room/scripts.pory"
	waitmessage
# 17 "data/maps/Quartz_Tunnel_Room/scripts.pory"
	release
	return


Quartz_YogaLady_MuscleBand_AlreadyGiven::
# 21 "data/maps/Quartz_Tunnel_Room/scripts.pory"
	msgbox Quartz_YogaLady_MuscleBand_AlreadyGiven_Text_0
# 23 "data/maps/Quartz_Tunnel_Room/scripts.pory"
	waitmessage
# 24 "data/maps/Quartz_Tunnel_Room/scripts.pory"
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
# 11 "data/maps/Quartz_Tunnel_Room/scripts.pory"
	.string "Yoga Instructor: You look like someone\n"
	.string "who could use a Muscle Band!\p"
	.string "Here, take this to help strengthen your\n"
	.string "POKéMON's physical moves during\l"
	.string "battles!$"

Quartz_YogaLady_MuscleBand_Text_2:
# 14 "data/maps/Quartz_Tunnel_Room/scripts.pory"
	.string "{PLAYER} received a Muscle Band!$"

Quartz_YogaLady_MuscleBand_AlreadyGiven_Text_0:
# 21 "data/maps/Quartz_Tunnel_Room/scripts.pory"
	.string "Yoga Instructor: Keep up your training\n"
	.string "with that Muscle Band!\p"
	.string "Your POKéMON will thank you for it\n"
	.string "during battles!\n"
	.string "$"
