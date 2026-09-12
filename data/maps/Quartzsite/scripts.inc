Quartzsite_MapScripts::
	.byte 0


Quartzite_Upper_Road::
# 4 "data/maps/Quartzsite/scripts.pory"
	lock
# 5 "data/maps/Quartzsite/scripts.pory"
	fadescreen FADE_TO_BLACK
# 6 "data/maps/Quartzsite/scripts.pory"
	warp MAP_QUARTZ_TUNNELS, 3, 2
# 7 "data/maps/Quartzsite/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 8 "data/maps/Quartzsite/scripts.pory"
	release
	return


Quartzite_Lower_Road::
# 12 "data/maps/Quartzsite/scripts.pory"
	lock
# 13 "data/maps/Quartzsite/scripts.pory"
	fadescreen FADE_TO_BLACK
# 14 "data/maps/Quartzsite/scripts.pory"
	warp MAP_QUARTZ_TUNNELS, 17, 7
# 15 "data/maps/Quartzsite/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 16 "data/maps/Quartzsite/scripts.pory"
	release
	return


Library_BackEntrance::
# 20 "data/maps/Quartzsite/scripts.pory"
	lock
# 21 "data/maps/Quartzsite/scripts.pory"
	fadescreen FADE_TO_BLACK
# 22 "data/maps/Quartzsite/scripts.pory"
	warp MAP_QUARTZ_LIBRARY, 12, 4
# 23 "data/maps/Quartzsite/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 24 "data/maps/Quartzsite/scripts.pory"
	release
	return


Quartzite_Welcome_Sign::
# 28 "data/maps/Quartzsite/scripts.pory"
	lock
# 29 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartzite_Welcome_Sign_Text_0, MSGBOX_SIGN
# 30 "data/maps/Quartzsite/scripts.pory"
	release
	return


Quartz_BookStreetSign::
# 34 "data/maps/Quartzsite/scripts.pory"
	lock
# 35 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_BookStreetSign_Text_0, MSGBOX_SIGN
# 37 "data/maps/Quartzsite/scripts.pory"
	release
	return


Quartz_ResidenceStreetSign::
# 41 "data/maps/Quartzsite/scripts.pory"
	lock
# 42 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_ResidenceStreetSign_Text_0, MSGBOX_SIGN
# 44 "data/maps/Quartzsite/scripts.pory"
	release
	return


Quartz_ScenicQuarryView::
# 48 "data/maps/Quartzsite/scripts.pory"
	lock
# 49 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_ScenicQuarryView_Text_0, MSGBOX_SIGN
# 51 "data/maps/Quartzsite/scripts.pory"
	checkitem ITEM_SUPER_ROD
# 52 "data/maps/Quartzsite/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Quartz_ScenicQuarryView_2
# 65 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_ScenicQuarryView_Text_4, MSGBOX_SIGN
Quartz_ScenicQuarryView_1:
# 69 "data/maps/Quartzsite/scripts.pory"
	release
	return

Quartz_ScenicQuarryView_2:
# 53 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_ScenicQuarryView_Text_1, MSGBOX_YESNO
# 56 "data/maps/Quartzsite/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Quartz_ScenicQuarryView_5
# 62 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_ScenicQuarryView_Text_3
	goto Quartz_ScenicQuarryView_1

Quartz_ScenicQuarryView_5:
# 57 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_ScenicQuarryView_Text_2
# 59 "data/maps/Quartzsite/scripts.pory"
	setwildbattle SPECIES_RELICANTH, 40
# 60 "data/maps/Quartzsite/scripts.pory"
	dowildbattle
	goto Quartz_ScenicQuarryView_1


Quartz_Hive_Blocker::
# 73 "data/maps/Quartzsite/scripts.pory"
	lock
# 74 "data/maps/Quartzsite/scripts.pory"
	faceplayer
# 75 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_Hive_Blocker_Text_0
# 77 "data/maps/Quartzsite/scripts.pory"
	waitmessage
# 78 "data/maps/Quartzsite/scripts.pory"
	release
	return


Quartz_StationSign::
# 82 "data/maps/Quartzsite/scripts.pory"
	lock
# 83 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_StationSign_Text_0
# 85 "data/maps/Quartzsite/scripts.pory"
	release
	return


Quartz_PumpSign::
# 89 "data/maps/Quartzsite/scripts.pory"
	lock
# 90 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_PumpSign_Text_0
# 92 "data/maps/Quartzsite/scripts.pory"
	release
	return


Quartz_Hive_LeftGuard::
# 96 "data/maps/Quartzsite/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_1, Quartz_Hive_LeftGuard_Text_0, Quartz_Hive_LeftGuard_Text_1
# 100 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_Hive_LeftGuard_Text_2, MSGBOX_AUTOCLOSE
# 101 "data/maps/Quartzsite/scripts.pory"
	waitmessage
	return


Quartz_Hive_RightGuard::
# 105 "data/maps/Quartzsite/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_2, Quartz_Hive_RightGuard_Text_0, Quartz_Hive_RightGuard_Text_1
# 109 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_Hive_RightGuard_Text_2, MSGBOX_AUTOCLOSE
# 110 "data/maps/Quartzsite/scripts.pory"
	waitmessage
	return


Quartz_Hive_RunningGuard::
# 114 "data/maps/Quartzsite/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_3, Quartz_Hive_RunningGuard_Text_0, Quartz_Hive_RunningGuard_Text_1
# 119 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_Hive_RunningGuard_Text_2, MSGBOX_AUTOCLOSE
# 120 "data/maps/Quartzsite/scripts.pory"
	waitmessage
	return


Quartz_GoodRod_Fisherman::
# 124 "data/maps/Quartzsite/scripts.pory"
	lock
# 125 "data/maps/Quartzsite/scripts.pory"
	faceplayer
# 126 "data/maps/Quartzsite/scripts.pory"
	goto_if_unset FLAG_RECEIVED_GOOD_ROD, Quartz_GoodRod_Fisherman_2
# 135 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_GoodRod_Fisherman_Text_2
Quartz_GoodRod_Fisherman_1:
# 137 "data/maps/Quartzsite/scripts.pory"
	release
	return

Quartz_GoodRod_Fisherman_2:
# 127 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_GoodRod_Fisherman_Text_0
# 129 "data/maps/Quartzsite/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 130 "data/maps/Quartzsite/scripts.pory"
	setflag FLAG_RECEIVED_GOOD_ROD
# 131 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_GoodRod_Fisherman_Text_1
	goto Quartz_GoodRod_Fisherman_1


Quartzite_Welcome_Sign_Text_0:
# 29 "data/maps/Quartzsite/scripts.pory"
	.string "Quartzsite: The Bedrock of Society!$"

Quartz_BookStreetSign_Text_0:
# 35 "data/maps/Quartzsite/scripts.pory"
	.string "Quartzite Book Street\n"
	.string "Home to the Quartzite Library$"

Quartz_ResidenceStreetSign_Text_0:
# 42 "data/maps/Quartzsite/scripts.pory"
	.string "Quartzite Slate Street\n"
	.string "Peaceful homes for hardworking\l"
	.string "citizens$"

Quartz_ScenicQuarryView_Text_0:
# 49 "data/maps/Quartzsite/scripts.pory"
	.string "You gaze out over the vast quarry.\n"
	.string "Water cascades down the rocky walls,\n"
	.string "$"

Quartz_ScenicQuarryView_Text_1:
# 53 "data/maps/Quartzsite/scripts.pory"
	.string "and you notice a glimmering pond below.\n"
	.string "It looks like a great spot to fish!\n"
	.string "Cast your Super Rod here to see what\l"
	.string "you can catch!$"

Quartz_ScenicQuarryView_Text_2:
# 57 "data/maps/Quartzsite/scripts.pory"
	.string "You cast your Super Rod into the pond\n"
	.string "and wait patiently.\n"
	.string "After a few moments, you feel a tug on\l"
	.string "the line!$"

Quartz_ScenicQuarryView_Text_3:
# 62 "data/maps/Quartzsite/scripts.pory"
	.string "You decide not to fish here right now.$"

Quartz_ScenicQuarryView_Text_4:
# 65 "data/maps/Quartzsite/scripts.pory"
	.string "You notice a glimmering pond below.\n"
	.string "It looks like a great spot to fish!\n"
	.string "If you had a Super Rod, you could cast\l"
	.string "it here to see what you can catch!$"

Quartz_Hive_Blocker_Text_0:
# 75 "data/maps/Quartzsite/scripts.pory"
	.string "Hive Drone: Buzz off, Ranger! You won't\n"
	.string "be getting through here today! The\l"
	.string "Seer runs this city now!$"

Quartz_StationSign_Text_0:
# 83 "data/maps/Quartzsite/scripts.pory"
	.string "Quartzite Station\n"
	.string "Senior Ranger: Captain Rojan$"

Quartz_PumpSign_Text_0:
# 90 "data/maps/Quartzsite/scripts.pory"
	.string "Quartzsite Pump House\n"
	.string "Keeping the Quarry Clear!$"

Quartz_Hive_LeftGuard_Text_0:
# 97 "data/maps/Quartzsite/scripts.pory"
	.string "Hive Drone: You think you can just walk\n"
	.string "around here?\n"
	.string "$"

Quartz_Hive_LeftGuard_Text_1:
# 98 "data/maps/Quartzsite/scripts.pory"
	.string "Hive Drone: Ugh… You got lucky this\n"
	.string "time, Ranger.$"

Quartz_Hive_LeftGuard_Text_2:
# 100 "data/maps/Quartzsite/scripts.pory"
	.string "Hive Drone: The Seer won't be pleased…$"

Quartz_Hive_RightGuard_Text_0:
# 106 "data/maps/Quartzsite/scripts.pory"
	.string "Hive Drone: This area is off-limits to\n"
	.string "Rangers!\n"
	.string "$"

Quartz_Hive_RightGuard_Text_1:
# 107 "data/maps/Quartzsite/scripts.pory"
	.string "Hive Drone: No... How could I lose to a\n"
	.string "Ranger…$"

Quartz_Hive_RightGuard_Text_2:
# 109 "data/maps/Quartzsite/scripts.pory"
	.string "Hive Drone: The Seer punish us for\n"
	.string "this…$"

Quartz_Hive_RunningGuard_Text_0:
# 115 "data/maps/Quartzsite/scripts.pory"
	.string "Hive Drone: You can't be here, Ranger!\n"
	.string "The Seer is set on the mission!$"

Quartz_Hive_RunningGuard_Text_1:
# 117 "data/maps/Quartzsite/scripts.pory"
	.string "Hive Drone: At least I slowed you down,\n"
	.string "haha!$"

Quartz_Hive_RunningGuard_Text_2:
# 119 "data/maps/Quartzsite/scripts.pory"
	.string "Hive Drone: The Seer will be unhappy…$"

Quartz_GoodRod_Fisherman_Text_0:
# 127 "data/maps/Quartzsite/scripts.pory"
	.string "Fisherman: That look in your eyes tells\n"
	.string "me you're itching for a fishing.\p"
	.string "Here, take this Good Rod. It's a great\n"
	.string "way to curb those angling cravings!$"

Quartz_GoodRod_Fisherman_Text_1:
# 131 "data/maps/Quartzsite/scripts.pory"
	.string "Fisherman: With this rod, you'll be\n"
	.string "reeling in Pokémon in no time!\p"
	.string "Just head to any body of water and give\n"
	.string "it a try. Happy fishing!$"

Quartz_GoodRod_Fisherman_Text_2:
# 135 "data/maps/Quartzsite/scripts.pory"
	.string "Fisherman: Remember, fishing is all\n"
	.string "about patience and timing.\p"
	.string "$"
